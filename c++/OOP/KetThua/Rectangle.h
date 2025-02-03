#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
protected:
    int width, height;
public:
    Rectangle();
    Rectangle(int, int);
    float Area();
    void Input(istream& inDevice);
};
#endif