#include "Figure.h"
#include "Figure.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Square.h"
#include "Square.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "Triagle.h"
#include "Triagle.cpp"
#include "Ellipse.h"
#include "Ellipse.cpp"

Figure* figMaxArea(Figure *figs[], int nFig){
    Figure * figMax = NULL;
    if(nFig > 0){
        figMax = figs[0];
        for(int i=0;i<nFig;i++){
            cout << figs[i]->className() << endl;
            if(figMax->Area() < figs[i]->Area())
                figMax = figs[i];
        }
    }
    return figMax;
}

int main(){
    Figure* Figs[] = {
        new Rectangle(9.3F, 9.7F), new Circle(4.5F),
        new Ellipse(4.2F, 4.7F), new Square(9.5F),
        new Triagle(10.7F, 6.4F), new Ellipse(3.7F, 7.8F)
    };
    int nFig = sizeof(Figs)/sizeof(Figure*);
    Figure* aFig = figMaxArea(Figs, nFig);
    if(aFig != NULL)
        cout << aFig->Area() << endl;

    Figure* f = new Square(12);
    cout << f->Area() << endl;
    
    return 0;
}