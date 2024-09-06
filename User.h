#ifndef CINEMAPROJECT_USER_H
#define CINEMAPROJECT_USER_H

#include <iostream>
#include <vector>
#include "Payment.h"

class User {
private:
    string name, mail, phone;
    vector<Payment*> paymentMethods;

public:
    User(const string& name, const string& mail, const string& phone);

    string getName() const;
    string getMail() const;
    string getPhone() const;
    Payment* getPaymentMethod();
    vector<Payment*> getPaymentMethods();

    void addPaymentMethod(Payment* paymentMethod);

    ~User();
};

#endif // CINEMAPROJECT_USER_H
