#include <stdlib.h>
#include <iostream>

using namespace std;

char* getBytes(double x, int* nb)
{
    double* px = (double*)malloc(sizeof(double));
    *nb = sizeof(double);
    if(px != NULL)
    {
        *px = x;
    }
    return (char*)px;
}

void listBytes(char bytes[], int nb)
{
    for(int i=0;i<nb;i++)
        printf("0x%X ", (unsigned char)bytes[i]);
    printf("\n");
}

int main()
{
    double a = 0.01; char* storedBytes; int nb;
    storedBytes = getBytes(a, &nb);
    if(storedBytes !=NULL)
    {
        listBytes(storedBytes, nb);
        free(storedBytes);
    }
    return 0;
}