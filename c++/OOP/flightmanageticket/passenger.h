#include <iostream>
#include <string>
#include "human.cpp"
#include "ticket.cpp"

using namespace std;
class Passenger: public Human {
private:
    Ticket *ticket;
    unsigned int numberOfTickets;

public:
    Passenger();
    ~Passenger();
    void input();
    void output() const;
    float getTotalPrice() const;
};