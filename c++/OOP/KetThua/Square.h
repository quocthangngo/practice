#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(float a = 0);
    void Input(istream& inDevice);
};

#endif