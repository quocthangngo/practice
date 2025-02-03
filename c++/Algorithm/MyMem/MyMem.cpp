#include "MyMem.h"

void *mAlloc(int size)
{
    size += sizeof(int);
    void *ptr = malloc(size);
    *(int*)ptr = size;
    return ((int*)ptr) + 1;
}

void mFree(void *ptr)
{
    ptr = ((int*)ptr) - 1;
    free(ptr);
}

int mSize(void* ptr)
{
    return *(((int*)ptr) - 1);
}