#!/usr/bin/env python3
"""
generate_jldocs.py – Build Markdown documentation for jlFriCAS constructors and operations.

Strategy
--------
1. Scans `src/algebra/*.spad` to discover all Julia-extension constructors
   (Categories, Domains, Packages with JL*, NM*, WS*, JFriCAS* prefixes).
2. For each constructor, queries FriCAS in batch mode (or extracts from SPAD):
   - constructorDocumentation('Name)$SpadDoc → Description
   - )show Name → Signatures
   - operationDocumentation('op)$SpadDoc for operations in the constructor → Operation docstrings
3. Renders GitHub-flavored Markdown into `docs/constructors/<Name>.md` with:
   - Header with kind, source link, and subsystem badges
   - Description section
   - Signatures section with full )show output
   - Operations section with anchor links above and detailed operation documentation below
"""

import argparse
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile

# ── Command Line Arguments ───────────────────────────────────────────────────

parser = argparse.ArgumentParser(description="Build Markdown documentation for jlFriCAS constructors.")
parser.add_argument("--ws", action="store_true", help="Also build WS* (Wolfram/MathLink) constructor documentation")
parser.add_argument("--ws-only", action="store_true", help="Only build WS* (Wolfram/MathLink) constructor documentation")
parser.add_argument("--jl-only", action="store_true", help="Only build JL* (Native Julia) constructor documentation")
parser.add_argument("--nm-only", action="store_true", help="Only build NM* (Nemo/FLINT) constructor documentation")
parser.add_argument("--constructor", "-c", type=str, default=None, help="Build documentation for a specific constructor name")
parser.add_argument("--out-dir", "-o", type=str, default="docs/constructors", help="Output directory for constructor markdown files (default: docs/constructors)")
parser.add_argument("--spad-dir", type=str, default="src/algebra", help="Directory containing SPAD source files (default: src/algebra)")
parser.add_argument("--fricas-cmd", type=str, default=os.environ.get("FRICAS_CMD", "jlfricas"), help="FriCAS executable command (default: jlfricas or fricas)")
parser.add_argument("--clean", action="store_true", help="Clean output directory (preserves WS*.md unless --ws or --ws-only is set)")

args, unknown = parser.parse_known_args()

OUT_DIR = args.out_dir
SPAD_DIR = args.spad_dir
GITHUB_BASE = "https://github.com/gvanuxem/jlfricas/blob/master/"

os.makedirs(OUT_DIR, exist_ok=True)
if args.clean:
    for f in os.listdir(OUT_DIR):
        if f.endswith(".md"):
            # Preserve WS*.md unless explicitly targeting WS
            if f.startswith("WS") and not (args.ws or args.ws_only):
                continue
            os.remove(os.path.join(OUT_DIR, f))

# ── SPAD Docstring Formatting Helpers ────────────────────────────────────────

def extract_brace(s: str, pos: int) -> tuple[str, int]:
    """Given string s and pos pointing at opening '{', returns (inner_content, next_pos)."""
    n = len(s)
    count = 1
    i = pos + 1
    res = []
    while i < n and count > 0:
        if s[i] == "\\" and i + 1 < n:
            res.append(s[i:i+2])
            i += 2
        elif s[i] == "{":
            count += 1
            res.append(s[i])
            i += 1
        elif s[i] == "}":
            count -= 1
            if count > 0:
                res.append(s[i])
            i += 1
        else:
            res.append(s[i])
            i += 1
    return "".join(res), i

def clean_spad_macros(s: str) -> str:
    """Clean SPAD TeX markup macros like \\spad{...}, \\em{...}, \\spadfunFrom{...}{...}, etc."""
    n = len(s)
    res = []
    i = 0
    while i < n:
        if s[i] == "\\":
            i += 1
            if i >= n:
                res.append("\\")
                break
            start = i
            while i < n and (s[i].isalpha() or s[i] in "@&_"):
                i += 1
            mac = s[start:i]
            if not mac:
                # Escaped char like \{, \}, \%, \\, \_
                if i < n:
                    res.append(s[i])
                    i += 1
                continue

            if mac in ("spad", "spadop", "spadfun", "spadtype", "url", "em", "it", "bold", "spadvar", "spadgloss", "pspadfun", "spadsys", "spadpaste", "spadignore", "spadcommand", "footnote", "s"):
                if i < n and s[i] == "{":
                    inner, next_pos = extract_brace(s, i)
                    cleaned_inner = clean_spad_macros(inner)
                    if mac in ("em", "it"):
                        res.append(f"*{cleaned_inner}*")
                    elif mac == "bold":
                        res.append(f"**{cleaned_inner}**")
                    else:
                        res.append(cleaned_inner)
                    i = next_pos
                else:
                    res.append(mac)
            elif mac in ("spadfunFrom", "spadopFrom"):
                if i < n and s[i] == "{":
                    arg1, p1 = extract_brace(s, i)
                    i = p1
                    if i < n and s[i] == "{":
                        arg2, p2 = extract_brace(s, i)
                        i = p2
                        res.append(f"{clean_spad_macros(arg1)} from {clean_spad_macros(arg2)}")
                    else:
                        res.append(clean_spad_macros(arg1))
                else:
                    res.append(mac)
            elif mac in ("blankline", "newline"):
                res.append("\n\n")
            elif mac == "tab":
                res.append("    ")
            elif mac == "space":
                res.append(" ")
            elif mac == "LaTeX":
                res.append("LaTeX")
            elif mac == "TeX":
                res.append("TeX")
            elif mac == "undocumented":
                res.append("is undocumented")
            else:
                if i < n and s[i] == "{":
                    inner, next_pos = extract_brace(s, i)
                    res.append(clean_spad_macros(inner))
                    i = next_pos
                else:
                    res.append(mac)
        elif s[i] in ("{", "}"):
            i += 1
        else:
            res.append(s[i])
            i += 1
    return "".join(res)

