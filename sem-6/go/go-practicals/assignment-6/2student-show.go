package main

import "fmt"

type student struct {
	rollNo int
	name   string
	marks  float64
}

func (s *student) show() {
	fmt.Println("Student Details:")
	fmt.Println("Roll No:", s.rollNo)
	fmt.Println("Name:", s.name)
	fmt.Println("Marks:", s.marks)
}

func main() {
	var s1 student

	fmt.Print("Enter Roll Number: ")
	fmt.Scan(&s1.rollNo)

	fmt.Print("Enter Name: ")
	fmt.Scan(&s1.name)

	fmt.Print("Enter Marks: ")
	fmt.Scan(&s1.marks)

	s1.show()
}
