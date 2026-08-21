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

args = parser.parse_args()

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

                    doc = " ".join(doc_lines).strip()
                    doc = re.sub(r"\\example\{[^}]*\}", "", doc)
                    doc = re.sub(r"Author:[^+\n]*", "", doc)
                    doc = re.sub(r"Date Created:[^+\n]*", "", doc)
                    doc = re.sub(r"Description:", "", doc).strip()
                    doc = re.sub(r"\s+", " ", doc)

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
    TARGET_CONSTRUCTORS = [c for c in ALL_DISCOVERED if c[0] == args.constructor]
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
FROM_RE = re.compile(r"From:\s*([A-Za-z0-9_]+)")

def check_fricas_available():
    """Check if FriCAS executable is available in PATH or specified location."""
    return shutil.which(args.fricas_cmd) is not None

HAS_FRICAS = check_fricas_available()

def run_fricas_evals(evals: list[str], timeout: int = 40) -> str:
    """Run FriCAS in batch mode with -eval statements and capture output."""
    if not HAS_FRICAS:
        return "<<FRICAS_UNAVAILABLE>>"
    cmd_args = [args.fricas_cmd, "-nosman"]
    evals = [')lisp (progn (setf (symbol-value (find-symbol "$LINELENGTH" "BOOT")) 120) (values))'] + evals + [')quit']
    for e in evals:
        cmd_args += ["-eval", e]
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
            cleaned = re.sub(r"[ \t]{4,}", "    ", ln).rstrip()
            if cleaned:
                sig_lines.append(cleaned)

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
    text = re.sub(r"(?m)^\s*Value\s*=.*$", "", text)
    text = re.sub(r"\s*Type:\s*Void\s*", "", text)

    lines = text.splitlines()
    while lines and not lines[0].strip():
        lines.pop(0)
    while lines and not lines[-1].strip():
        lines.pop()

    if not lines:
        return ""

    if unwrap:
        paras = []
        cur = []
        for ln in lines:
            if not ln.strip():
                if cur:
                    paras.append(" ".join(cur))
                    cur = []
            else:
                cur.append(ln.strip())
        if cur:
            paras.append(" ".join(cur))
        final_text = "\n\n".join(paras)
    else:
        final_text = "\n".join(lines)

    final_text = re.sub(r"Ex\s*ample:", "Example:", final_text)

    # Format Example: blocks into markdown code blocks
    parts = re.split(r"(Example:)", final_text)
    new_parts = []
    i = 0
    while i < len(parts):
        if parts[i] == "Example:":
            current_examples = []
            rest = ""
            j = i
            while j < len(parts) and parts[j] == "Example:":
                if j + 1 < len(parts):
                    content = parts[j+1]
                    code_parts = re.split(r"(\n\n)", content)
                    code = code_parts[0].strip()
                    if code:
                        current_examples.append(code)
                    rest = "".join(code_parts[1:])
                    if j + 2 < len(parts) and parts[j+2] == "Example:" and not rest.strip():
                        j += 2
                    else:
                        break
                else:
                    rest = ""
                    break

            if current_examples:
                merged_code = "\n".join(current_examples)
                label = "Examples" if len(current_examples) > 1 else "Example"
                new_parts.append(f"\n\n**{label}**:\n```fricas\n{merged_code}\n```\n")
            if rest:
                new_parts.append(rest)
            i = j + 2
        else:
            new_parts.append(parts[i])
            i += 1

    return "".join(new_parts)

