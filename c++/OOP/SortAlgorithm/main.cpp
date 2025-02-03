#include "SortAlgorithm.h"
#include "SortAlgotithm.cpp"

int main(){
    float a[] = {1.4F, -5.2F, 3.3F, 0}; int n = sizeof(a)/sizeof(a[0]);
    SortAlgorithm* alg = SortAlgorithm::getObject(SortAlgorithm::SelectionSort);
    alg->Sort(a,n);
    cout << "Mang sau khi sap xep tang dan " << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << "\t";
    return 0;
}