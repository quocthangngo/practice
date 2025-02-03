#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include <String>
#include <iostream>

using namespace std;

class ScrollBar
{
private:
    /* data */
public:
    ScrollBar(/* args */);
    ~ScrollBar();
    virtual void Instance();
    virtual string Scroll() = 0;

};
#endif