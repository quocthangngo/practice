#include "student.cpp"
#include "human.cpp"


int main() {
    student s;
    s.set();
    s.get();
    cout << "GPA: " << s.GPA() << endl;
    return 0;
}
