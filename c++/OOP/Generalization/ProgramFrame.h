#include <iostream>
#pragma once
using namespace std;

class ProgramFrame {
protected:
    virtual void StartMessage(ostream& outDevice);
    virtual void Input(istream& inDevice) = 0;
    virtual bool ValidData() = 0;
    virtual void ErrorMessage(ostream& outDevice);
    virtual void Output(ostream& outDevice) = 0;
    virtual void Processing() {};
    virtual bool AskToContinue(istream& inDevice, ostream& outDevice);
    // void printCheck();
public:
    void Run(istream& inDevice, ostream& outDevice);
};