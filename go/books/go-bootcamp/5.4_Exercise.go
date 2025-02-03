package main

import (
	"fmt"
)

var (
	coins = 50
	users = []string{
		"Matthew", "Sarah", "Augustus", "Heidi", "Emilie",
		"Peter", "Giana", "Adriano", "Aaron", "Elizabeth",
	}
	distribution = make(map[string]int, len(users))
)

func updateCoin(incease int, total int, coin *int) int {
	val := total + incease
	if val <= 10 {
		total = val
		*coin = *coin - incease
	}
	return total
}

func main() {
	for _, user := range users {
		distribution[user] = 0
		for _, c := range user {
			switch c {
			case 'a', 'A', 'e', 'E':
				distribution[user] = updateCoin(1, distribution[user], &coins)
			case 'i', 'I':
				distribution[user] = updateCoin(2, distribution[user], &coins)
			case 'o', 'O':
				distribution[user] = updateCoin(3, distribution[user], &coins)
			case 'u', 'U':
				distribution[user] = updateCoin(4, distribution[user], &coins)
			}
		}
	}

	fmt.Println(distribution)
	fmt.Println("Coins left:", coins)
}
