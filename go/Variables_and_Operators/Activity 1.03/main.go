package main

import (
	"fmt"
)

func main() {
	count := 5

	var message string
	// message := "Greater than 5"
	if count > 5 {
		message = "Greater than 5"
	} else {
		message = "Not Greater than 5"
	}
	fmt.Println(message)
}
