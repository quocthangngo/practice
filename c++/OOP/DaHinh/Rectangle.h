#pragma once
// #include <iostream>
#include "Figure.h"
// using namespace std;

class Rectangle : public Figure{
protected:
    int width, height;
public:
    Rectangle();
    Rectangle(int, int);
    float Area();
    void Input(istream& inDevice);
    string className(){
        return "Rectangle";
    }
    bool IsValid(){
        return width >0 && height>0;
    }
};