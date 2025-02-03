#include "../DaHinh/Figure.h"
#include "../DaHinh/Figure.cpp"
#include "ProgramFrame.h"
#include "ProgramFrame.cpp"

class FigureTest : public ProgramFrame {
    Figure* mFig;
public:
    FigureTest(Figure *pFig){
        mFig = pFig;
    }

    void Input(istream& inDevice){
        if(mFig != NULL)
            mFig->Input(inDevice);
    }

    void Output(ostream& outDevice){
        if(mFig == NULL)
            return;
        outDevice << mFig->className() << ", Area: " << mFig->Area() << endl;
    }

    bool ValidData(){
        if(mFig == NULL)
            return false;
        return mFig->IsValid();
    }

    void StartMessage(ostream& outDevice){
        if(mFig != NULL)
            outDevice << "Entering data for " << mFig->className() << " :";
    }
};