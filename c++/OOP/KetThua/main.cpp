#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Square.h"
#include "Square.cpp"

int main(){
    Rectangle Rec;
    Square Sq;

    cout << "Rectangle'sizes (width and height): ";
    Rec.Input(cin);
    cout << "Rectangle's area = " << Rec.Area() << endl;

    cout << "Square's size: ";
    Sq.Input(cin);
    cout << "Square's area = " << Sq.Area() << endl;
    return 0;
}