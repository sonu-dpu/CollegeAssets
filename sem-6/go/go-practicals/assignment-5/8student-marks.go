package main

import "fmt"

type Student struct {
	rollNo   int
	studName string
	mark1    float64
	mark2    float64
	mark3    float64
	total    float64
	average  float64
}

func main() {
	var n int

	fmt.Print("Enter number of students: ")
	fmt.Scan(&n)

	students := make([]Student, n)

	for i := 0; i < n; i++ {
		fmt.Printf("\nEnter details of Student %d\n", i+1)

		fmt.Print("Enter Roll Number: ")
		fmt.Scan(&students[i].rollNo)

		fmt.Print("Enter Student Name: ")
		fmt.Scan(&students[i].studName)

		fmt.Print("Enter Mark1, Mark2, Mark3: ")
		fmt.Scan(&students[i].mark1, &students[i].mark2, &students[i].mark3)

		students[i].total = students[i].mark1 +
			students[i].mark2 +
			students[i].mark3

		students[i].average = students[i].total / 3
	}

	fmt.Println("\nStudent Details with Total and Average:")
	for i := 0; i < n; i++ {
		fmt.Println("\nRoll No:", students[i].rollNo)
		fmt.Println("Name:", students[i].studName)
		fmt.Println("Total Marks:", students[i].total)
		fmt.Println("Average Marks:", students[i].average)
	}
}
