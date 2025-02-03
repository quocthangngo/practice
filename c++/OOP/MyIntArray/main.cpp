#include <iostream>

using namespace std;

class MyIntArray
{
private:
    /* data */
    int *pArr;
    int size;
public:
    MyIntArray(int);
    ~MyIntArray();
    void update(int k, int val);
    int get(int k);
};

MyIntArray::MyIntArray(int sz)
{
    size = sz;
    pArr = new int[size];
    for (int i=0;i<size;++i)
        pArr[i] = 0;
}

MyIntArray::~MyIntArray()
{
//    delete pArr;
    if(size > 0) {
        size = 0;
        delete [] pArr; pArr = NULL;
    }
}

int MyIntArray::get(int k) {
    return pArr[k];
}

void MyIntArray::update(int k, int val){
    pArr[k] = val;
}

int main() {
    MyIntArray a(10);
    MyIntArray b(a);

    a.update(3, 10);
    cout << b.get(3) << endl;

    // double v[3] = { 5, 10, 20 }; 
    // double *x = v;
    // cout << &x[0] << " " << &x[1];
    return 0;
}