#include <vector>
#include "ProgramFrame.h"
#include "ProgramFrame.cpp"
#include "Algorithm.cpp"
#include "ArrayReverse.cpp"

using namespace std;

class SortAlgTry : public ProgramFrame {
    vector<float> a;
    int n;
public:
    SortAlgTry(){}
    void Input(istream& inDevice){
        inDevice >> n;
        if(n<=0)
            return;
        a.resize(n);
        for(int i=0;i<a.size();i++)
            inDevice >> a[i];
    }

    void Output(ostream& outDevice){
        outDevice << "Result after sorting: ";
        for(int i=0;i<a.size();i++)
            outDevice << a[i] << " ";
        outDevice << endl;
    }

    bool ValidData(){
        return (n > 0);
    }

    void Processing(){
        int m = a.size() - 1;
        for(int i=0;i<m;i++){
            int idMin = i;
            for(int j=i+1;j<=m;j++){
                if(a[j]<a[idMin])
                    idMin = j;
            }
            float temp = a[idMin];
            a[idMin] = a[i];
            a[i] = temp;
        } 
    }

    // void printCheck(){
    //     cout << "Print check SortAlgTry";
    // }
};

int main(){
    SortAlgTry SortTry;
    SortTry.Run(cin, cout);
    // SortTry.printCheck();

    AlgorithmTest sortTest(new STL_Sort);
    sortTest.Run(cin, cout);

    AlgorithmTest sortTest2(new SelectionSort);
    sortTest2.Run(cin, cout);

    AlgorithmTest sortTest3(new ArrayReverse);
    sortTest3.Run(cin, cout);
    return 0;
}