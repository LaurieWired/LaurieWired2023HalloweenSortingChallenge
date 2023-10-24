def print_array(arr):
    print("{")
    print(" ".join(map(str, arr)))
    print("}")

def sort(arr):
    # Your code goes here!

    # Example using bubble sort. Replace this with your algorithm.
    # If you use this, I will be disappointed...
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                print_array(arr)  # Make sure to call this print after every iteration
                swapped = True
        if not swapped:
            break

if __name__ == "__main__":
    arr = list(map(int, input("Enter numbers separated by spaces: ").split()))

    print_array(arr)
    sort(arr)
    print_array(arr)
