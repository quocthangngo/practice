#include <iostream>
// #include <unordered_set>

// unordered_set
// int main() {
//     // Create an unordered_set of integers
//     std::unordered_set<int> mySet;

//     // Insert elements into the unordered_set
//     mySet.insert(10);
//     mySet.insert(20);
//     mySet.insert(30);
//     mySet.insert(40);

//     // Attempt to insert a duplicate element
//     mySet.insert(20); // This will not be added as 20 is already in the set

//     // Print the elements of the unordered_set
//     std::cout << "Elements in the unordered_set: ";
//     for (const int& elem : mySet) {
//         std::cout << elem << " ";
//     }
//     std::cout << std::endl;

//     // Check if an element exists in the unordered_set
//     int value = 30;
//     if (mySet.find(value) != mySet.end()) {
//         std::cout << value << " is in the unordered_set." << std::endl;
//     } else {
//         std::cout << value << " is not in the unordered_set." << std::endl;
//     }

//     // Remove an element from the unordered_set
//     mySet.erase(20);

//     // Print the elements of the unordered_set after removal
//     std::cout << "Elements in the unordered_set after removal: ";
//     for (const int& elem : mySet) {
//         std::cout << elem << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// unordered_map
// #include <unordered_map>

// int main() {
//     // Create an unordered_map of string keys and int values
//     std::unordered_map<std::string, int> myMap;

//     // Insert elements into the unordered_map
//     myMap["apple"] = 1;
//     myMap["banana"] = 2;
//     myMap["cherry"] = 3;

//     // Access elements by key
//     std::cout << "apple: " << myMap["apple"] << std::endl;
//     std::cout << "banana: " << myMap["banana"] << std::endl;

//     // Check if a key exists
//     if (myMap.find("cherry") != myMap.end()) {
//         std::cout << "cherry is in the map." << std::endl;
//     } else {
//         std::cout << "cherry is not in the map." << std::endl;
//     }

//     // Iterate over the elements in the unordered_map
//     std::cout << "Elements in the unordered_map:" << std::endl;
//     for (const auto& pair : myMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     // Remove an element by key
//     myMap.erase("banana");

//     // Print the elements after removal
//     std::cout << "Elements in the unordered_map after removal:" << std::endl;
//     for (const auto& pair : myMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     return 0;
// }

// tuple
// #include <tuple>
// #include <string>

// // Function that returns a tuple
// std::tuple<int, std::string, double> getPerson() {
//     return std::make_tuple(25, "John Doe", 75.5);
// }

// int main() {
//     // Create a tuple
//     std::tuple<int, std::string, double> person = std::make_tuple(30, "Alice", 65.0);

//     // Access elements of the tuple
//     std::cout << "Age: " << std::get<0>(person) << std::endl;
//     std::cout << "Name: " << std::get<1>(person) << std::endl;
//     std::cout << "Weight: " << std::get<2>(person) << std::endl;

//     // Modify elements of the tuple
//     std::get<0>(person) = 31;
//     std::get<1>(person) = "Alice Smith";
//     std::get<2>(person) = 66.0;

//     // Print modified elements
//     std::cout << "Modified Age: " << std::get<0>(person) << std::endl;
//     std::cout << "Modified Name: " << std::get<1>(person) << std::endl;
//     std::cout << "Modified Weight: " << std::get<2>(person) << std::endl;

//     // Use a tuple returned from a function
//     auto person2 = getPerson();
//     std::cout << "Person2 Age: " << std::get<0>(person2) << std::endl;
//     std::cout << "Person2 Name: " << std::get<1>(person2) << std::endl;
//     std::cout << "Person2 Weight: " << std::get<2>(person2) << std::endl;

//     return 0;
// }

// thread
// #include <thread>
// void function1(const std::string& param)
// {
//     for (int i = 0; i < 5; ++i)
//     {
//         std::cout << "Function 1 is executing " << param << std::endl;
//     }
// }

// void function2(const std::string& param)
// {
//     for (int i = 0; i < 5; ++i)
//     {
//         std::cout << "Function 2 is executing " << param << std::endl;
//     }
// }

// int main()
// {
//     // Create a thread using function pointer
//     std::thread thread1(function1, "Thread 1");
//     std::thread thread2(function2, "Thread 2");

//     // Wait for the threads to finish
//     thread1.join();
//     thread2.join();
//     return 0;
// }

// mutex
// #include <thread>
// #include <iostream>
// #include <string>
// #include <vector>
// #include <mutex>

// std::mutex mtx; // Mutex for synchronizing access to shared data
// std::vector<int> sharedData; // Shared data
// // Function to be executed by each thread
// void threadFunction(int id)
// {
//     // Lock the mutex to access shared data
//     // mtx.lock();
//     std::lock_guard<std::mutex> lock(mtx); // Automatically unlocks when going out of scope
//     for (int i = 0; i < 5; ++i)
//     {
//         sharedData.push_back(id * 10 + i);
//         std::cout << "Thread " << id << " added value: " << id * 10 + i << std::endl;
//     }
//     mtx.unlock(); // Unlock the mutex
// }
// int main()
// {
//     std::vector<std::thread> threads;

//     // Create and start multiple threads
//     for (int i = 0; i < 3; ++i)
//     {
//         threads.push_back(std::thread(threadFunction, i));
//     }

//     // Wait for all threads to finish
//     for (auto& t : threads)
//     {
//         t.join();
//     }

//     // Print the shared data
//     std::cout << "Shared data: ";
//     for (const auto& value : sharedData)
//     {
//         std::cout << value << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// default and delete
#include <iostream>
class MyClass
{
public:
    MyClass() = default; // Default constructor
    MyClass(const MyClass&) = delete; // Delete copy constructor
    MyClass& operator=(const MyClass&) = delete; // Delete copy assignment operator
    void display() const {
        std::cout << "MyClass object" << std::endl;
    }
};

int main()
{
    MyClass obj1; // OK: default constructor
    // MyClass obj2(obj1); // Error: copy constructor is deleted
    // MyClass obj3 = obj1; // Error: copy constructor is deleted
    obj1.display();
    return 0;
}