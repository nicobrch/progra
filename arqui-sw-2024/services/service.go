package service

import (
	"fmt"
	"net"
	"strings"
)

func FormatSOATransaction(service string, data string) (string, error) {
	if len(service) > 5 {
		return "", fmt.Errorf("service name must be no longer than 5 characters")
	}
	message := service + data
	length := len(message)
	formattedMessage := fmt.Sprintf("%05d%s", length, message)
	return formattedMessage, nil
}

type SOAService struct {
	Name string
	Conn net.Conn
}

type DataProcessor func(data string) string

func (s *SOAService) InitService() (string, error) {
	// Create a new SOA Transaction
	transaction, err := FormatSOATransaction("sinit", s.Name)
	if err != nil {
		return "", err
	}

	// Send the transaction
	fmt.Println("Sending init transaction to bus: ", transaction)
	_, err = s.Conn.Write([]byte(transaction))
	if err != nil {
		return "", err
	}

	// Wait for the response
	buffer := make([]byte, 1024)
	length, err := s.Conn.Read(buffer)
	if err != nil {
		return "", err
	}

	response := string(buffer[:length])
	return response, nil
}

func (s *SOAService) ProcessData(processor DataProcessor) {
	for {
		fmt.Println("Waiting for transactions...")
		// Wait for message
		buffer := make([]byte, 1024)
		length, err := s.Conn.Read(buffer)
		if err != nil {
			fmt.Println("Error reading from connection:", err)
			return
		}
		if length < 5 {
			fmt.Println("Invalid transaction format")
			return
		}
		transaction := string(buffer[:length])

		// Extract the service and data parts
		service := strings.TrimSpace(transaction[5:10])
		data := strings.TrimSpace(transaction[10:])
		fmt.Println("Received data: ", data)

		// Pass the data to the processor function
		fmt.Println("Processing data...")
		responseData := processor(data)

		// Sending response back to the bus/client
		response, err := FormatSOATransaction(service, responseData)
		if err != nil {
			fmt.Println("Error formatting response transaction:", err)
			return
		}

		fmt.Println("Sending response transaction:", response)
		_, err = s.Conn.Write([]byte(response))
		if err != nil {
			fmt.Println("Error sending response transaction:", err)
			return
		}
	}
}

func ExampleDataProcessor(data string) string {
	// Example processing - in a real scenario, implement the actual logic here
	return "Processed" + data
}
