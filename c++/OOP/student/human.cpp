#include "human.h"

Human::Human() {
}

Human::~Human() {
}

void Human::set() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    cin.ignore(); // Clear the newline character from the input buffer
    getline(cin, address);
}

void Human::get() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
}
