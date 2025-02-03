#ifndef WINDOW_H
#define WINDOW_H

#include <String>
#include <iostream>

using namespace std;

class Window
{
private:
    /* data */
public:
    Window(/* args */);
    ~Window();
    virtual void Instance();
    virtual string Screen() = 0;

};

#endif