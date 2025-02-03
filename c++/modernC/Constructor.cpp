#include <iostream>
#include <string>

using namespace std;

// class MyClass
// {
// private:
//     int x;
//     double d;
// public:
//     MyClass(int xx, double dd);  // user-provided constructor
//     MyClass(const MyClass& rhs); // user-defined copy constructor
//     void printData();
//     void changeData();
// };

// MyClass::MyClass(int xx, double dd)
//     : x{xx}, d{dd}
// {
// }

// MyClass::MyClass(const MyClass& rhs)
//     : x{rhs.x}, d{rhs.d}
// {
// }

// void MyClass::printData()
// {
//     std::cout << "The x is: " << x << ", and the d is: " << d << '\n';
//     std::cout << "The address x is: " << &x << ", and the d is: " << &d << '\n';
// }

// void MyClass::changeData()
// {
//     x++;
//     d++;
// }

// int main()
// {
//     MyClass o1{123, 456.789}; // invokes a user-provided constructor
//     MyClass o2 = o1;
//     o2.changeData();

//     o1.printData();
//     o2.printData();
//     o1.printData();
//     return 0;
// }

class MyClass
{
private:
    double d;
    string s;
public:
    MyClass(double dd, string ss)  // user-provided constructor
    : d{dd}, s{ss}
    {}

    MyClass(MyClass&& otherObject) // user-defined move constructor
    : d{std::move(otherObject.d)},
      s{std::move(otherObject.s)}
    {
        cout << "Move contructor invoked.\n";
    }

    void printData()
    {
        cout << "The value of a double is: " << d << ", and the value of a string is: " << s << '\n';
    }
};

int main()
{
    MyClass o1{3.14, "This was in object 1."};
    MyClass o2 = std::move(o1);
    o2.printData();
    o1.printData();
    return 0;
}