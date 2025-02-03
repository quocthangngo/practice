package main

import "fmt"

// const (
// 	Pi    = 3.14
// 	Truth = false
// 	Big   = 1 << 62
// 	Small = Big >> 61
// )

// func main() {
// 	const Greeting = "hello"
// 	fmt.Println(Greeting)
// 	fmt.Println(Pi)
// 	fmt.Println(Truth)
// 	fmt.Println(Big)
// }

func main() {
	name := "Caprica-Six"
	aka := fmt.Sprintf("Number %d", 6)
	fmt.Printf("%s is also known as %s", name, aka)
}