def format_spad_docstring(doc_lines_or_text) -> str:
    """Format docstring lines or raw text into GitHub Markdown with ```fricas code blocks for examples."""
    if isinstance(doc_lines_or_text, list):
        cleaned_lines = []
        for ln in doc_lines_or_text:
            s = ln.strip()
            if s.startswith("++"):
                s = s[2:].strip()
            cleaned_lines.append(s)
        raw_text = "\n".join(cleaned_lines)
    else:
        raw_text = doc_lines_or_text or ""
        lines = []
        for ln in raw_text.splitlines():
            s = ln.strip()
            if s.startswith("++"):
                s = s[2:].strip()
            lines.append(s)
        raw_text = "\n".join(lines)

    if not raw_text.strip():
        return ""

    # Clean FriCAS output noise
    raw_text = re.sub(r"(?m)^\s*Value\s*=.*$", "", raw_text)
    raw_text = re.sub(r"\s*Type:\s*Void\s*", "", raw_text)
    raw_text = re.sub(r"(?m)^\s*\)[a-zA-Z].*$", "", raw_text)
    raw_text = re.sub(r"(?m)^\s*(?:constructorDocumentation|operationDocumentation)\(.*$", "", raw_text)
    raw_text = re.sub(r"(?m)^\s*\(\d+\)\s*->.*$", "", raw_text)

    # 1. Extract \example{...} blocks
    segments = []  # list of ('text' | 'example', str)
    i = 0
    n = len(raw_text)
    cur_text = []

    while i < n:
        if raw_text[i:i+8] == "\\example" and i + 8 < n and raw_text[i+8] == "{":
            if cur_text:
                segments.append(("text", "".join(cur_text)))
                cur_text = []
            inner, next_pos = extract_brace(raw_text, i + 8)
            code = inner.replace("\\{", "{").replace("\\}", "}").replace('\\"', '"').strip()
            segments.append(("example", code))
            i = next_pos
        else:
            cur_text.append(raw_text[i])
            i += 1
    if cur_text:
        segments.append(("text", "".join(cur_text)))

    # 2. Also handle Example: blocks from FriCAS SpadDoc output
    expanded = []
    for kind, val in segments:
        if kind == "example":
            expanded.append((kind, val))
        else:
            val_fixed = re.sub(r"Ex\s*ample\s*:\s*", "\nExample: ", val)
            if "Example:" in val_fixed:
                parts = re.split(r"(?m)^Example:\s*", val_fixed)
                if parts[0].strip():
                    expanded.append(("text", parts[0]))
                for p in parts[1:]:
                    p_lines = p.splitlines()
                    ex_lines = []
                    rest_lines = []
                    in_ex = True
                    for ln in p_lines:
                        if not ln.strip():
                            in_ex = False
                            continue
                        if in_ex:
                            ex_lines.append(ln.strip())
                        else:
                            rest_lines.append(ln)
                    if ex_lines:
                        expanded.append(("example", "\n".join(ex_lines)))
                    if rest_lines:
                        expanded.append(("text", "\n".join(rest_lines)))
            else:
                expanded.append(("text", val))

    # 3. Group consecutive examples together if separated only by whitespace
    grouped = []
    for kind, val in expanded:
        if kind == "text":
            cleaned = clean_spad_macros(val)
            if not cleaned.strip():
                if grouped and grouped[-1][0] == "example":
                    continue
            grouped.append(("text", cleaned))
        elif kind == "example":
            if grouped and grouped[-1][0] == "example":
                prev_code = grouped[-1][1]
                grouped[-1] = ("example", f"{prev_code}\n{val}")
            else:
                grouped.append(("example", val))

    # 4. Build formatted markdown
    out_parts = []
    for kind, val in grouped:
        if kind == "text":
            lines = [ln.strip() for ln in val.splitlines() if ln.strip()]
            if lines:
                para = " ".join(lines)
                para = re.sub(r"\s+", " ", para).strip()
                if para:
                    out_parts.append(para)
        elif kind == "example":
            out_parts.append(f"```fricas\n{val}\n```")

    return "\n\n".join(out_parts)

# ── Dynamic Constructor Discovery ────────────────────────────────────────────

CONSTRUCTOR_SOURCES = {}
ABBREV_RE = re.compile(r"^\s*\)abbrev\s+(category|domain|package)\s+(\S+)\s+(\S+)", re.IGNORECASE)

