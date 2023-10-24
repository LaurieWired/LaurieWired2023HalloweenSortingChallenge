def print_array(arr):
	print("{")
	print(" ".join(map(str, arr)))
	print("}")

def sort(arr):
	# Your code goes here!

	print_array(arr)  # Make sure to call this print after every iteration

if __name__ == "__main__":
	arr = list(map(int, input("Enter numbers separated by spaces: ").split()))

	print_array(arr)
	sort(arr)
	print_array(arr)
	