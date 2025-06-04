package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	service := ":1201"
	tcpAddr, err := net.ResolveTCPAddr("tcp4", service)
	if err != nil {
		fmt.Println("Error resolving address:", err.Error())
		os.Exit(1)
	}
	listener, err := net.ListenTCP("tcp", tcpAddr)
	if err != nil {
		fmt.Println("Error listening:", err.Error())
		os.Exit(1)
	}
	for {
		conn, err := listener.Accept()
		if err != nil {
			fmt.Println("Error accepting connection:", err.Error())
			continue
		}
		conn.Close()
		go handlerClient(conn)
	}
}

func handlerClient(conn net.Conn) {
	defer conn.Close()
	var buf [512]byte
	for {
		n, err := conn.Read(buf[0:])
		if err != nil {
			fmt.Println("Error reading:", err.Error())
			break
		}
		if n == 0 {
			break
		}
		fmt.Println("Received:", string(buf[0:]))
		_, err2 := conn.Write(buf[0:n])
		if err2 != nil {
			fmt.Println("Error writing:", err2.Error())
			break
		}
	}
}
