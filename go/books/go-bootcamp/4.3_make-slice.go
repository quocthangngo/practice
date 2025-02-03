package main

import "fmt"

// func main() {
// 	cities := make([]string, 3)
// 	cities[0] = "S"
// 	cities[1] = "V"
// 	cities[2] = "L"
// 	fmt.Printf("%q", cities)
// }

// func main() {
// 	// cities := make([]string, 0)
// 	cities := []string{}
// 	cities = append(cities, "S")
// 	fmt.Printf("%q", cities)
// }

func main() {
	cities := []string{"S", "M"}
	cities2 := []string{"Sa", "v"}
	cities = append(cities, cities2...)

	fmt.Printf("%q", cities)
}
