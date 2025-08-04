#ifndef TICKET_H
#define TICKET_H

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
    virtual ~Ticket();
    
    void input();
    void output() const;
    float getPrice() const;
};

#endif // TICKET_H