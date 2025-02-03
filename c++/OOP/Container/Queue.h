#pragma once
#include "Container.h"

class Queue : public Container
{
public:
    void enqueue(Object&);
    Object& dequeue();
    Object& first();

private:
     LinkedList<Object> listObjs;
};
