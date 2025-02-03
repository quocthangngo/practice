package main

import (
	"fmt"
	"time"
)

func main() {
	// dayBorn := time.Sunday
	switch dayBorn := time.Sunday; {
	case dayBorn == time.Saturday || dayBorn == time.Sunday:
		fmt.Println("Born on the weekend")
	default:
		fmt.Println("Error, day born not valid")
	}
}
