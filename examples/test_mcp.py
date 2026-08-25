import subprocess
import json
import os
import sys
import time

def send_request(process, request):
    req_id = request.get("id")
    print(f"\nSENDING (id={req_id}, method={request.get('method')}):")
    print(f"  {json.dumps(request)}")
    process.stdin.write(json.dumps(request) + "\n")
    process.stdin.flush()
    
    while True:
        line = process.stdout.readline()
        if not line:
            print("EOF reached on stdout")
            break
        line_str = line.strip()
        if not line_str:
            continue
        try:
            data = json.loads(line_str)
            if data.get("id") == req_id:
                print(f"RESPONSE (id={req_id}):")
                print(f"  {json.dumps(data, indent=2)}")
                return data
            else:
                print(f"NOTIFICATION / OTHER MSG:")
                print(f"  {json.dumps(data)}")
        except json.JSONDecodeError:
            print(f"RAW STDOUT: {line_str}")

def main():
    target_root = "/usr/local"
    fricas_path = f"{target_root}/bin/jlfricas"
    
    env = os.environ.copy()
    env["FRICAS"] = target_root
    
    print(f"Starting MCP server with: {fricas_path} -nosman --mcp")
    
    process = subprocess.Popen(
        [fricas_path, "-nosman", "--mcp"],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=sys.stderr,
        env=env,
        text=True,
        bufsize=1
    )
    
    print("Waiting for server to start (5s)...")
    time.sleep(5)
    
    # 1. Initialize
    send_request(process, {
        "jsonrpc": "2.0",
        "id": 1,
        "method": "initialize",
        "params": {
            "protocolVersion": "2024-11-05",
            "capabilities": {},
            "clientInfo": {"name": "test-client", "version": "1.0.0"}
        }
    })
    
    # 2. List tools
    send_request(process, {
        "jsonrpc": "2.0",
        "id": 2,
        "method": "tools/list",
        "params": {}
    })
    
    # 3. Call evaluate (FriCAS expression)
    send_request(process, {
        "jsonrpc": "2.0",
        "id": 3,
        "method": "tools/call",
        "params": {
            "name": "evaluate",
            "arguments": {
                "expression": "integrate(sin(x),x)"
            }
        }
    })

    # 4. Call evaluate (Julia expression)
    send_request(process, {
        "jsonrpc": "2.0",
        "id": 4,
        "method": "tools/call",
        "params": {
            "name": "evaluate",
            "arguments": {
                "expression": "sqrt(jf64 2.0)"
            }
        }
    })

    # 5. Call get-documentation (constructor)
    send_request(process, {
        "jsonrpc": "2.0",
        "id": 5,
        "method": "tools/call",
        "params": {
            "name": "get-documentation",
            "arguments": {
                "name": "Matrix",
                "type": "constructor"
            }
        }
    })

    # 6. Call list-constructors
    send_request(process, {
        "jsonrpc": "2.0",
        "id": 6,
        "method": "tools/call",
        "params": {
            "name": "list-constructors",
            "arguments": {
                "pattern": "Matrix*"
            }
        }
    })
    
    process.terminate()

if __name__ == "__main__":
    main()

