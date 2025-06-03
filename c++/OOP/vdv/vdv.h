#include <iostream>
#include <string>

using namespace std;
class vdv {
private:
    string hoten;
    unsigned int tuoi;
    string monthidau;
    float cannang; 
    unsigned int chieucao;

public:
    vdv();
    vdv(string hoten, unsigned int tuoi, string monthidau, float cannang, unsigned int chieucao);
    ~vdv();
    // ~vdv(string hoten, unsigned int tuoi, string monthidau, float cannang, unsigned int chieucao);
    friend istream& operator>>(istream& in, vdv& obj);
    // Friend function to overload the >> operator (if not already implemented)
        friend ostream& operator<<(ostream& out, const vdv& obj);
    bool operator>(const vdv& src) const;
};