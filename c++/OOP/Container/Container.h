#pragma once

#include <iostream>
using namespace std;

class Container
{
public:
    virtual void put(Object&) = 0;
    virtual Object& get() = 0;
    virtual Object& peek() = 0;
    virtual bool isEmpty() const;
    virtual bool isFull() const;
    virtual int numberOfElems() const;

private:
    int iCount;
};