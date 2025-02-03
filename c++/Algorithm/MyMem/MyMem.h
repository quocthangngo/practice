#pragma once

#include <stdio.h>
#include <malloc.h>

void *mAlloc(int size);
void mFree(void *ptr);
int mSize(void* ptr);