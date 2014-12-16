import socket

ss = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
ss.bind(('localhost', 8080))
ss.listen(1)

while True:
    connection, address = ss.accept()
    msg = connection.recv(256)
    if (len(msg)) > 0:
        print msg
        connection.send(msg.upper())
        connection.close()