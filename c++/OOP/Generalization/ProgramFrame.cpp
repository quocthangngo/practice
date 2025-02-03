#include "ProgramFrame.h"

void ProgramFrame::Run(istream& inDevice, ostream& outDevice){
    bool ToContinue;
    do {
        StartMessage(outDevice);
        Input(inDevice);
        if(!ValidData()){
            ErrorMessage(outDevice);
            continue;
        }
        Processing();
        Output(outDevice);
        //printCheck();
        ToContinue = AskToContinue(inDevice, outDevice);
    } while (ToContinue);
}

void ProgramFrame::StartMessage(ostream& outDevice){
    outDevice << "Wellcome, entering data: ";
}

void ProgramFrame::ErrorMessage(ostream& outDevice){
    outDevice << "Input data error!" << endl;
}

bool ProgramFrame::AskToContinue(istream& inDevice, ostream& outDevice){
    char ch;
    outDevice << "Press 'Y' to continue, other key to stop..."; inDevice >> ch;
    return (ch=='y' || ch=='Y');
}

// void ProgramFrame::printCheck(){
//     cout << "Print on ProgramFrame";
// }