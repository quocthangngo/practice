#include <iostream>
#include <vector>
#include <algorithm>

// erase
// int main() {
//     std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     // Erase 3 elements from the beginning
//     if (vec.size() >= 3) {
//         vec.erase(vec.begin(), vec.begin() + 3);
//     }

//     // Print the modified vector
//     for (int i : vec) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// find
// int main() {
//     std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     // Find the first occurrence of 5
//     auto it = std::find(vec.begin(), vec.end(), 5);

//     if (it != vec.end()) {
//         std::cout << "Element found at index: " << std::distance(vec.begin(), it) << std::endl;
//     } else {
//         std::cout << "Element not found" << std::endl;
//     }

//     return 0;
// }

// sort
int main() {
    std::vector<int> vec = {10, 3, 5, 7, 2, 8, 6, 1, 9, 4};

    // Sort the vector in ascending order
    std::sort(vec.begin(), vec.end(), [](int x, int y) {
        return x < y;
    });

    std::cout << "Sorted vector in ascending order: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Sort the vector in descending order using a lambda expression
    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });

    std::cout << "Sorted vector in descending order: ";
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}