#include <algorithm>
#include "Algorithm.cpp"

class ArrayReverse : public ArrayAlgorithm {
public:
    virtual void Processing(vector<float>& a){
        reverse(a.begin(), a.end());
    }
};

class STL_Sort : public ArrayAlgorithm {
public:
    virtual void Processing(vector<float>& a){
        sort(a.begin(), a.end());        
    }
};