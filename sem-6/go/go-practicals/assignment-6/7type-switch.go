package main

import "fmt"

func checkType(i interface{}) {

	switch v := i.(type) {

	case int:
		fmt.Println("Integer value:", v)

	case string:
		fmt.Println("String value:", v)

	case float64:
		fmt.Println("Float value:", v)

	default:
		fmt.Println("Unknown type")
	}
}

func main() {

	checkType(10)
	checkType("Hello Go")
	checkType(45.67)
	checkType(true)
}
