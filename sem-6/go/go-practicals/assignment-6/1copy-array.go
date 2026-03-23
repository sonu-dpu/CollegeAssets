package main

import (
	"fmt"
)

func copyArray(source [5]int) [5]int {
	var destination [5]int
	for i := 0; i < len(source); i++ {
		destination[i] = source[i]
	}
	return destination
}

func main() {
	var arr1 [5]int
	var arr2 [5]int
	fmt.Println("Enter 5 elements:")
	for i := 0; i < 5; i++ {
		fmt.Scan(&arr1[i])
	}
	arr2 = copyArray(arr1)
	fmt.Println("Original Array:", arr1)
	fmt.Println("Copied Array:", arr2)
}
