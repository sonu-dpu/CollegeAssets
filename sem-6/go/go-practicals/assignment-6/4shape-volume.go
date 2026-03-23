package main

import "fmt"

type shapeVol interface {
	area() float64
	volume() float64
}

type square struct {
	side float64
}

func (s square) area() float64 {
	return s.side * s.side
}

func (s square) volume() float64 {
	return 0
}

type rectangleVol struct {
	length  float64
	breadth float64
}

func (r rectangleVol) area() float64 {
	return r.length * r.breadth
}

func (r rectangleVol) volume() float64 {
	return 0
}

func main() {
	var sq square
	var rect rectangleVol

	fmt.Print("Enter side of square: ")
	fmt.Scan(&sq.side)

	fmt.Print("Enter length and breadth of rectangle: ")
	fmt.Scan(&rect.length, &rect.breadth)

	var s shapeVol

	fmt.Println("\n--- Square ---")
	s = sq
	fmt.Println("Area:", s.area())
	fmt.Println("Volume:", s.volume())

	fmt.Println("\n--- Rectangle ---")
	s = rect
	fmt.Println("Area:", s.area())
	fmt.Println("Volume:", s.volume())
}
