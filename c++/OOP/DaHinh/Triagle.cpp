#include "Triagle.h"

Triagle::Triagle(float a, float b){
    basesize = a;
    height = b;
}

void Triagle::Input(istream& inDevice){
    inDevice >> basesize >> height;
}

float Triagle::Area(){
    return basesize*height/2;
}