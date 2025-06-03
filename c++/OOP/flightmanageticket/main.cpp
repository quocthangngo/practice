#include "passenger.cpp"
#include <vector>

int main()
{
    // Input number of passengers
    unsigned int numberOfPassengers;
    std::cout << "Enter number of passengers: ";
    std::cin >> numberOfPassengers;
    std::vector<Passenger> passengers(numberOfPassengers);
    std::cin.ignore(); // Clear the newline character from the input buffer
    // Input details for each passenger
    for (unsigned int i = 0; i < numberOfPassengers; ++i) {
        std::cout << "Input details for passenger " << (i + 1) << ":" << std::endl;
        passengers[i].input();
    }
    // Output details for each passenger
    std::cout << "\nPassenger Details:\n";
    for (unsigned int i = 0; i < numberOfPassengers; ++i) {
        std::cout << "Details for passenger " << (i + 1) << ":" << std::endl;
        passengers[i].output();
        std::cout << "Total Price: " << passengers[i].getTotalPrice() << std::endl;
    }
    // Clean up and exit
    for (unsigned int i = 0; i < numberOfPassengers; ++i) {
        passengers[i].~Passenger(); // Explicitly call destructor
    }
    return 0;
}