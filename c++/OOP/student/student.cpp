#include "student.h"

student::student() {
}

student::~student() {
}

void student::set() {
    Human::set();
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter math score: ";
    cin >> math;
    cout << "Enter physics score: ";
    cin >> physics;
    cout << "Enter chemistry score: ";
    cin >> chemistry;
}

void student::get() const {
    Human::get();
    cout << "Student ID: " << id << endl;
    cout << "Math score: " << math << endl;
    cout << "Physics score: " << physics << endl;
    cout << "Chemistry score: " << chemistry << endl;
}

float student::GPA() const {
    return (math + physics + chemistry) / 3;
}
