#include "ticket.h"

void Ticket::input() {
    cout << "Enter ticket name: ";
    cin >> name;
    
    cout << "Enter ticket price: ";
    cin >> price;
    
    cout << "Enter ticket date: ";
    cin >> date;
}
void Ticket::output() const {
    cout << "Ticket Name: " << name << endl;
    cout << "Ticket Price: " << price << endl;
    cout << "Ticket Date: " << date << endl;
}
float Ticket::getPrice() const {
    return price;
}