package main

import (
	"fmt"
	"time"
)

func getConfig() (bool, string, time.Time) {
	return false, "info", time.Now()
}

func main() {
	Debug, LogLevel, startUptime := getConfig()
	fmt.Println(Debug, LogLevel, startUptime)
}
