#include <iostream>
#include <memory.h>

using namespace std;

typedef struct
{
    char * name, *FamilyName;
    long id;
    char BirthDate[11];
    float AGP;
} StudentRec;

void Initialize(StudentRec *st)
{
    memset(st, 0, sizeof(StudentRec));
}

void Initialize(StudentRec& st)
{
    memset(&st, 0, sizeof(StudentRec));
}

int main()
{
    StudentRec std1, std2;
    Initialize(&std1);
    Initialize(std2);
    return 0;
}