#ifndef CINEMANPROJECT_PAYMENTCREDITCARD_H
#define CINEMANPROJECT_PAYMENTCREDITCARD_H

#include "Payment.h"

class PaymentCreditCard : public Payment {
private:
    string cardNumber;

public:
    PaymentCreditCard(const string& cardNum) : cardNumber(cardNum) {}

    bool pay(double amount) override;
};

#endif // CINEMANPROJECT_PAYMENTCREDITCARD_H