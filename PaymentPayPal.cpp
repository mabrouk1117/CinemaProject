#include "PaymentPayPal.h"

bool PaymentPayPal::pay(double amount) {
    cout << "Processing PayPal payment of $" << amount << " using email: " << email << endl;
    return true;
}