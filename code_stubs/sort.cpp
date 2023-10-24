#include <iostream>
#include <vector>
#include <sstream>

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

void sort(std::vector<int>& arr) {
    // Your code goes here!

    print_array(arr);  // Make sure to call this print after every iteration
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
