#include <malloc.h>
#include <iostream>
using namespace std;


void arrayFloatOutput(float a[], int n)
{
    int i;
    for (i = 0;i<n;i++)
        cout << a[i] << "";
}

float * arrayFloatInput(int& n)
{
    cin >> n;
    if(n<=0)
        return NULL;
    float* a = new float[n];
    if(a!=NULL)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }
    return a;
}

int main()
{
    float *B; int nB;
    cout << "Number and elements: ";
    B = arrayFloatInput(nB);
    if(B!=NULL)
    {
        // Do something here...
        arrayFloatOutput(B, nB);
        // Free allocated memory
        delete[] B;
    }
    return 0;
}

