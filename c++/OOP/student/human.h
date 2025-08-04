#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>

using namespace std;

class Human
{
private:
    string name;
    int age;
    string address;
public:
    Human(/* args */);
    ~Human();

    void set();
    void get() const;
};

#endif // HUMAN_H