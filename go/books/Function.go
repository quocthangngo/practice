package main

import "fmt"

// func add(x int, y int) int {
func add(x, y int) int {
	return x + y
}

// func location(city string) (string, string) {
// 	var region string
// 	var continent string

// 	switch city {
// 	case "Los Angeles", "LA", "Santa Monica":
// 		region, continent = "California", "North America"
// 	case "New York", "NYC":
// 		region, continent = "New York", "North America"
// 	default:
// 		region, continent = "Unknown", "Unknown"
// 	}
// 	return region, continent
// }

func location(name, city string) (region, continent string) {
	switch city {
	case "New York", "LA", "Chicago":
		continent = "North America"
	default:
		continent = "Unknown"
	}
	return
}

func main() {
	// fmt.Println(add(42, 13))

	// region, continent := location("Santa Monica")
	// fmt.Printf("Matt lives in %s, %s", region, continent)

	region, continent := location("Matt", "LA")
	fmt.Printf("%s lives in %s", region, continent)

}
