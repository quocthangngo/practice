package main

import "fmt"

var names = []string{"Katrina", "Evan", "Neil", "Adam", "Martin", "Matt", "Emma",
	"Isabella", "Emily", "Madison", "Ava", "Olivia", "Sophia", "Abigail", "Elizabeth",
	"Chloe", "Samantha", "Addison", "Natalie", "Mia", "Alexis"}

func main() {
	mapName := make(map[int][]string)
	for _, name := range names {
		if _, exists := mapName[len(name)]; exists {
			mapName[len(name)] = append(mapName[len(name)], name)
		} else {
			mapName[len(name)] = []string{name}
		}
	}

	for key, value := range mapName {
		fmt.Printf("Key: %d, Value: %s\n", key, value)
	}
}
