#include "../DaHinh/Rectangle.h"
#include "../DaHinh/Rectangle.cpp"
#include "FigureTest.cpp"


class RectangleTest : public FigureTest
{
private:
    /* data */
public:
    RectangleTest() : FigureTest(new Rectangle){

    }
};

int main(){
    RectangleTest rectTest;
    rectTest.Run(cin, cout);
    return 0;
}
