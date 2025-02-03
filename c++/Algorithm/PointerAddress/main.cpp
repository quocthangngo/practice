#include <iostream>
using namespace std;

int main()
{
    long a[10];
    void* ptr1 = &a[7], *ptr2 = &a[1];
    long d1 = (long*)ptr1 - (long*)ptr2;
    long d2 = (char*)ptr1 - (char*)ptr2;
    long d3 = (short*)ptr1 - (short*)ptr2;
    cout << d1 << " " << d2 << " " << d3 << " " << endl;
    //cout <<"Distance = " << (long)ptr1 - (long)ptr2;
    return 0;
}