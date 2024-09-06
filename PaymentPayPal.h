#ifndef CINEMAPROJECT_PAYMENTPAYPAL_H
#define CINEMAPROJECT_PAYMENTPAYPAL_H

#include "Payment.h"

// Derived class representing PayPal payment method
class PaymentPayPal : public Payment {
private:
    string email;
public:
    PaymentPayPal(const string& emailAddress) : email(emailAddress) {}

    bool pay(double amount) override;

    string getEmail() const {
        return email;
    }
};

#endif // CINEMAPROJECT_PAYMENTPAYPAL_H