#include <iostream>

class MyClass
{
private:
    int x;
    double d;

public:
    MyClass(int xx, double dd)
        : x{xx}, d{dd}
    {}

    void printValue()
    {
        std::cout << "The values of x is: " << x << ", the value of d is: " << d;
    }

    MyClass& operator-=(const MyClass& rhs)
    {
        d-=rhs.d;
        x-=rhs.x;
        return *this;
    }

    friend MyClass operator-(MyClass lhs, const MyClass& rhs)
    {
        lhs -= rhs;
        return lhs;
    }
};

int main()
{
    MyClass myobject{3, 3.0};
    MyClass mysecond{1, 1.0};
    MyClass myresult = myobject - mysecond;
    myresult.printValue();
    return 0;
}