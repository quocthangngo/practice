// DaytimeServer
package main

import (
	"fmt"
	"net"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Fprintf(os.Stderr, "Usage: %s port\n", os.Args[0])
		os.Exit(1)
	}
	service := ":" + os.Args[1]
	udpAddr, err := net.ResolveUDPAddr("udp4", service)
	if err != nil {
		fmt.Println("Error resolving address:", err.Error())
		os.Exit(1)
	}
	conn, err := net.DialUDP("udp", nil, udpAddr)
	if err != nil {
		fmt.Println("Error dialing:", err.Error())
		os.Exit(1)
	}
	_, err = conn.Write([]byte("Hello, UDP server!"))
	if err != nil {
		fmt.Println("Error writing:", err.Error())
		os.Exit(1)
	}
	var buf [512]byte
	n, err := conn.Read(buf[0:])
	if err != nil {
		fmt.Println("Error reading:", err.Error())
		os.Exit(1)
	}
	fmt.Println("Received:", string(buf[0:n]))
	os.Exit(0)
}
