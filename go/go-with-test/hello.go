package main

import "fmt"

// func Hello() string {
// 	return "Hello, world"
// }

// func Hello(name string) string {
// 	return "Hello, " + name
// }

const englishHelloPrefix = "Hello, "

// func Hello(name string) string {
// 	return englishHelloPrefix + name
// }

func Hello(name string) string {
	if name == "" {
		name = "World"
	}
	return englishHelloPrefix + name
}

func main() {
	// fmt.Println("Hello, world")
	// fmt.Println((Hello()))
	fmt.Println((Hello("world")))
}
