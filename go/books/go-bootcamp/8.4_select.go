package main

// import (
// 	"fmt"
// )

// func finonaci(c, quit chan int) {
// 	x, y := 0, 1
// 	for {
// 		select {
// 		case c <- x:
// 			x, y = y, x+y
// 		case <-quit:
// 			fmt.Println("quit")
// 			return
// 		}
// 	}
// }

// func main() {
// 	c := make(chan int, 10)
// 	quit := make(chan int)
// 	go func() {
// 		for i := 0; i < 10; i++ {
// 			fmt.Println(<-c)
// 		}
// 		quit <- 0
// 	}()
// 	finonaci(c, quit)
// }

// Default case
// import (
// 	"fmt"
// 	"time"
// )

// func main() {
// 	tick := time.Tick(100 * time.Millisecond)
// 	boom := time.After(500 * time.Millisecond)
// 	for {
// 		select {
// 		case <-tick:
// 			fmt.Println("tick.")
// 		case <-boom:
// 			fmt.Println("BOOM!")
// 			return
// 		default:
// 			fmt.Println("    .")
// 			time.Sleep(50 * time.Millisecond)
// 		}
// 	}
// }

// Timeout
import (
	"fmt"
	"log"
	"net/http"
	"time"
)

func main() {
	response := make(chan *http.Response, 1)
	errors := make(chan *error)
	go func() {
		resp, err := http.Get("http://matt.aimonetti.net/")
		if err != nil {
			errors <- &err
		}
		response <- resp
	}()
	for {
		select {
		case r := <-response:
			fmt.Println("%s", r.Body)
			return
		case err := <-errors:
			log.Fatal(*err)
			return
		case <-time.After(200 * time.Millisecond):
			fmt.Println("Timed out")
			return
		}
	}
}
