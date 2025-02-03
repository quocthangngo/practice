#pragma once
#include <iostream>
using namespace std;

class SoPhuc {
private:
    float a,b;
public:
    SoPhuc();
    SoPhuc(float, float);
    SoPhuc operator+ (const SoPhuc&);
    SoPhuc operator- (const SoPhuc&);
    SoPhuc operator* (const SoPhuc&);
    SoPhuc operator/ (const SoPhuc&);
    bool operator== (const SoPhuc&);
    bool operator!= (const SoPhuc&);

    friend ostream& operator<<(ostream &out, const SoPhuc& src);
};