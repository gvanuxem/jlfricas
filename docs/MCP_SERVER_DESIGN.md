# jlFriCAS / FriCAS MCP Server Design Specification

## Overview
This document outlines the design for an integrated Model Context Protocol (MCP) server embedded within the `jlFriCAS` (and standalone `FriCAS`) environment. It enables LLMs, AI agents, and IDE tools to leverage the symbolic algebra of FriCAS and the numerical performance of Julia through a standardized protocol. The server is fully compatible with both **SBCL** and **Clozure CL (CCL)**, with specific optimizations for multi-threaded operation on both platforms. It powers features such as interactive execution, documentation lookups, and rich graphics rendering in the `jlFriCAS` VS Code extension ([fricas-vscode](https://github.com/gvanuxem/fricas-vscode)).

## 🧱 Architecture
The server follows a three-layer bridge architecture and supports multiple transport modes:

1.  **Protocol Layer (Common Lisp - SBCL / CCL)**:
    *   Hosted natively within the FriCAS Common Lisp image.
    *   Uses `yason` for JSON-RPC 2.0 handling.
    *   Runs in a background thread to maintain responsiveness (in Socket mode).
    *   Supports dynamic runtime detection of Julia support (`:fricas_has_julia` feature flag) with automatic fallback to standalone FriCAS mode.
    *   Automatically resolves and loads foreign shared libraries (`libspad.so`, `julia_wrap.so`) on startup via `quiet_load_alien`.
    *   Supports two transport modes:
        *   **StdIO Mode**: Uses `fd 3` for protocol output and `fd 0` for input. `fd 1` (stdout) is redirected to `fd 2` (stderr) at the C level (`dup2`) to prevent non-protocol output from leaking into the JSON stream.
        *   **Socket Mode**: Supports both TCP (127.0.0.1) and Unix domain sockets. Uses LSP-style `Content-Length` framing for robust streaming.
    *   Includes specific concurrency fixes for CCL to share database file streams across threads.
2.  **Engine Layer**:
    *   **FriCAS (SPAD/Lisp)**: Symbolic engine and main entry point.
    *   **Julia (LibJulia)**: High-performance numerical engine integrated via FriCAS (when available).
    *   Routes all evaluations through a unified handler that supports multi-line code splitting, system commands, and error capturing.

## 🛠️ MCP Tools

### 1. `evaluate`
*   **Input**: `expression` (String), `format` (Optional String: `"text"` or `"markdown"`).
*   **Behavior**: Evaluates expressions in the FriCAS environment.
    *   Supports symbolic algebra, calculus, and numerical operations (including Julia calls and graphics generation).
    *   Splits multi-line input into individual statements for sequential evaluation.
    *   Echoes the input code and evaluation result to the terminal REPL (`*error-output*`).
    *   Sends `repl/starteval` and `repl/finisheval` notifications for progress tracking.
*   **Output**: Returns the evaluation result as a string, optionally wrapped in a markdown code block if requested.

### 2. `get-documentation`
*   **Input**: 
    *   `name` (String): The name of the constructor or operation.
    *   `type` (Optional String): One of `"constructor"` or `"operation"`. If omitted, the server automatically detects the type by checking constructors first, then falling back to operations.
*   **Behavior**: Retrieves documentation using the internal `SpadDoc` package.
*   **Output**: Formatted and cleaned documentation text.

### 3. `list-constructors`
*   **Input**: `pattern` (String).
*   **Behavior**: Searches for Categories, Domains, and Packages matching the pattern.

### 4. `compile-spad`
*   **Input**: `path` or `file` (String), `args` or `options` (Optional String).
*   **Behavior**: Compiles a SPAD (`.spad`) source file using the system command `)compile`.

### 5. `compile-lisp`
*   **Input**: `path` or `file` (String), `args` or `options` (Optional String).
*   **Behavior**: Compiles and loads a Common Lisp (`.lisp` or `.lsp`) file using the system command `)read`.

### 6. `compile-boot`
*   **Input**: `path` or `file` (String), `args` or `options` (Optional String).
*   **Behavior**: Compiles and loads a Boot (`.boot`) file using the system command `)read`.

## 🖥️ REPL Custom Methods & Notifications
The server extends the standard MCP specification with custom methods and notifications for IDE integration (specifically VS Code):
*   `repl/runcode`: Directly executes code selections from the IDE editor.
*   `repl/getDocFromWord` / `repl/getDocAt`: Contextual documentation retrieval for the editor cursor position.
*   `repl/starteval` / `repl/finisheval`: Progress notifications allowing clients to display progress bars or spinners during long calculations.
*   `display`: Real-time streaming notification delivering MIME-typed output (SVG, PNG, or HTML) produced by plot routines directly to the client.

## 📊 Plotting & Resource Management
High-resolution plots (SVG/PNG) generated via `jlPlot` and FriCAS graphics routines are handled through a dedicated pipeline:
1.  **Notification**: The server sends a `display` notification containing the MIME type and raw payload (e.g., SVG XML or Base64 PNG).
2.  **History**: All plots generated during a session are stored in an in-memory session history list.
3.  **Resources**: All plots are exposed as standard MCP Resources via `plot://<index>` URIs.
4.  **Retrieval**: Clients can use `resources/list` to query available plots and `resources/read` to retrieve plot data on demand.

## 🚀 Operational Workflow
1.  **Startup**: 
    *   **Automated / CLI**: Launch via command line with the `--mcp` flag (StdIO mode) or `--mcp-port <port>` (Socket mode).
    *   **Manual**: Initiated via FriCAS system command `)mcp start` or `)lisp |mcp| 'start`.
2.  **Concurrency**: 
    *   Uses thread-safe locks (`*fricas-eval-lock*`, `*fricas-db-lock*`).
    *   Mathematical evaluation is serialized via a global mutex to protect engine state, while protocol handling, resource listing, and cancellations remain concurrent.
3.  **Stream Redirection**: To ensure protocol integrity, standard output streams (`*standard-output*`, `*trace-output*`, etc.) are redirected to `*error-output*` (stderr).

## 📝 Decision Log
| Decision | Rationale |
| :--- | :--- |
| **Lisp-based Bridge** | Provides native JSON-RPC and stable threading directly in the FriCAS host Lisp. |
| **Optional Julia Detection** | Allows the server to run in both full jlFriCAS and standalone FriCAS environments seamlessly. |
| **fd 3 for StdIO** | Allows using a clean file descriptor for the protocol while redirecting noisy stdout (fd 1) to stderr (fd 2). |
| **LSP-style Framing** | Adopted for Socket mode to handle large payloads and avoid "message-in-message" parsing errors common with line-based JSON. |
| **Global Eval Lock** | Necessary because the underlying FriCAS and Julia engines utilize global state and single-threaded evaluation loops. |
| **SVG over PNG** | Preferred for plots to ensure vector scalability and compact footprint in notification payloads. |

## 💡 Assumptions
*   The environment has `yason` installed and available to the Lisp implementation.
*   The user has Julia configured with the `GR` backend (or compatible) for reliable SVG generation.
*   The `SpadDoc` package is compiled and exposed in FriCAS for documentation tools.
