package main

import (
	"fmt"
	"time"
)

func main() {
	dayBorn := time.Monday
	switch dayBorn {
	case time.Monday, time.Tuesday, time.Wednesday, time.Thursday, time.Friday:
		fmt.Println("Born on weekday")
	case time.Saturday, time.Sunday:
		fmt.Println("Born on the weekend")
	default:
		fmt.Println("Error, day born not valid")
	}
}
