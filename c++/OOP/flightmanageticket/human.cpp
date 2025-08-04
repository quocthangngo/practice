#include "human.h"

void Human::input() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter sex: ";
    cin >> sex;
}
void Human::output() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Sex: " << sex << endl;
}

Human::~Human() {
    // No special cleanup needed
    // Destructor is empty as there are no dynamically allocated resources
}

Human::Human(){
}
