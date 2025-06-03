//binary literals
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 0b1010;      // binary for 10
//     int b = 0b11110000;  // binary for 240

//     cout << "a = " << a << endl; // Output: a = 10
//     cout << "b = " << b << endl; // Output: b = 240

//     return 0;
// }

//digit separators
// #include <iostream>
// using namespace std;

// int main() {
//     int million = 1'000'000;           // 1,000,000
//     int binary = 0b1111'0000;          // 240
//     long long big = 123'456'789'012LL; // 123,456,789,012

//     cout << "million = " << million << endl;
//     cout << "binary = " << binary << endl;
//     cout << "big = " << big << endl;

//     return 0;
// }

//Auto for functions
// #include <iostream>
// using namespace std;

// // Function with auto return type (C++14)
// auto add(int a, int b) {
//     return a + b;
// }

// int main() {
//     auto result = add(5, 7);
//     cout << "add(5, 7) = " << result << endl; // Output: add(5, 7) = 12
//     return 0;
// }

//Generic lambdas
#include <iostream>
using namespace std;

int main() {
    // Generic lambda (C++14)
    auto print_sum = [](auto a, auto b) {
        cout << "Sum: " << a + b << endl;
    };

    print_sum(3, 4);           // int
    print_sum(2.5, 4.1);       // double
    print_sum(string("Hi "), string("there")); // string

    return 0;
}