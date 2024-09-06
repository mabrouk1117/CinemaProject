#ifndef CINEMAPROJECT_USER_H
#define CINEMAPROJECT_USER_H

#include <iostream>
#include <vector>
#include "Payment.h"
#include "Ticket.h"

class User {
private:
    string name, mail, phone;
    vector<Payment*> paymentMethods;
    vector<Ticket*> tickets;

public:
    User(const string& name, const string& mail, const string& phone);

    string getName() const;
    string getMail() const;
    string getPhone() const;
    Payment* getPaymentMethod();
    vector<Payment*> getPaymentMethods();
    vector<Ticket*> getTickets();

    void addPaymentMethod(Payment* paymentMethod);
    void addTicket(Ticket* ticket);

    ~User();
};

#endif // CINEMAPROJECT_USER_H
