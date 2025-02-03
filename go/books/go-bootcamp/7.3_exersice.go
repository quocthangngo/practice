package main

import (
	"fmt"
)

type ErrNegativeSqrt float64

func (e ErrNegativeSqrt) Erro() string {
	return fmt.Sprintf("cannot Sqrt negative number: %g", float64(e))
}

// Function to calculate the square root using Newton-Raphson method
func sqrt(x float64) (float64, error) {
	if x < 0 {
		return 0, ErrNegativeSqrt(x)
	}
	z := x
	for i := 0; i < 1000; i++ {
		prevZ := z
		z -= (z*z - x) / (2 * z)
		if prevZ == z {
			break
		}
	}
	return z, nil
}

func main() {
	// number := 16.0
	// result := sqrt(number)
	// fmt.Printf("The square root of %.2f is %.5f\n", number, result)
	fmt.Println(sqrt(2))
	fmt.Println(sqrt(-2))
}
