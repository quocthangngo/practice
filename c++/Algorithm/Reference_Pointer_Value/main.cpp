#include <iostream>
#include <math.h>
using namespace std;

int indexMinAbs(float a[], int n){
    int i = 1, idx = 0;
    while (i<n)
    {
        if(fabs(a[i]) < fabs(a[idx]))
            idx = i;
        i++;
    }
    return idx;
}

float* pointerMinAbs(float a[], int n)
{
    int i = 1, idx = 0;
    while (i<n)
    {
        if(fabs(a[i]) < fabs(a[idx]))
            idx = i;
        i++;
    }
    return &a[idx];
}

float& refMinAbs(float a[], int n)
{
    int i = 1, idx = 0;
    while (i<n)
    {
        if(fabs(a[i]) < fabs(a[idx]))
            idx = i;
        i++;
    }
    return a[idx];
}

int main(){
    float B[] = {-9, 12.7F, 2.3F, 11, -10, -3.6F};
    int n = sizeof(B)/sizeof(B[0]);
    int id = indexMinAbs(B, n);
    float* pMin = pointerMinAbs(B, n);
    float& refMin = refMinAbs(B, n);
    cout << "Value: " << B[id] << " " << *pMin << " " << refMin << "\n";
    printf("Address: 0x%x 0x%x 0x%x\n", &B[id], pMin, &refMin);
    return 0;
}