#include "vdv.cpp"
#include <vector>

int main()
{
    // vdv a("Nguyen Van A", 25, "01/01/1998", 70.0, 175);
    // vdv a;
    // cin >> a;
    // cout << a;
    // a.operator<<(a);
    unsigned int number;
    cin >> number;
    vector<vdv> vdvList(number);
    for (unsigned int i = 0; i < number; i++)
    {
        cin >> vdvList[i];
    }
    cout << "List of athletes:\n";
    for (unsigned int i = 0; i < number; i++)
    {
        cout << vdvList[i];
    }
    return 0;
}