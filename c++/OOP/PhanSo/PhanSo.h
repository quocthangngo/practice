// #ifndef PHANSO_H_INCLUDED
// #define PHANSO_H_INCLUDED
#pragma once

#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu;
    int mau;
public:
    PhanSo();
    PhanSo(int, int);
    PhanSo& operator+=(const PhanSo&);
    const PhanSo operator+(const PhanSo&) const;
    bool operator==(const PhanSo&) const;
    PhanSo& operator++();
    PhanSo operator++(int);

friend ostream& operator<<(ostream &out, const PhanSo& src);
};