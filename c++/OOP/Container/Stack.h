#pragma once
#include "Container.h"

class Stack : public Container
{
public:
    void push(Object&);
    Object& pop();
    Object& top();
private:
    LinkedList<Object> listObjs;
};