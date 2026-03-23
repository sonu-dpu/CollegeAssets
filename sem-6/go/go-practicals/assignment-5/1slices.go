package main

import "fmt"

func main() {
	var n int

	fmt.Print("Enter number of elements: ")
	fmt.Scan(&n)

	nums := make([]int, n)

	fmt.Println("Enter elements:")
	for i := 0; i < n; i++ {
		fmt.Scan(&nums[i])
	}

	fmt.Println("\nOriginal slice:", nums)

	var newElement int
	fmt.Print("\nEnter element to append: ")
	fmt.Scan(&newElement)

	nums = append(nums, newElement)
	fmt.Println("After append:", nums)

	var index int
	fmt.Print("\nEnter index to remove element: ")
	fmt.Scan(&index)

	if index >= 0 && index < len(nums) {
		nums = append(nums[:index], nums[index+1:]...)
		fmt.Println("After removing element:", nums)
	} else {
		fmt.Println("Invalid index")
	}

	copySlice := make([]int, len(nums))
	copy(copySlice, nums)
	fmt.Println("\nCopied slice:", copySlice)
}
