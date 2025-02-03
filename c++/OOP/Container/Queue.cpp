#include "Queue.h"

void Queue::enqueue(Object& obj)
{
    if(!isFull())
    {
        listObjs.addLast(obj);
        ++iCount;
    }
}
Object& Queue::dequeue()
{
    if(!isEmpty())
    {
        --iCount;
        return listObjs.extractHead();
    }
}
Object& Queue::first()
{
    if(!isEmpty)
        return listObjs.getHead();
}