import socket

cs = socket.socket()
host = socket.gethostname()
port = 8080

cs.connect(('localhost', port))
cs.send("hello")
print(cs.recv(256))
cs.close()
