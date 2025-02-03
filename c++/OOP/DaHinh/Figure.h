#include <iostream>
#pragma once

using namespace std;

class Figure {
public:
    Figure();
    virtual float Area();
    virtual void Input(istream& inDevice);
    virtual string className() = 0;
    virtual bool IsValid() = 0;
};