#include <iostream>
#include <string>

using namespace std;
class Ticket {
private:
    string name;
    float price;
    string date;
public:
    Ticket();
    // Passenger(string name, float price, string date);
    ~Ticket();
    
    void input();
    void output() const;
    float getPrice() const;
};