#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "human.h" // Include the header file for Human class

using namespace std;

class student : public Human
{
private:
    string id;
    float math;
    float physics;
    float chemistry;
public:
    student(/* args */);
    ~student();
    void set();
    void get() const;
    float GPA() const;
};

#endif // STUDENT_H