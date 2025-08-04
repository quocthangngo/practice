#include "passenger.h"
#include "human.h"
#include "ticket.h"

Passenger::~Passenger() {
    delete[] ticket;
}
Passenger::Passenger() {
}
void Passenger::input() {
    Human::input();
    cout << "Enter number of tickets: ";
    cin >> numberOfTickets;

    if (numberOfTickets > 0) {
        ticket = new Ticket[numberOfTickets];
        for (unsigned int i = 0; i < numberOfTickets; ++i) {
            cout << "Input details for ticket " << (i + 1) << ":" << endl;
            ticket[i].input();
        }
    } else {
        ticket = nullptr;
    }
}
void Passenger::output() const {
    Human::output();
    cout << "Number of tickets: " << numberOfTickets << endl;
    if (ticket) {
        for (unsigned int i = 0; i < numberOfTickets; ++i) {
            cout << "Details for ticket " << (i + 1) << ":" << endl;
            ticket[i].output();
        }
    } else {
        cout << "No tickets purchased." << endl;
    }
}
float Passenger::getTotalPrice() const {
    float totalPrice = 0.0f;
    if (ticket) {
        for (unsigned int i = 0; i < numberOfTickets; ++i) {
            totalPrice += ticket[i].getPrice();
        }
    }
    return totalPrice;
}