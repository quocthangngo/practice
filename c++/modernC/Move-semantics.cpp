#include <iostream>
#include <vector>
#include <utility> // For std::move

class MyClass {
public:
    int* data;
    size_t size;

    // Constructor
    MyClass(size_t s) : size(s), data(new int[s]) {
        std::cout << "Constructed MyClass with size " << size << std::endl;
    }

    // Destructor
    ~MyClass() {
        delete[] data;
        std::cout << "Destroyed MyClass with size " << size << std::endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + size, data);
        std::cout << "Copy constructed MyClass with size " << size << std::endl;
    }

    // Move Constructor
    MyClass(MyClass&& other) noexcept : size(other.size), data(other.data) {
        other.size = 0;
        other.data = nullptr;
        std::cout << "Move constructed MyClass with size " << size << std::endl;
    }

    // Copy Assignment Operator
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            std::copy(other.data, other.data + size, data);
            std::cout << "Copy assigned MyClass with size " << size << std::endl;
        }
        return *this;
    }

    // Move Assignment Operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = other.data;
            other.size = 0;
            other.data = nullptr;
            std::cout << "Move assigned MyClass with size " << size << std::endl;
        }
        return *this;
    }
};

int main() {
    MyClass obj1(10); // Construct obj1
    MyClass obj2 = std::move(obj1); // Move construct obj2 from obj1

    MyClass obj3(20); // Construct obj3
    obj3 = std::move(obj2); // Move assign obj3 from obj2

    return 0;
}