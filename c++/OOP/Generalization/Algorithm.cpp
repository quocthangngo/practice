#include <iostream>
#include <vector>
#include "ProgramFrame.h"
#pragma once
using namespace std;

istream& operator >> (istream& inDevice, vector<float>& a){
    int n;
    inDevice >> n;
    if(n>0){
        a.resize(n);
        for(int i=0;i<a.size();i++)
            inDevice >> a[i];
    }
    return inDevice;
}

ostream& operator << (ostream& outDevice, vector<float>& a){
    for(int i=0;i<a.size();i++)
        outDevice << a[i] << " ";
    return outDevice;
}

class ArrayAlgorithm {
public:
    virtual void Processing(vector<float>& a) = 0;
};

class AlgorithmTest : public ProgramFrame {
    ArrayAlgorithm* mAlg;
    vector<float> Data;
public:
    AlgorithmTest(ArrayAlgorithm* pAlg){
        mAlg = pAlg;
    }

    void Input(istream& inDev){
        inDev >> Data;
    }

    void Output(ostream& outDev){
        outDev << "Result after sorting: ";
        outDev << Data << endl;
    }

    bool ValidData(){
        return (Data.size()>0);
    }

    void StartMessage(ostream& outDev){
        outDev << "Enter n, then a[0],..., a[n-1]: ";
    }

    void Processing(){
        if(mAlg != NULL)
            mAlg->Processing(Data);
    }
};

class SelectionSort : public ArrayAlgorithm{
public:
    virtual void Processing(vector<float>& a){
        int m = a.size() - 1;
        for(int i=0;i<m;i++){
            int idMin = i;
            for(int j=i+1;j<=m;j++){
                if(a[j] < a[idMin])
                    idMin = j;
            }
            float temp = a[idMin];
            a[idMin] = a[i];
            a[i] = temp;
        }
    }
};