#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
public:
    explicit Person(string name)
        : name{name}
    {}

    string getName() const
    {
        return name;
    }
};

class Student : public Person
{
private:
    int semester;
public:
    Student(string iname, int semester)
        : Person::Person{ iname }, semester{semester}
    {}

    int getSemester() const
    {
        return semester;
    }
};

int main()
{
    Person person{ "John Doe." };
    std::cout << person.getName() << '\n';
    Student student{ "Jane Doe.", 2 };
    std::cout << student.getName() << '\n';
    std::cout << "The semester is: " << student.getSemester() << '\n';
    return 0;
}