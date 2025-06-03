#include "vdv.h"

vdv::vdv() {}

vdv::vdv(string hoten, unsigned int tuoi, string monthidau, float cannang, unsigned int chieucao) {
    this->hoten = hoten;
    this->tuoi = tuoi;
    this->monthidau = monthidau;
    this->cannang = cannang;
    this->chieucao = chieucao;
}

vdv::~vdv() {
    // Destructor
}

istream& operator>>(istream& in, vdv& obj) {
    cout << "Enter name: ";
    in >> obj.hoten;

    cout << "Enter age: ";
    in >> obj.tuoi;

    cout << "Enter sport: ";
    in >> obj.monthidau;

    cout << "Enter weight: ";
    in >> obj.cannang;

    cout << "Enter height: ";
    in >> obj.chieucao;

    return in;  // Return the input stream to allow chaining
}

ostream& operator<<(ostream& out, const vdv& obj) {
    out << "Name: " << obj.hoten << "\n"
        << "Age: " << obj.tuoi << "\n"
        << "Sport: " << obj.monthidau << "\n"
        << "Weight: " << obj.cannang << "\n"
        << "Height: " << obj.chieucao << "\n";
    return out;  // Return the output stream to allow chaining
}
// Overloading the > operator to compare two vdv objects
bool vdv::operator>(const vdv& src) const {
    if (this->chieucao > src.chieucao)
    {
        return this->chieucao > src.chieucao;
    }
    else if (this->chieucao == src.chieucao)
    {
        return this->cannang > src.cannang;
    }
    return false;
}

int main() {
    vdv athlete1, athlete2;

    cout << "Enter details for Athlete 1:\n";
    cin >> athlete1;

    cout << "Enter details for Athlete 2:\n";
    cin >> athlete2;

    cout << "\nDetails of Athlete 1:\n" << athlete1;
    cout << "\nDetails of Athlete 2:\n" << athlete2;

    if (athlete1 > athlete2) {
        cout << "Athlete 1 is taller or heavier than Athlete 2.\n";
    } else {
        cout << "Athlete 2 is taller or heavier than Athlete 1.\n";
    }

    return 0;
}