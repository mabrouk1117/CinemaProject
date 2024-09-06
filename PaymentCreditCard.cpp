#include "PaymentCreditCard.h"

bool PaymentCreditCard::pay(double amount) {
    cout << "Processing credit card payment of $" << amount << " using card number: " << cardNumber << endl;
    return true;
}