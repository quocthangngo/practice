#include "PhanSo.h"
#include "PhanSo.cpp"

int main(){
    PhanSo a(1, 3), b(2, 5), c;
    c = a+b;
    cout << "c = " << c << endl;
    cout << "c = " << ++c << endl;
    a+=b;
    cout << "a = " << a << endl;
    cout << "b = " << b++ << endl;
    cout << "b = " << b << endl;
    return 0;
}