def parse_op_names_from_show(show_text: str) -> list[str]:
    """Extract operation names from the signatures text."""
    ops = set()
    for line in show_text.splitlines():
        # Skip any header lines that might contain colons (e.g. WSAggregate(E: ...))
        if "is a domain" in line or "is a category" in line or "is a package" in line or "Abbreviation for" in line:
            continue
        parts = line.split(":")
        for p in parts[:-1]:
            tok = p.strip().split()[-1] if p.strip().split() else ""
            # Strip leading/trailing question marks from infix ops like ?*?, but keep boolean ops like jlApprox?
            if tok.startswith("?") and tok.endswith("?") and len(tok) > 2:
                name = tok[1:-1]
            elif tok.startswith("?"):
                name = tok[1:]
            else:
                name = tok
            if name and not name.startswith("-") and not name.startswith("=") and len(name) > 0:
                ops.add(name)
    return sorted(list(ops))

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

            # Look for op : sig
            m = re.match(r"^\s*([a-zA-Z0-9_?+*\-^/<=>~]+|\"[^\"]+\")\s*:\s*(.+)$", line)
            if m:
                tok = m.group(1).strip().strip('"')
                sig = m.group(2).strip()
                # Skip macro definitions, assignments, or constructor headers
                if sig.startswith("=") or sig.startswith(":=") or tok.endswith("==") or tok in ("Exports", "Implementation"):
                    i += 1
                    continue

                if tok.startswith("?") and tok.endswith("?") and len(tok) > 2:
                    op_name = tok[1:-1]
                elif tok.startswith("?"):
                    op_name = tok[1:]
                else:
                    op_name = tok

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

                desc = " ".join(doc_lines).strip()
                desc = re.sub(r"\s+", " ", desc)

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
            if "Type: Void" in line or re.match(r"^\s*Value\s*=", line):
                continue
            current_block.append(line)
            m = re.search(r"From:\s*([A-Za-z0-9_()]+)", line)
            if m:
                from_c = m.group(1).strip()
                block_str = "\n".join(current_block)
                sig_m = re.search(r"Signature:\s*(.+)", block_str)
                sig = sig_m.group(1).strip() if sig_m else ""

                desc_lines = []
                for b_ln in current_block:
                    if b_ln.strip().startswith("Signature:") or b_ln.strip().startswith("From:"):
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

    # 2. Extract operation names and fetch operationDocumentation for them
    op_names = parse_op_names_from_show(show_block)
    ops = {}

    # First, parse operations and docstrings directly from SPAD file if available
    if source_path:
        spad_ops = parse_spad_operations(source_path, source_line)
        for k, v in spad_ops.items():
            ops[k] = list(v)

    if op_names:
        # Only query operations not already extracted from SPAD source
        skip_ops = {"*", "+", "-", "/", "^", "0", "1", "<", "<=", "=", ">", ">=", "~=", "D"}
        query_ops = [op for op in op_names if op not in skip_ops and op not in ops]

        if query_ops:
            chunk_size = 20
            for i in range(0, len(query_ops), chunk_size):
                chunk = query_ops[i:i + chunk_size]
                op_evals = []
                for op in chunk:
                    op_evals.append(f')lisp (format t "~%<<<OP:{op}>>>~%")')
                    op_evals.append(f"operationDocumentation('{op})$SpadDoc")
                op_raw = run_fricas_evals(op_evals, timeout=10)
                if "<<TIMEOUT>>" not in op_raw and "<<ERROR" not in op_raw:
                    parsed_ops = parse_delimited_op_blocks(op_raw)
                    for k, v in parsed_ops.items():
                        if k not in ops:
                            ops[k] = []
                        for item in v:
                            if not any(e.get("signature") == item.get("signature") and e.get("description") == item.get("description") for e in ops[k]):
                                ops[k].append(item)

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

def slugify(text: str) -> str:
    """Convert operation name to valid HTML anchor slug."""
    s = text.lower().strip()
    s = re.sub(r"[^a-z0-9_-]+", "-", s)
    return s.strip("-") or "op"

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

        # Filter operations relevant to this constructor or jlFriCAS
        relevant_ops = {}
        for op_name, blocks in ops.items():
            my_blocks = [b for b in blocks if b.get("from") == name or not b.get("from") or b.get("from") in ALL_JLFRICAS]
            if my_blocks:
                relevant_ops[op_name] = my_blocks
            elif blocks:
                relevant_ops[op_name] = blocks

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
                first_desc = first_desc.replace("|", "\\|")
                lines.append(f"| [`{op_name}`](#{op_slug}) | {first_desc or 'Operation defined in ' + name} |")
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
                            lines.append("")

                        if from_c and from_c != name:
                            lines.append(f"- **From**: [`{from_c}`]({from_c}.md)")
                            lines.append("")
                elif len(seen_entries) == 1:
                    entry = seen_entries[0]
                    desc = entry["description"]
                    sig = entry["signature"]
                    from_c = entry["from"]

                    if desc:
                        lines.append(desc)
                        lines.append("")
                    if sig:
                        lines.append(f"- **Signature**: `{sig}`")
                    if from_c and from_c != name:
                        lines.append(f"- **From**: [`{from_c}`]({from_c}.md)")
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