def discover_all_constructors():
    """Scan SPAD directory to discover all Julia-extension constructors and their definitions."""
    if not os.path.exists(SPAD_DIR):
        return []

    constructors = []
    for fname in sorted(os.listdir(SPAD_DIR)):
        if fname in ("jet.spad", "jfricas.spad", "fmtjfricas.spad") or not (fname.startswith("j") and fname.endswith(".spad")):
            continue

        fpath = os.path.join(SPAD_DIR, fname)
        try:
            with open(fpath, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()

            for line_no, line in enumerate(lines, 1):
                m = ABBREV_RE.match(line)
                if m:
                    kind = m.group(1).capitalize()
                    abbrev = m.group(2)
                    cname = m.group(3)

                    # Only document Julia-extension constructors (JL*, NM*, WS*)
                    if not (cname.startswith("JL") or cname.startswith("NM") or cname.startswith("WS") or cname.startswith("Julia")):
                        continue
                    if cname in ("JFriCAS", "JFriCASSupport") or cname.startswith("InnerNM"):
                        continue

                    # Extract SPAD docstrings right after )abbrev
                    doc_lines = []
                    j = line_no
                    while j < len(lines) and lines[j].strip().startswith("++"):
                        doc_lines.append(lines[j].strip()[2:].strip())
                        j += 1

                    filtered_doc_lines = []
                    for d_line in doc_lines:
                        if re.match(r"^(Author|Date Created|Basic Operations|Keywords):", d_line, re.IGNORECASE):
                            continue
                        if d_line.startswith("Description:"):
                            d_line = d_line[len("Description:"):].strip()
                        filtered_doc_lines.append(d_line)

                    doc = format_spad_docstring(filtered_doc_lines)

                    # Group classification
                    if cname.startswith("WS") or fname.startswith("jws"):
                        group = "WS — MathLink"
                        group_code = "WS"
                    elif cname.startswith("NM") or fname.startswith("jn"):
                        group = "NM — Nemo (FLINT)"
                        group_code = "NM"
                    else:
                        group = "JL — Native Julia"
                        group_code = "JL"

                    rel_path = f"{SPAD_DIR}/{fname}"
                    CONSTRUCTOR_SOURCES[cname] = {
                        "path": rel_path,
                        "line": line_no,
                        "abbrev": abbrev,
                        "kind": kind,
                        "group": group,
                        "group_code": group_code,
                        "doc": doc
                    }

                    constructors.append((cname, kind, group, group_code, abbrev, rel_path, line_no, doc))
        except Exception as err:
            print(f"Error reading {fname}: {err}", file=sys.stderr)

    return constructors

ALL_DISCOVERED = discover_all_constructors()
ALL_JLFRICAS = set(c[0] for c in ALL_DISCOVERED)

# Filter constructors according to CLI flags
if args.constructor:
    TARGET_CONSTRUCTORS = [c for c in ALL_DISCOVERED if c[0] == args.constructor or c[4] == args.constructor]
    if not TARGET_CONSTRUCTORS:
        TARGET_CONSTRUCTORS = [(args.constructor, "Domain", "jlFriCAS", "JL", "", "", 1, "")]
elif args.ws_only:
    TARGET_CONSTRUCTORS = [c for c in ALL_DISCOVERED if c[3] == "WS"]
elif args.jl_only:
    TARGET_CONSTRUCTORS = [c for c in ALL_DISCOVERED if c[3] == "JL"]
elif args.nm_only:
    TARGET_CONSTRUCTORS = [c for c in ALL_DISCOVERED if c[3] == "NM"]
elif args.ws:
    TARGET_CONSTRUCTORS = ALL_DISCOVERED
else:
    # Default: build JL and NM constructors, keeping pre-generated WS*.md intact
    TARGET_CONSTRUCTORS = [c for c in ALL_DISCOVERED if c[3] != "WS"]

# ── FriCAS Execution & Parsing ───────────────────────────────────────────────

BANNER_END_RE = re.compile(r"^-+$")
FROM_RE = re.compile(r"From:\s*(.+)")

def check_fricas_available():
    """Check if FriCAS executable is available in PATH or specified location."""
    return shutil.which(args.fricas_cmd) is not None

HAS_FRICAS = check_fricas_available()

def run_fricas_evals(evals: list[str], timeout: int = 60) -> str:
    """Run FriCAS in batch mode using a temporary input file and capture output."""
    if not HAS_FRICAS:
        return "<<FRICAS_UNAVAILABLE>>"
    all_evals = [')lisp (progn (setf (symbol-value (find-symbol "$LINELENGTH" "BOOT")) 120) (values))'] + evals + [')quit']

    with tempfile.NamedTemporaryFile(mode="w", suffix=".input", delete=False) as tf:
        for e in all_evals:
            tf.write(e + "\n")
        tmp_name = tf.name

    cmd_args = [args.fricas_cmd, "-nosman", "-eval", f")read {tmp_name} )quiet"]
    try:
        r = subprocess.run(
            cmd_args,
            input=")quit\n",
            capture_output=True, text=True, timeout=timeout
        )
        return r.stdout
    except subprocess.TimeoutExpired:
        return "<<TIMEOUT>>"
    except Exception as exc:
        return f"<<ERROR: {exc}>>"
    finally:
        if os.path.exists(tmp_name):
            try:
                os.remove(tmp_name)
            except Exception:
                pass

def strip_banner(text: str) -> str:
    lines = text.splitlines()
    dash_count = 0
    start = 0
    for i, ln in enumerate(lines):
        if BANNER_END_RE.match(ln.strip()) and len(ln.strip()) > 10:
            dash_count += 1
            if dash_count == 2:
                start = i + 1
                break
    return "\n".join(lines[start:])

def split_show_block(show_text: str) -> tuple[str, str]:
    """Split )show output into (markdown_header, cleaned_signatures_block)."""
    if not show_text:
        return "", ""

    header_patterns = [
        r"is a (?:domain|category|package) constructor",
        r"^Abbreviation for ",
        r"^This constructor is (?:not )?exposed in this frame",
        r"\d+ names for \d+ operations in this",
        r"^Issue \)?display op",
    ]

    header_lines = []
    sig_lines = []
    in_ops = False

    for ln in show_text.splitlines():
        trimmed = ln.strip()
        if not trimmed:
            continue

        # Dash separator between header and operations
        if re.search(r"-{4,}\s*Operations\s*-{4,}", ln):
            in_ops = True
            continue

        # Stray dash banner lines
        if re.match(r"^\s*-{4,}\s*$", ln):
            continue

        is_header = any(re.search(pat, trimmed) for pat in header_patterns)

        if not in_ops and is_header:
            header_lines.append(trimmed)
        else:
            in_ops = True
            # Collapse multiple spaces between columns to 4 spaces
            cleaned_ln = re.sub(r"[ \t]{4,}", "    ", ln).rstrip()
            if cleaned_ln:
                sig_lines.append(cleaned_ln)

    formatted_header = []
    for h in header_lines:
        if re.search(r"This constructor is (?:not )?exposed in this frame", h):
            continue
        if not h.endswith(".") and ("is a" in h or "in this" in h):
            h = h + "."
        formatted_header.append(f"**{h}**")

    header_md = "  \n".join(formatted_header)
    sigs_clean = "\n".join(sig_lines)
    return header_md, sigs_clean

def clean_show_block(show_text: str) -> str:
    """Format and clean the )show block output, returning only the signatures."""
    _, sigs = split_show_block(show_text)
    return sigs

def clean(text: str, unwrap: bool = False) -> str:
    """Clean up and format FriCAS documentation text."""
    return format_spad_docstring(text)

def clean_op_token(tok: str) -> str:
    """Extract clean operation name from token.

    Handles FriCAS )show operator placeholder conventions:
    - Infix operators: '?*?', '?+?', '?<=?', '?=? etc. -> '*', '+', '<=', '='
    - Unary prefix placeholders: '?~' -> '~'
    - Unary punctuation operators: '-?', '#?' -> '-', '#'
    - Predicate functions ending with '?': 'zero?', 'jlApprox?', 'empty?', etc. -> preserved
    """
    tok = tok.strip().strip('"')
    # Infix operators: ?*?, ?+?, ?=?, ?<=?, etc.
    if tok.startswith("?") and tok.endswith("?") and len(tok) > 2:
        return tok[1:-1]
    # Unary prefix placeholder
    if tok.startswith("?"):
        return tok[1:]
    # Unary punctuation operator placeholder (e.g. -?, #?)
    if tok.endswith("?") and len(tok) > 1 and not (tok[:-1].replace("_", "").isalnum()):
        return tok[:-1]
    # Standard identifier / predicate ending in ?
    return tok

def parse_show_signatures(show_text: str) -> dict[str, list[str]]:
    """Extract all operation names and their signatures from the )show block."""
    sigs = {}
    for line in show_text.splitlines():
        trimmed = line.strip()
        if not trimmed:
            continue
        if any(hdr in line for hdr in ("is a domain", "is a category", "is a package", "Abbreviation for", "Operations")):
            continue
        # In )show, multiple columns are separated by 4 or more spaces
        chunks = re.split(r"[ \t]{4,}", trimmed)
        for chunk in chunks:
            chunk = chunk.strip()
            if ":" in chunk:
                parts = chunk.split(":", 1)
                op_name = clean_op_token(parts[0])
                sig = parts[1].strip()
                if op_name and not op_name.startswith("-") and not op_name.startswith("="):
                    if op_name not in sigs:
                        sigs[op_name] = []
                    if sig not in sigs[op_name]:
                        sigs[op_name].append(sig)
    return sigs

def parse_op_names_from_show(show_text: str) -> list[str]:
    """Extract operation names from the signatures text."""
    sigs = parse_show_signatures(show_text)
    return sorted(list(sigs.keys()))

def get_constructor_ancestors(name: str) -> set[str]:
    """Fetch ancestor constructor names for a given constructor."""
    if not HAS_FRICAS:
        return {name}
    raw = run_fricas_evals([f")lisp (|ancestorsOf| '(|{name}|) NIL)"])
    if "<<ERROR" in raw or "<<TIMEOUT>>" in raw or "<<FRICAS_UNAVAILABLE>>" in raw:
        return {name}
    symbols = set(re.findall(r"\|([A-Za-z0-9_]+)\|", raw))
    symbols.add(name)
    return symbols

def get_origin_base(from_str: str) -> str:
    """Extract base constructor name from origin string (e.g. VectorCategory(R) -> VectorCategory)."""
    if not from_str:
        return ""
    m = re.match(r"^\s*([A-Za-z0-9_]+)", from_str)
    return m.group(1) if m else from_str.strip()

def parse_spad_operations(spad_path: str, start_line: int) -> dict[str, list[dict]]:
    """Extract operations and signatures defined directly in SPAD source code."""
    if not os.path.exists(spad_path):
        return {}

    ops = {}
    try:
        with open(spad_path, "r", encoding="utf-8", errors="replace") as f:
            lines = f.readlines()

        i = start_line
        in_with = False
        while i < len(lines):
            line = lines[i]
            # Stop if another constructor starts or if implementation block starts (not 'Implementation where')
            if i > start_line and (line.strip().startswith(")abbrev") or re.match(r"^\s*Implementation\s*==[=>]?", line)):
                break

            if not in_with:
                if re.search(r"\bwith\b", line):
                    in_with = True
                i += 1
                continue

            # Look for op : sig (including ! in op name)
            m = re.match(r"^\s*([a-zA-Z0-9_?+*\-^/<=>~!]+|\"[^\"]+\")\s*:\s*(.+)$", line)
            if m:
                tok = m.group(1).strip().strip('"')
                sig = m.group(2).strip()
                # Skip macro definitions, assignments, or constructor headers
                if sig.startswith("=") or sig.startswith(":=") or tok.endswith("==") or tok in ("Exports", "Implementation"):
                    i += 1
                    continue

                op_name = clean_op_token(tok)

                # Read docstring: check following lines first (++ doc below op : sig), otherwise preceding lines
                doc_lines = []
                if i + 1 < len(lines) and lines[i + 1].strip().startswith("++"):
                    k = i + 1
                    while k < len(lines) and lines[k].strip().startswith("++"):
                        doc_lines.append(lines[k].strip()[2:].strip())
                        k += 1
                elif i - 1 >= 0 and lines[i - 1].strip().startswith("++"):
                    k = i - 1
                    while k >= 0 and lines[k].strip().startswith("++"):
                        doc_lines.insert(0, lines[k].strip()[2:].strip())
                        k -= 1

                desc = format_spad_docstring(doc_lines)

                if op_name not in ops:
                    ops[op_name] = []
                ops[op_name].append({
                    "signature": sig,
                    "description": desc,
                    "from": "",
                    "line": i + 1
                })
            i += 1
    except Exception:
        pass
    return ops

def parse_delimited_op_blocks(raw_text: str) -> dict[str, list[dict]]:
    """Parse delimited operation documentation blocks from FriCAS."""
    op_sections = re.split(r"<<<OP:([^>]+)>>>", raw_text)
    ops_dict = {}

    for i in range(1, len(op_sections), 2):
        op_name = op_sections[i].strip()
        op_body = op_sections[i + 1]

        lines = op_body.splitlines()
        current_block = []
        for line in lines:
            if "Type: Void" in line or re.match(r"^\s*Value\s*=", line) or "operationDocumentation(" in line or re.match(r"^\s*\(\d+\)\s*->", line):
                continue
            current_block.append(line)
            m = re.search(r"From:\s*(.+)", line)
            if m:
                from_c = m.group(1).strip()
                block_str = "\n".join(current_block)
                sig_m = re.search(r"Signature:\s*(.+)", block_str)
                sig = sig_m.group(1).strip() if sig_m else ""

                desc_lines = []
                for b_ln in current_block:
                    if b_ln.strip().startswith("Signature:") or b_ln.strip().startswith("From:") or "operationDocumentation(" in b_ln or re.match(r"^\s*\(\d+\)\s*->", b_ln):
                        continue
                    desc_lines.append(b_ln)
                desc = clean("\n".join(desc_lines), unwrap=True)

                if op_name not in ops_dict:
                    ops_dict[op_name] = []
                ops_dict[op_name].append({
                    "from": from_c,
                    "signature": sig,
                    "description": desc
                })
                current_block = []
    return ops_dict

OP_SLUGS = {
    "#": "op-hash",
    "*": "op-mul",
    "+": "op-add",
    "-": "op-sub",
    "/": "op-div",
    "^": "op-pow",
    "=": "op-eq",
    "~=": "op-neq",
    "<": "op-lt",
    "<=": "op-le",
    ">": "op-gt",
    ">=": "op-ge",
}

def slugify(text: str) -> str:
    """Convert operation name to valid HTML anchor slug."""
    s = text.strip()
    if s in OP_SLUGS:
        return OP_SLUGS[s]
    s = s.lower()
    s = re.sub(r"[^a-z0-9_-]+", "-", s)
    return s.strip("-") or "op"

def fetch_constructor_doc(name: str, fallback_meta: dict) -> dict:
    """Fetch constructor description, signatures, and detailed operations documentation."""
    source_path = fallback_meta.get("path", "")
    source_line = fallback_meta.get("line", 1)

    if not HAS_FRICAS:
        ops = parse_spad_operations(source_path, source_line)
        return {
            "description": fallback_meta.get("doc", ""),
            "constructor_sig": f"{name} is a {fallback_meta.get('kind', 'domain').lower()} constructor",
            "show_block": "",
            "ops": ops,
        }

    # 1. Fetch constructor doc and )show output
    evals = [
        f"constructorDocumentation('{name})$SpadDoc",
        f")show {name}",
    ]
    raw = run_fricas_evals(evals)

    if "<<ERROR" in raw or "<<TIMEOUT>>" in raw or "<<FRICAS_UNAVAILABLE>>" in raw or not raw.strip():
        ops = parse_spad_operations(source_path, source_line)
        return {
            "description": fallback_meta.get("doc", ""),
            "constructor_sig": f"{name} is a {fallback_meta.get('kind', 'domain').lower()} constructor",
            "show_block": "",
            "ops": ops,
        }

    body = strip_banner(raw)

    show_marker_re = re.compile(
        r"(?m)^\s*" + re.escape(name) + r"(?:\(.*?\))?\s+is a\s+(domain|category|package)"
    )
    m = show_marker_re.search(body)
    if m:
        description_raw = body[: m.start()]
        show_block = body[m.start():]
    else:
        description_raw = body
        show_block = ""

    description = clean(description_raw, unwrap=True)
    description = re.sub(r"\s*Type:\s*Void\s*", "", description).strip()
    if not description and fallback_meta.get("doc"):
        description = fallback_meta["doc"]

    constructor_header_md, show_block = split_show_block(show_block)

    # 2. Extract constructor ancestors and operation signatures
    ancestors = get_constructor_ancestors(name)
    show_sigs = parse_show_signatures(show_block)
    op_names = sorted(list(show_sigs.keys()))
    ops = {}

    # First, parse operations directly from SPAD source
    spad_ops = parse_spad_operations(source_path, source_line) if source_path else {}

    # Query documentation for operations from FriCAS (skip wildcard/pattern operators which match all operations in search_operations)
    SKIP_SDOC_OPS = {"*", "?", "+", "-", "/", "^", "<", "<=", "=", ">", ">=", "~="}
    query_ops = [op for op in op_names if op not in SKIP_SDOC_OPS]

    doc_blocks = {}
    if query_ops:
        chunk_size = 20
        for i in range(0, len(query_ops), chunk_size):
            chunk = query_ops[i:i + chunk_size]
            op_evals = []
            for op in chunk:
                op_evals.append(f')lisp (format t "~%<<<OP:{op}>>>~%")')
                op_evals.append(f'operationDocumentation(string("{op}")::Symbol)$SpadDoc')
            op_raw = run_fricas_evals(op_evals, timeout=90)
            if "<<TIMEOUT>>" not in op_raw and "<<ERROR" not in op_raw:
                parsed_ops = parse_delimited_op_blocks(op_raw)
                for k, v in parsed_ops.items():
                    # Only retain doc blocks whose origin constructor belongs to this constructor's ancestors!
                    valid_v = [b for b in v if get_origin_base(b.get("from", "")) in ancestors or b.get("from") == name or not b.get("from")]
                    if valid_v:
                        doc_blocks[k] = valid_v

    # Merge operations with exact signatures and matched docstrings
    for op in op_names:
        ops[op] = []
        if op in spad_ops:
            for s_op in spad_ops[op]:
                ops[op].append(s_op)

        if op in doc_blocks:
            for b in doc_blocks[op]:
                if not any((e.get("description") and e.get("description") == b.get("description")) or (e.get("signature") and e.get("signature") == b.get("signature")) for e in ops[op]):
                    ops[op].append(dict(b))

        concrete_sigs = show_sigs.get(op, [])
        if not ops[op]:
            for sig in concrete_sigs:
                ops[op].append({
                    "signature": sig,
                    "description": "",
                    "from": ""
                })
        elif len(ops[op]) == 1 and len(concrete_sigs) == 1:
            ops[op][0]["signature"] = concrete_sigs[0]

    return {
        "description": description,
        "constructor_header_md": constructor_header_md,
        "constructor_sig": constructor_header_md or f"{name} is a {fallback_meta.get('kind', 'domain').lower()} constructor",
        "show_block": show_block,
        "ops": ops,
    }

def sanitize_existing_ws_docs():
    """Clean up formatting, terminology, dash lines, and Value = artifacts in preserved WS*.md files."""
    if not os.path.exists(OUT_DIR):
        return
    for fname in os.listdir(OUT_DIR):
        if fname.startswith("WS") and fname.endswith(".md"):
            fpath = os.path.join(OUT_DIR, fname)
            try:
                with open(fpath, "r", encoding="utf-8") as f:
                    content = f.read()
                new_content = re.sub(r"(?m)^\s*Value\s*=.*$\n*", "", content)
                # Terminology updates requested by user
                new_content = new_content.replace("WS — Wolfram/MathLink", "WS — MathLink")
                new_content = new_content.replace("Wolfram / MathLink", "MathLink")
                new_content = new_content.replace("Wolfram/MathLink", "MathLink")
                new_content = new_content.replace("Julia Wolfram Symbolic", "Julia WS")
                new_content = new_content.replace("Wolfram Symbolic", "WS")

                new_content = re.sub(r"\n{3,}", "\n\n", new_content)
                if new_content != content:
                    with open(fpath, "w", encoding="utf-8") as f:
                        f.write(new_content)
            except Exception as e:
                print(f"Error sanitizing {fname}: {e}", file=sys.stderr)

def find_op_line(spad_path: str, op_name: str, start_line: int = 1) -> int | None:
    """Find line number of operation definition in SPAD source file."""
    if not os.path.exists(spad_path):
        return None
    op_re = re.compile(r"^\s*" + re.escape(op_name) + r"\s*[\(:=]")
    try:
        with open(spad_path, "r", encoding="utf-8", errors="replace") as f:
            for idx, line in enumerate(f, 1):
                if idx < start_line:
                    continue
                if op_re.search(line):
                    return idx
    except Exception:
        pass
    return None

def render_md(name: str, kind: str, group: str, info: dict, source_meta: dict) -> str:
    """Render a clean GitHub-Flavored Markdown document for a constructor and its operations."""
    kind_str = f"**Kind**: {kind}"
    source_url = None
    if source_meta and source_meta.get("path"):
        source_url = f"{GITHUB_BASE}{source_meta['path']}#L{source_meta['line']}"
        kind_str += f" &nbsp;|&nbsp; \\[[Source]({source_url})\\]"

    lines = [
        f"# {name}",
        "",
        f"> {kind_str} &nbsp;|&nbsp; **Group**: {group}",
        "",
    ]

    desc_parts = []
    if info.get("description"):
        desc_parts.append(info["description"])
    if info.get("constructor_header_md"):
        desc_parts.append(info["constructor_header_md"])
    elif info.get("constructor_sig"):
        desc_parts.append(f"**{info['constructor_sig']}**")

    if desc_parts:
        lines += ["## Description", "", "\n\n".join(desc_parts), ""]

    if info.get("show_block"):
        lines += ["## Signatures", "", "```fricas", info["show_block"], "```", ""]
    elif source_url:
        lines += [
            "## Source Definition",
            "",
            f"Defined in [{source_meta['path']}]({source_url})",
            "",
        ]

    ops = info.get("ops", {})
    if ops:
        lines += ["## Operations", ""]
        relevant_ops = ops

        if relevant_ops:
            # Operation Quick Links Overview Table / Badges
            lines += ["### Operations Overview", "", "| Operation | Summary |", "| :--- | :--- |"]
            for op_name in sorted(relevant_ops.keys()):
                op_slug = slugify(op_name)
                first_desc = ""
                for b in relevant_ops[op_name]:
                    if b.get("description"):
                        first_desc = b["description"].splitlines()[0][:90] + "..." if len(b["description"]) > 90 else b["description"].splitlines()[0]
                        break
                first_desc = first_desc or f"Operation defined in {name}"
                first_desc = first_desc.replace("|", "\\|")
                lines.append(f"| [`{op_name}`](#{op_slug}) | {first_desc} |")
            lines.append("")

            # Detailed Operation Documentation
            lines += ["### Detailed Documentation", ""]
            for op_name in sorted(relevant_ops.keys()):
                op_slug = slugify(op_name)
                op_line = None
                if source_meta and source_meta.get("path"):
                    op_line = find_op_line(source_meta["path"], op_name, source_meta.get("line", 1))

                op_title = f"#### `{op_name}` <a id=\"{op_slug}\"></a>"
                if op_line and source_meta and source_meta.get("path"):
                    op_url = f"{GITHUB_BASE}{source_meta['path']}#L{op_line}"
                    op_title += f" &nbsp; \\[[source]({op_url})\\]"
                lines.append(op_title)
                lines.append("")

                # Collect distinct overloads
                seen_entries = []
                for b in relevant_ops[op_name]:
                    sig = b.get("signature", "").strip()
                    desc = b.get("description", "").strip()
                    from_c = b.get("from", "").strip()
                    if not any(e["signature"] == sig and e["description"] == desc and e["from"] == from_c for e in seen_entries):
                        seen_entries.append({"signature": sig, "description": desc, "from": from_c})

                if len(seen_entries) > 1:
                    # Multiple distinct overloads/signatures: document each signature with its specific docstring
                    for idx, entry in enumerate(seen_entries, 1):
                        sig = entry["signature"]
                        desc = entry["description"]
                        from_c = entry["from"]

                        if sig:
                            lines.append(f"##### `{op_name}` : `{sig}`")
                        else:
                            lines.append(f"##### Overload {idx}")
                        lines.append("")

                        if desc:
                            lines.append(desc)
                        else:
                            lines.append(f"Operation defined in {name}.")
                        lines.append("")

                        if from_c and from_c != name:
                            from_base = get_origin_base(from_c)
                            if from_base in ALL_JLFRICAS:
                                lines.append(f"- **From**: [`{from_c}`]({from_base}.md)")
                            else:
                                lines.append(f"- **From**: `{from_c}`")
                            lines.append("")
                elif len(seen_entries) == 1:
                    entry = seen_entries[0]
                    desc = entry["description"]
                    sig = entry["signature"]
                    from_c = entry["from"]

                    if desc:
                        lines.append(desc)
                    else:
                        lines.append(f"Operation defined in {name}.")
                    lines.append("")

                    if sig:
                        lines.append(f"- **Signature**: `{sig}`")
                    if from_c and from_c != name:
                        from_base = get_origin_base(from_c)
                        if from_base in ALL_JLFRICAS:
                            lines.append(f"- **From**: [`{from_c}`]({from_base}.md)")
                        else:
                            lines.append(f"- **From**: `{from_c}`")
                    lines.append("")

        if lines and lines[-1] == "":
            lines.pop()

    lines += ["---", "[Back to Index](../index.md)", ""]
    return "\n".join(lines)

# ── Main Execution Loop ───────────────────────────────────────────────────────

def main():
    print("jlFriCAS Constructor & Operations Documentation Generator")
    print("==========================================================")
    print(f"FriCAS Runtime Available: {'Yes (' + args.fricas_cmd + ')' if HAS_FRICAS else 'No (SPAD fallback mode)'}")
    print(f"Target Constructors:       {len(TARGET_CONSTRUCTORS)}")
    print(f"Output Directory:          {OUT_DIR}\n")

    # Sanitize any existing WS*.md files
    sanitize_existing_ws_docs()

    count = 0
    failed = []
    search_index = []

    for name, kind, group, group_code, abbrev, rel_path, line_no, doc in TARGET_CONSTRUCTORS:
        fallback_meta = CONSTRUCTOR_SOURCES.get(name, {
            "path": rel_path,
            "line": line_no,
            "abbrev": abbrev,
            "kind": kind,
            "group": group,
            "group_code": group_code,
            "doc": doc
        })
        try:
            info = fetch_constructor_doc(name, fallback_meta)
            md = render_md(name, kind, group, info, fallback_meta)
            path = os.path.join(OUT_DIR, f"{name}.md")
            with open(path, "w", encoding="utf-8") as f:
                f.write(md)
            print(f"  ✓ {name} ({kind}, {group_code}) -> {path}")
            count += 1

            # Index constructor
            search_index.append({
                "type": "constructor",
                "name": name,
                "kind": kind,
                "group": group,
                "group_code": group_code,
                "abbrev": abbrev,
                "doc": (info.get("description") or fallback_meta.get("doc") or "").strip()
            })

            # Index operations
            ops = info.get("ops", {})
            for op_name, blocks in ops.items():
                op_slug = slugify(op_name)
                seen_sigs = set()
                for b in blocks:
                    sig = b.get("signature", "").strip()
                    desc = b.get("description", "").strip()
                    from_c = b.get("from", "").strip()
                    key = (sig, from_c)
                    if key not in seen_sigs:
                        seen_sigs.add(key)
                        search_index.append({
                            "type": "operation",
                            "name": op_name,
                            "constructor": name,
                            "kind": kind,
                            "group": group,
                            "group_code": group_code,
                            "signature": sig,
                            "doc": desc,
                            "from": from_c,
                            "anchor": op_slug
                        })
        except Exception as exc:
            print(f"  ✗ FAILED {name}: {exc}", file=sys.stderr)
            failed.append(name)

    # For any constructors in ALL_DISCOVERED that weren't built in this run (e.g. preserved WS* docs)
    built_names = set(c[0] for c in TARGET_CONSTRUCTORS)
    for cname, kind, group, group_code, abbrev, rel_path, line_no, doc in ALL_DISCOVERED:
        if cname not in built_names:
            search_index.append({
                "type": "constructor",
                "name": cname,
                "kind": kind,
                "group": group,
                "group_code": group_code,
                "abbrev": abbrev,
                "doc": doc.strip()
            })
            spad_ops = parse_spad_operations(rel_path, line_no)
            for op_name, blocks in spad_ops.items():
                op_slug = slugify(op_name)
                for b in blocks:
                    search_index.append({
                        "type": "operation",
                        "name": op_name,
                        "constructor": cname,
                        "kind": kind,
                        "group": group,
                        "group_code": group_code,
                        "signature": b.get("signature", "").strip(),
                        "doc": b.get("description", "").strip(),
                        "anchor": op_slug
                    })

    # Sanitize again to make sure all WS files are clean
    sanitize_existing_ws_docs()

    # Write search index JSON
    index_path = os.path.join(os.path.dirname(OUT_DIR), "search_index.json") if os.path.dirname(OUT_DIR) else "search_index.json"
    try:
        if os.path.exists(index_path) and args.constructor:
            with open(index_path, "r", encoding="utf-8") as f:
                existing = json.load(f)
            existing = [item for item in existing if not (item.get("name") == args.constructor or item.get("constructor") == args.constructor)]
            search_index = existing + search_index

        with open(index_path, "w", encoding="utf-8") as f:
            json.dump(search_index, f, separators=(',', ':'), ensure_ascii=False)
        print(f"\n  • Search index saved to: {index_path} ({len(search_index)} items)")
    except Exception as exc:
        print(f"\n  ✗ Failed writing search index: {exc}", file=sys.stderr)

    print("\nDocumentation Generation Finished:")
    print(f"  • Successfully written: {count} files to {OUT_DIR}/")
    if failed:
        print(f"  • Failed constructors ({len(failed)}): {', '.join(failed)}")

if __name__ == "__main__":
    main()
