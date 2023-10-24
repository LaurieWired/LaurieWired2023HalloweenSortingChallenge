#include <iostream>
#include <vector>
#include <sstream>
#include <unistd.h>

void print_array(const std::vector<int>& arr) {
    std::cout << "{" << std::endl;
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i != arr.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl << "}" << std::endl;
}

void quicksort(std::vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            std::swap(arr[i], arr[j]);
            i++;
        }
    }
    std::swap(arr[i], arr[high]);
    print_array(arr);
    quicksort(arr, low, i - 1);
    quicksort(arr, i + 1, high);
}

void sort(std::vector<int>& arr) {
    quicksort(arr, 0, arr.size() - 1);
}

int main() {
    std::cout << "Enter numbers separated by spaces: ";
    std::string line;
    std::getline(std::cin, line);
    std::istringstream stream(line);

    int number;
    std::vector<int> arr;
    while (stream >> number) {
        arr.push_back(number);
    }

    print_array(arr);
    sort(arr);
    print_array(arr);

    return 0;
}
