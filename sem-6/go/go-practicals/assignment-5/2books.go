package main

import "fmt"

type Book struct {
	BookID int
	Title  string
	Author string
	Price  float64
}

func main() {
	var n int
	fmt.Print("Enter number of books: ")
	fmt.Scan(&n)
	books := make([]Book, n)

	for i := 0; i < n; i++ {
		fmt.Println("\nEnter details for Book", i+1)

		fmt.Print("Enter Book ID: ")
		fmt.Scan(&books[i].BookID)

		fmt.Print("Enter Title: ")
		fmt.Scan(&books[i].Title)

		fmt.Print("Enter Author: ")
		fmt.Scan(&books[i].Author)

		fmt.Print("Enter Price: ")
		fmt.Scan(&books[i].Price)
	}

	fmt.Println("\n----- Book Details -----")
	for i := 0; i < n; i++ {
		fmt.Println("\nBook", i+1)
		fmt.Println("Book ID:", books[i].BookID)
		fmt.Println("Title:", books[i].Title)
		fmt.Println("Author:", books[i].Author)
		fmt.Println("Price:", books[i].Price)
	}
}
