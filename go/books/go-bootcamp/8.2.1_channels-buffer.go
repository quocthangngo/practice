package main

import (
	"fmt"
)

func main() {
	ch := make(chan int, 2)
	ch <- 1
	ch <- 2
	c3 := func() {
		ch <- 3
	}
	go c3()
	fmt.Println("Received ", <-ch)
	fmt.Println("Received ", <-ch)
	// Once there is space available in the buffer (after receiving the first value), the blocked send operation in the goroutine can proceed, and the value 3 is sent to the channel
	fmt.Println("Received ", <-ch)
}
