#pragma once
#include <iostream>

using namespace std;

class  SortAlgorithm
{
private:
    /* data */
    static SortAlgorithm* _algorithm;
    void (*currentAlgorithm)(float[], int);
    SortAlgorithm();
public:
    static SortAlgorithm* getObject(void (*pAlg)(float[], int) = NULL);
    static void SelectionSort(float[], int);
    static void InsertionSort(float[], int);
    static void InterchangeSort(float[], int);
    void Sort(float[], int);
};