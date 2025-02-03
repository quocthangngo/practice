#pragma once
#include "Figure.h"

class Ellipse : public Figure {
protected:
    float Ra, Rb;
public:
    Ellipse(float a=0, float b=0);
    float Area();
    void Input(istream& inDevice);
    string className(){
        return "Ellipse";
    }
    bool IsValid(){
        return Ra > 0 && Rb > 0;
    }
};