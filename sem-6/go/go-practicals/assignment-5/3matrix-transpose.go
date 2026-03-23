package main

import "fmt"

func main() {
	var rows, cols int

	fmt.Print("Enter number of rows: ")
	fmt.Scan(&rows)

	fmt.Print("Enter number of columns: ")
	fmt.Scan(&cols)

	matrix := make([][]int, rows)
	for i := 0; i < rows; i++ {
		matrix[i] = make([]int, cols)
	}

	fmt.Println("Enter matrix elements:")
	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			fmt.Scan(&matrix[i][j])
		}
	}

	fmt.Println("\nOriginal Matrix:")
	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			fmt.Print(matrix[i][j], " ")
		}
		fmt.Println()
	}

	transpose := make([][]int, cols)
	for i := 0; i < cols; i++ {
		transpose[i] = make([]int, rows)
	}

	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			transpose[j][i] = matrix[i][j]
		}
	}

	fmt.Println("\nTranspose Matrix:")
	for i := 0; i < cols; i++ {
		for j := 0; j < rows; j++ {
			fmt.Print(transpose[i][j], " ")
		}
		fmt.Println()
	}
}
