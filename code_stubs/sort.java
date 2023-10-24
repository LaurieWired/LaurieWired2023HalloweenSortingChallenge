import java.util.*;

public class ArraySorter {

    public static void printArray(int[] arr) {
        System.out.println("{");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
            if (i != arr.length - 1) {
                System.out.print(" ");
            }
        }
        System.out.println("\n}");
    }

    public static void sort(int[] arr) {
        // Your code goes here!

        printArray(arr);  // Make sure to call this print after every iteration
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter numbers separated by spaces: ");
        String input = scanner.nextLine();

        String[] inputStrings = input.split(" ");
        int[] arr = new int[inputStrings.length];

        for (int i = 0; i < inputStrings.length; i++) {
            arr[i] = Integer.parseInt(inputStrings[i]);
        }

        printArray(arr);
        sort(arr);
        printArray(arr);
    }
}
