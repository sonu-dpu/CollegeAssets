package main

import "fmt"

type numbers struct {
	num1 int
	num2 int
}

func (n numbers) multiply() int {
	return n.num1 * n.num2
}

func main() {
	var n numbers

	fmt.Print("Enter first number: ")
	fmt.Scan(&n.num1)

	fmt.Print("Enter second number: ")
	fmt.Scan(&n.num2)

	result := n.multiply()

	fmt.Println("Multiplication =", result)
}
