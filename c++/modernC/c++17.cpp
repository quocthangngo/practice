// constexpr lambdas
// #include <iostream>

// int main() {
//     // Define a constexpr lambda
//     constexpr auto add = [](int a, int b) constexpr {
//         return a + b;
//     };

//     // Use the lambda in a constexpr context
//     constexpr int result = add(2, 3);

//     std::cout << result << std::endl; // Output: 5
//     return 0;
// }

// structured bindings
// #include <iostream>
// #include <utility>
// using namespace std;

// int main() {
//     // Structured bindings (C++17)
//     pair<int, string> p = {1, "Hello"};
//     auto [id, msg] = p;

//     cout << "ID: " << id << ", Message: " << msg << endl;

//     return 0;
// }

// filesystem library
// #include <iostream>
// #include <filesystem>
// namespace fs = std::filesystem;

// int main() {
//     // Create a directory
//     fs::create_directory("example");

//     // Check if the directory exists
//     if (fs::exists("example")) {
//         std::cout << "Directory created successfully." << std::endl;
//     }

//     return 0;
// }

//std::string_view
// #include <iostream>
// #include <string_view>
// int main() {
//     // Create a string_view from a string literal
//     std::string_view sv = "Hello, World!";
    
//     // Print the string_view
//     std::cout << sv << std::endl; // Output: Hello, World!

//     // Use string_view to access a substring
//     std::string_view sub_sv = sv.substr(0, 5);
//     std::cout << sub_sv << std::endl; // Output: Hello

//     return 0;
// }

//std::any
// #include <iostream>
// #include <any>
// #include <string>
// int main() {
//     // Create an any object
//     std::any a = 42; // Store an integer

//     // Check if the any object contains an integer
//     if (a.type() == typeid(int)) {
//         std::cout << "Contains an int: " << std::any_cast<int>(a) << std::endl;
//     }

//     // Store a string in the any object
//     a = std::string("Hello, World!");

//     // Check if the any object contains a string
//     if (a.type() == typeid(std::string)) {
//         std::cout << "Contains a string: " << std::any_cast<std::string>(a) << std::endl;
//     }

//     return 0;
// }

//std::variant
#include <iostream>
#include <variant>
#include <string>
using namespace std;

int main() {
    std::variant<int, double, std::string> v;

    v = 42;
    std::cout << std::get<int>(v) << std::endl; // Output: 42

    v = "hello";
    std::cout << std::get<std::string>(v) << std::endl; // Output: hello

    // Safe access with std::get_if
    if (auto p = std::get_if<std::string>(&v)) {
        std::cout << "String value: " << *p << std::endl;
    }

    // Using std::visit
    std::visit([](auto&& arg) {
        std::cout << "Current value: " << arg << std::endl;
    }, v);

    return 0;
}