package main

import "fmt"

const GobalLimit = 100
const MaxCacheSize int = 10 * GobalLimit

const (
	CacheKeyBook = "book_"
	CacheKeyCD   = "cd_"
)

var cache map[string]string

func cacheGet(key string) string {
	return cache[key]
}

func cacheSet(key, val string) {
	if len(cache)+1 > MaxCacheSize {
		return
	}
	cache[key] = val
}

func GetBook(isbn string) string {
	return cacheGet(CacheKeyBook + isbn)
}

func setBook(isbn string, name string) {
	cacheSet(CacheKeyBook+isbn, name)
}

func GetCD(sku string) string {
	return cacheGet(CacheKeyCD + sku)
}

func SetCD(sku string, title string) {
	cacheSet(CacheKeyCD+sku, title)
}

func main() {
	cache = make(map[string]string)
	setBook("1234-5678", "Get Ready To Go")
	SetCD("1234-5678", "Get Ready To Go Audio Book")
	fmt.Println("Book :", GetBook("1234-5678"))
	fmt.Println("CD :", GetCD("1234-5678"))
}
