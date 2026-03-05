# jlFriCAS MCP Server Design Specification

## Overview
This document outlines the design for an integrated Model Context Protocol (MCP) server embedded within the `jlFriCAS` environment. It enables LLMs to leverage the symbolic algebra of FriCAS and the numerical performance of Julia through a standardized protocol.

## 🧱 Architecture
The server follows a three-layer bridge architecture:

1.  **Protocol Layer (Common Lisp / SBCL)**:
    *   Hosted within the FriCAS image.
    *   Uses `yason` for JSON-RPC 2.0 handling.
    *   Runs in a background thread to maintain responsiveness.
2.  **Intelligence Layer (Auto-Router)**:
    *   Syntactic analysis of queries.
    *   Routes symbolic tasks (integration, factorization) to FriCAS.
    *   Routes numerical tasks (arrays, BLAS, Plots) to Julia.
3.  **Engine Layer**:
    *   **FriCAS (SPAD/Lisp)**: Symbolic engine.
        *   Includes the `SDOC` (SpadDoc) package for retrieving and cleaning internal TeX documentation.
    *   **Julia (LibJulia)**: High-performance numerical engine.

## 🛠️ Main Tools

### 1. `evaluate`
*   **Input**: `expression` (String)
*   **Behavior**: Auto-routes to the optimal engine and executes.
*   **Output (Mixed Content)**:
    *   `text/plain`: Standard string representation.
    *   `text/latex`: LaTeX string for high-quality rendering.
    *   `application/json`: Structured mathematical data.
    *   `image/png` (Base64): Plots and visualizations.

### 2. `get-documentation`
*   **Input**: 
    *   `name` (String): The name of the constructor or operation.
    *   `type` (String): One of `"constructor"` or `"operation"`.
*   **Behavior**: Retrieves the documentation string for a FriCAS constructor or operation, including signature and origin information for operations.
*   **Output**: 
    *   `text/plain`: Formatted and cleaned documentation text.
 
### 3. `list-constructors`
*   **Input**: 
    *   `pattern` (String): Pattern matching constructor name (e.g. `AbelianMonoidRing` or `Int*`).
*   **Behavior**: Searches for Categories, Domains, and Packages matching the pattern.
*   **Output**: 
    *   `text/plain`: A formatted record containing categories, domains, and packages.
 
## 🚀 Operational Workflow
1.  **Startup**: 
    *   **Automated**: Launch via shell with the `--mcp` flag (e.g., `jlfricas --mcp`). This enters MCP mode immediately and bypasses the REPL.
    *   **Manual**: Initiated via interpreter command `)mcp start` not supported yet, use `--mcp` flag).
2.  **I/O Handling**:
    *   `stdout`: Reserved exclusively for JSON-RPC messages.
    *   `stderr`: Used for all non-protocol output (logs, Julia warnings, etc.).
3.  **Concurrency**: Multiple metadata requests can be handled concurrently; mathematical execution is sequential to protect global engine state.

## 📝 Decision Log
| Decision | Alternatives | Rationale |
| :--- | :--- | :--- |
| **Lisp-based Bridge** | SPAD-based implementation | SPAD lacks native JSON support and async threading, making it too difficult/unstable. |
| **Syntax Auto-Routing** | Fallback strategy, Engine hints | Syntax analysis provides predictable performance without manual LLM intervention. |
| **Standard I/O Transport** | TCP/WebSockets | Simpler integration with standard MCP clients (e.g., Claude Desktop). |
| **Redirect to stderr** | Log file, Suppress output | Standard CLI server pattern that keeps stdout clean for the protocol stream. |

## 💡 Assumptions
*   The environment has `yason` installed and available to SBCL.
*   The user is operating in a trusted environment where the LLM can generate and execute code.
*   Julia packages `LaTeXStrings.jl` and `Plots.jl` are present for rich output generation (not supported yet).
