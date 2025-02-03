#pragma once
#include "Container.h"

class PriorityQueue : public Container
{
public:
    void enqueue(Object&);
    Object& dequeue();
    Object& first();

private:
     Head<Object> listObjs;
};
