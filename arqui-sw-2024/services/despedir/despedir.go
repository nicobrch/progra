package main

import (
	"fmt"
	"net"
	service "soa/services"
)

func Despedir(data string) string {
	// Example processing - in a real scenario, implement the actual logic here
	return "Chaoo!! " + data
}

func main() {
	// Main function for testing purposes
	const busAddr = "localhost:5000"
	// Connect to the bus
	conn, err := net.Dial("tcp", busAddr)
	if err != nil {
		return
	}
	defer conn.Close()
	serv := service.SOAService{
		Name: "tests",
		Conn: conn,
	}
	response, err := serv.InitService()
	if err != nil {
		fmt.Println("Error sending transaction:", err)
		return
	}
	fmt.Println("Received response:", response)
	serv.ProcessData(Despedir)
}
