import os
from flask import Flask, request

app = Flask(__name__)

@app.route("/ping")
def ping_server():
    # WARNING: This is highly vulnerable to Command Injection!
    # An attacker could send ip=127.0.0.1; rm -rf /
    ip_address = request.args.get("ip")
    
    # Executing system commands directly with user input is very dangerous
    command = "ping -c 4 " + ip_address
    result = os.popen(command).read()
    
    return f"<pre>{result}</pre>"

if __name__ == "__main__":
    app.run()
