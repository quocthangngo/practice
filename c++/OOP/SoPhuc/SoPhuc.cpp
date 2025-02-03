#include "SoPhuc.h"

SoPhuc::SoPhuc(){}

SoPhuc::SoPhuc(float a, float b) : a(a), b(b){}

SoPhuc SoPhuc::operator+ (const SoPhuc& src){
    SoPhuc x;
    x.a = src.a + a;
    x.b = src.b + b;
    return x;
}

SoPhuc SoPhuc::operator- (const SoPhuc& src){
    SoPhuc x;
    x.a = a - src.a;
    x.b = b - src.b;
    return x;
}

SoPhuc SoPhuc::operator* (const SoPhuc& src){
    SoPhuc x;
    x.a = a*b - src.a*src.b;
    x.b = a*src.b + src.a*b;
    return x;
}

SoPhuc SoPhuc::operator/ (const SoPhuc& src){
    SoPhuc x;
    x.a = (a*b+src.a*src.b)/(b*b+src.b*src.b);
    x.b = (b*src.a-a*src.b)/(b*b+src.b*src.b);
    return x;
}

bool SoPhuc::operator== (const SoPhuc& src){
    return (a == src.a && b == src.b);
} 

bool SoPhuc::operator!= (const SoPhuc& src){
    return (a != src.a || b != src.b);
}

ostream& operator<<(ostream &out, const SoPhuc& src) {
    out << src.a << "/" << src.b;
    return out;
}