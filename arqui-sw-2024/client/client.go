package main

import (
	"fmt"
	"net"
	"os"
)

const busAddr = "localhost:5000"

// FormatSOATransaction formats the transaction message before sending it over TCP.
func FormatSOATransaction(service string, data string) (string, error) {
	if len(service) > 5 {
		return "", fmt.Errorf("service name must be no longer than 5 characters")
	}
	message := service + data
	length := len(message)
	formattedMessage := fmt.Sprintf("%05d%s", length, message)
	return formattedMessage, nil
}

func main() {
	// Replace these with actual service name and data
	service := "salud"
	data := "Hello, World!"

	// Format the transaction
	transaction, err := FormatSOATransaction(service, data)
	if err != nil {
		fmt.Println("Error formatting transaction:", err)
		os.Exit(1)
	}

	// Connect to the server
	conn, err := net.Dial("tcp", busAddr)
	if err != nil {
		fmt.Println("Error connecting to the server:", err)
		os.Exit(1)
	}
	defer conn.Close()

	// Send the transaction
	fmt.Println("Sending transaction:", transaction)
	_, err = conn.Write([]byte(transaction))
	if err != nil {
		fmt.Println("Error sending transaction:", err)
		os.Exit(1)
	}

	// It's good practice to wait for a response confirming the transaction.
	// However, if the server isn't set up to send back a response, you may omit this part.
	buffer := make([]byte, 1024)
	n, err := conn.Read(buffer)
	if err != nil {
		fmt.Println("Error reading response:", err)
		os.Exit(1)
	}
	fmt.Println("Server response:", string(buffer[:n]))
}
