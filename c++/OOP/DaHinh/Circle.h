#pragma once
#include "Ellipse.h"

class Circle : public Ellipse {
public:
    Circle(float r=0);
    void Input(istream& inDevice);
    string className(){
        return "Circle";
    }
    bool IsValid(){
        return true;
    }
};