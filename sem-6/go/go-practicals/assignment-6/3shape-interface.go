package main

import (
	"fmt"
	"math"
)

type shape interface {
	area() float64
	perimeter() float64
}

type circle struct {
	radius float64
}

func (c circle) area() float64 {
	return math.Pi * c.radius * c.radius
}

func (c circle) perimeter() float64 {
	return 2 * math.Pi * c.radius
}

type rectangle struct {
	length  float64
	breadth float64
}

func (r rectangle) area() float64 {
	return r.length * r.breadth
}

func (r rectangle) perimeter() float64 {
	return 2 * (r.length + r.breadth)
}

func main() {

	var c circle
	var r rectangle

	fmt.Print("Enter radius of circle: ")
	fmt.Scan(&c.radius)

	fmt.Print("Enter length and breadth of rectangle: ")
	fmt.Scan(&r.length, &r.breadth)
	
	var s shape
	fmt.Println("\n--- Circle ---")
	s = c
	fmt.Println("Area:", s.area())
	fmt.Println("Perimeter:", s.perimeter())
	fmt.Println("\n--- Rectangle ---")
	s = r
	fmt.Println("Area:", s.area())
	fmt.Println("Perimeter:", s.perimeter())
}
