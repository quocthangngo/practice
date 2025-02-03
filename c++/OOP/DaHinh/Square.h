#include "Rectangle.h"
#pragma once

class Square : public Rectangle {
public:
    Square(float a = 0);
    void Input(istream& inDevice);
    string className(){
        return "Square";
    }
    bool IsValid(){
        return true;
    }
};