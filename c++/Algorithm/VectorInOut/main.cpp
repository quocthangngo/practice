#include <iostream>
#include <vector>
using namespace std;

void arrayFloatInput(vector<float> &a){
    float x;
    while (cin >> x)
        a.push_back(x);
}

void arrayFloatOutPut(const vector<float> &a){
    for (int i=0;i<a.size();i++)
        cout << a[i] << " ";
}

int main(int argc, char const *argv[])
{
    /* code */
    vector<float> a;
    cout << "Input an array, press Ctrl X then Enter to stop:" << endl;
    arrayFloatInput(a);
    cout << "Element(s) in the array:";
    arrayFloatOutPut(a);
    cout << endl;
    return 0;
}
