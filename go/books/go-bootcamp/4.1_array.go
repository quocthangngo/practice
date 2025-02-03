package main

import "fmt"

func main() {
	// a := [...]string{"hello", "world"}
	// fmt.Printf("%q\n", a)
	// fmt.Println(a)
	// fmt.Printf("%s", a)

	// multi-dimensional array
	var b [2][3]string
	for i := 0; i < 2; i++ {
		for j := 0; j < 3; j++ {
			b[i][j] = fmt.Sprintf("row %d - column %d", i+1, j+1)
		}
	}
	fmt.Printf("%q", b)
}
