#include "SortAlgorithm.h"

SortAlgorithm* SortAlgorithm::_algorithm = NULL;
SortAlgorithm::SortAlgorithm(){
    currentAlgorithm = InsertionSort;
}

SortAlgorithm* SortAlgorithm::getObject(void (*pAlg)(float[], int)){
    if(_algorithm == NULL){
        _algorithm = new SortAlgorithm();
    }

    if(pAlg != NULL){
        _algorithm->currentAlgorithm = pAlg;
    }

    return _algorithm;
}

void SortAlgorithm::Sort(float a[], int n){
    if(currentAlgorithm != NULL){
        currentAlgorithm(a, n);
    }
}

void SortAlgorithm::SelectionSort(float a[], int n){
    int min;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            min = j;
        }
        if(min!=i){
        float temp = a[min]; a[min] = a[i]; a[i] = temp;
        }
    }
}

void SortAlgorithm::InsertionSort(float a[], int n){
    int pos; float x;
    for(int i=1;i<n;i++){
        x = a[i];
        for(pos=i;(pos>0)&&(a[pos-1]>x); pos--){
            a[pos] = a[pos-1];
        }
        a[pos] = x;
    }
}

void SortAlgorithm::InterchangeSort(float a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                float temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
        }
    }
}