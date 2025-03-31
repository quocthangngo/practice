#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Example 1: Simple lambda expression
    auto greet = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    greet();

    // Example 2: Lambda with parameters and return value
    auto add = [](int a, int b) -> int {
        return a + b;
    };
    std::cout << "Sum: " << add(3, 4) << std::endl;

    // Example 3: Lambda capturing local variables
    int factor = 2;
    auto multiply = [factor](int a) -> int {
        return a * factor;
    };
    std::cout << "Product: " << multiply(5) << std::endl;

    // Example 4: Using lambda with STL algorithms
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::for_each(numbers.begin(), numbers.end(), [](int &n) {
        n *= 2;
    });

    std::cout << "Doubled numbers: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}