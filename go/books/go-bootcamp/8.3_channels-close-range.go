package main

import (
	"fmt"
)

func finonaci(n int, c chan int) {
	x, y := 0, 1
	for i := 0; i < n; i++ {
		c <- x
		x, y = y, x+y
	}
	close(c)
	fmt.Println("Channel closed")
}

func main() {
	c := make(chan int, 10)
	go finonaci(cap(c), c)
	// without close, range can not end
	for i := range c {
		fmt.Println(i)
	}
}
