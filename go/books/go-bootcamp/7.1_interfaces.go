package main

import (
	"fmt"
	"os"
)

type Reader interface {
	Read(b []byte) (n int, err error)
}

type Writer interface {
	Write(b []byte) (n int, err error)
}

type ReadWrite interface {
	Reader
	Writer
}

func main() {
	var w Writer
	w = os.Stdout
	fmt.Fprintf(w, "hello, writer\n")
}
