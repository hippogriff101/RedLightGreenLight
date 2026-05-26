import socket

UDP_IP = "0.0.0.0"
UDP_PORT = 5005

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind((UDP_IP, UDP_PORT))


while True:
    # Buffer size is 1024 bytes
    data, addr = sock.recvfrom(1024)
    print(f"Received message from {addr}: {data.decode().strip()}")
    
    if data.decode().strip() == "RED":
        print("Red light")
    elif data.decode().strip() == "GREEN":
        print("Green Light!")