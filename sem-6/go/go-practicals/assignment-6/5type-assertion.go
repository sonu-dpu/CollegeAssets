package main

import "fmt"

func main() {

	var i interface{}

	i = 100
	fmt.Println("Interface holds:", i)

	val1 := i.(int)
	fmt.Println("Integer value:", val1)

	i = "Hello Go"
	fmt.Println("\nInterface holds:", i)

	val2 := i.(string)
	fmt.Println("String value:", val2)

	i = 45.67
	fmt.Println("\nInterface holds:", i)

	val3, ok := i.(float64)

	if ok {
		fmt.Println("Float value:", val3)
	} else {
		fmt.Println("Type assertion failed")
	}
}
