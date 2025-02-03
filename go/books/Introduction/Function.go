package main

import "fmt"

func average(xs []float64) float64 {
	total := 0.0
	for _, v := range xs {
		total += v
	}
	return total / float64(len(xs))
	// panic("Not Implemented")
}

func f() (int, int) {
	return 5, 6
}

func add(args ...int) int {
	total := 0
	for _, v := range args {
		total += v
	}
	return total
}

func makeEvenGenerator() func() uint {
	i := uint(0)
	return func() (ret uint) {
		ret = i
		i += 2
		return
	}
}

func factorial(x uint) uint {
	if x == 0 {
		return 1
	}
	return x * factorial(x-1)
}

func first() {
	fmt.Println("1st")
}

func second() {
	fmt.Println("2nd")
}

func main() {
	// xs := []float64{98, 93, 77, 82, 83}
	// fmt.Println(average(xs))
	// x, y := f()
	// fmt.Println(x, y)

	// fmt.Println(add(1, 2, 3))
	// 	xs := []int{1, 2, 3}
	// 	fmt.Println(add(xs...))

	// Closure
	// add := func(x, y int) int {
	// 	return x + y
	// }
	// fmt.Println(add(1, 1))

	// nextEvent := makeEvenGenerator()
	// fmt.Println(nextEvent()) // 0
	// fmt.Println(nextEvent()) // 2
	// fmt.Println(nextEvent()) // 4

	//Recursion
	// fmt.Println(factorial(4))

	// defer
	// defer second()
	// first()

	//panic & recover
	defer func() {
		str := recover()
		fmt.Println(str)
	}()
	panic("PANIC")
}
