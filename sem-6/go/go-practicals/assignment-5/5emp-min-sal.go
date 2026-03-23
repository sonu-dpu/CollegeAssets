package main

import "fmt"

type Employee struct {
	eno    int
	ename  string
	salary float64
}

func main() {
	var n int

	fmt.Print("Enter number of employees: ")
	fmt.Scan(&n)

	emp := make([]Employee, n)

	fmt.Println("Enter employee details:")
	for i := 0; i < n; i++ {
		fmt.Printf("\nEmployee %d\n", i+1)
		fmt.Print("Enter Employee Number: ")
		fmt.Scan(&emp[i].eno)

		fmt.Print("Enter Employee Name: ")
		fmt.Scan(&emp[i].ename)

		fmt.Print("Enter Salary: ")
		fmt.Scan(&emp[i].salary)
	}

	minSalary := emp[0].salary
	for i := 1; i < n; i++ {
		if emp[i].salary < minSalary {
			minSalary = emp[i].salary
		}
	}

	fmt.Println("\nEmployees having minimum salary:")
	for i := 0; i < n; i++ {
		if emp[i].salary == minSalary {
			fmt.Println("Employee No:", emp[i].eno)
			fmt.Println("Employee Name:", emp[i].ename)
			fmt.Println("Salary:", emp[i].salary)
			fmt.Println()
		}
	}
}
