#include <vector>
#include <iostream>
using namespace std;

typedef vector<float> Floats;
typedef vector<Floats> float2D;

void float2DInit(float2D &a, int n){
    a.resize(n);
    for(int i=0;i<a.size();i++)
        a[i].resize(n);
}

void float2D_In(float2D &a){
    for (int i=0;i<a.size();i++){
        for (int j=0;j<a[i].size();j++)
            cin >> a[i][j];
    }
}

void float2D_Out(float2D &a){
    for (int i=0;i<a.size();i++){
        for (int j = 0; j < a[i].size(); j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    float2D A;
    int n;
    cin >> n;
    if(n<=0){
        cout << "Invalid size..." << endl;
        return 0;
    }
    float2DInit(A, n);
    cout << "Input elements of square array: " << endl;
    float2D_In(A);
    cout << "Elements of square array: " << endl;
    float2D_Out(A);
    return 0;
}
