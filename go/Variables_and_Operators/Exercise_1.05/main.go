package main

import (
	"fmt"
	"time"
)

func main() {
	Debug := false
	LogLevel := "info"
	startUptime := time.Now()
	fmt.Println(Debug, LogLevel, startUptime)
}
