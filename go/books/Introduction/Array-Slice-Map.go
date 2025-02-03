package main

import "fmt"

func main() {
	// var x [5]int
	// x[4] = 100
	// fmt.Println(x)
	// // slice
	// y := make([]float64, 5, 10)
	// fmt.Println(y)
	// arr := [5]float64{1, 2, 3, 4, 5}
	// z := arr[0:5]
	// fmt.Println(z)
	// slice1 := []int{1, 2, 3}
	// slice2 := append(slice1, 4, 5)
	// fmt.Println(slice1, slice2)

	// slice1 := []int{1, 2, 3}
	// slice2 := make([]int, 2)
	// copy(slice2, slice1)
	// fmt.Println(slice1, slice2)

	// x := make(map[string]int)
	// x["key"] = 10
	// fmt.Println(x["key"])

	// elements := make(map[string]string)
	// elements["H"] = "Hydrogen"
	// elements["He"] = "Helium"
	// elements["Li"] = "Lithium"
	// elements["Be"] = "Beryllium"
	// elements["B"] = "Boron"
	// elements["C"] = "Carbon"
	// elements["N"] = "Nitrogen"
	// elements["O"] = "Oxygen"
	// elements["F"] = "Flourine"
	// elements["Ne"] = "Neon"
	// fmt.Println(elements)

	// name, ok := elements["Un"]
	// fmt.Println(name, ok)

	// elements := map[string]string{
	// 	"H":  "Hydrogen",
	// 	"He": "Helium",
	// 	"Li": "Lithium",
	// 	"Be": "Beryllium",
	// 	"B":  "Boron",
	// 	"C":  "Carbon",
	// 	"N":  "Nitrogen",
	// 	"O":  "Oxygen",
	// 	"F":  "Flourine",
	// 	"Ne": "Neon",
	// }

	elements := map[string]map[string]string{
		"H": map[string]string{
			"name":  "Hydrogen",
			"stage": "gas",
		},
		"He": map[string]string{
			"name":  "Helium",
			"stage": "gas",
		},
		"Li": map[string]string{
			"name":  "Lithium",
			"stage": "gas",
		},
		"Be": map[string]string{
			"name":  "Beryllium",
			"stage": "gas",
		},
	}

	if el, ok := elements["Li"]; ok {
		fmt.Println(el["name"], el["state"])
	}

	// 	x := []int{
	// 		48, 96, 86, 68,
	// 		57, 82, 63, 70,
	// 		37, 34, 83, 27,
	// 		19, 97, 9, 17,
	// 	}

	// 	min := x[0]
	// 	for i := 1; i < len(x); i++ {
	// 		if x[i] < min {
	// 			min = x[i]
	// 		}
	// 	}
	// 	fmt.Println(min)
}
