#include<iostream>
using namespace std;

class Point {
public:
    Point(){
        cout << "Constructor called";
    }
};

class X {
public:
    int x;
};

int main(){
    Point t1, *t2;

    X a = {10};
    X b = a;
     cout << a.x << " " << b.x;
    return 0;
}