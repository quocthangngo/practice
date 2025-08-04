#ifndef HUMAN_H
#define HUMAN_H


#include <iostream>
#include <string>

using namespace std;
class Human {
private:
    string name;
    unsigned int age;
    string sex;
public:
    Human();
    virtual ~Human();
    
    void input();
    void output() const;
};

#endif