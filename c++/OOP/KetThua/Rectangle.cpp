#include "Rectangle.h"

Rectangle::Rectangle(){

}

Rectangle::Rectangle(int w, int h){
    width = w;
    height = h;
}

void Rectangle::Input(istream& inDevice){
    inDevice >> width >> height;
}

float Rectangle::Area(){
    return width*height;
}