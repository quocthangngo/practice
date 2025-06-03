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
    ~Human();
    
    void input();
    void output() const;
};