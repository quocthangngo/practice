package main

import (
	"fmt"
	"time"
)

var (
	Debug       bool      = false
	LogLevel    string    = "info"
	startUptime time.Time = time.Now()
)

func main() {
	fmt.Println(Debug, LogLevel, startUptime)
}
