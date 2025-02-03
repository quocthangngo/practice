#pragma once
// #include <iostream>
#include "Figure.h"
// using namespace std;

class Triagle : public Figure{
protected:
    float basesize, height;
public:
    Triagle(float a=0, float h=0);
    float Area();
    void Input(istream& inDevice);
    string className(){
        return "Triagle";
    }
    bool IsValid(){
        return basesize > 0 && height > 0;
    }
};