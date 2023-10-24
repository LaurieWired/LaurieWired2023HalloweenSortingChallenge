package main

import (
	"fmt"
	"strconv"
	"strings"
)

func printArray(arr []int) {
	fmt.Println("{")
	fmt.Println(strings.Trim(strings.Join(strings.Fields(fmt.Sprint(arr)), " "), "[]"))
	fmt.Println("}")
}

func sortArray(arr []int) {
	// Your code goes here!

	printArray(arr) // Make sure to call this print after every iteration
}

func main() {
	fmt.Print("Enter numbers separated by spaces: ")
	var input string
	fmt.Scanln(&input)

	strs := strings.Split(input, " ")
	var arr []int
	for _, s := range strs {
		num, err := strconv.Atoi(s)
		if err == nil {
			arr = append(arr, num)
		}
	}

	printArray(arr)
	sortArray(arr)
	printArray(arr)
}
