package main

import (
	"fmt"

	"golang.org/x/tour/tree"
)

// Walk walks the tree t sending all values
// from the tree to the channel ch.
func Walk(t *tree.Tree, ch chan int) {
	reWalk(t, ch)
	// Closing the channel is necessary to avoid a deadlock. So the range loop in main can end.
	close(ch)
}

// reWalk walks recursively the tree t sending all values
func reWalk(t *tree.Tree, ch chan int) {
	if t == nil {
		return
	}
	reWalk(t.Left, ch)
	ch <- t.Value
	reWalk(t.Right, ch)
}

// Same determines whether the trees
// t1 and t2 contain the same values.
func Same(t1, t2 *tree.Tree) bool {
	ch1, ch2 := make(chan int), make(chan int)
	go Walk(t1, ch1)
	go Walk(t2, ch2)

	for {
		v1, ok1 := <-ch1
		v2, ok2 := <-ch2
		switch {
		case ok1 != ok2:
			// not the same size
			return false
		case !ok1:
			// both channels are empty
			return true
		case v1 != v2:
			// elements are different
			return false
		default:
			// keep iterating
		}
	}
}

func main() {
	ch := make(chan int)
	go Walk(tree.New(1), ch)
	// close(ch)
	for v := range ch {
		println(v)
	}
	fmt.Println(Same(tree.New(1), tree.New(1))) // true
	fmt.Println(Same(tree.New(1), tree.New(2))) // false
}
