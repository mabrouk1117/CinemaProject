#ifndef CINEMAPROJECT_PAYMENT_H
#define CINEMAPROJECT_PAYMENT_H

#include <bits/stdc++.h>
using namespace std;

class Payment {
public:
    virtual ~Payment() {}

    virtual void pay(double amount);
};

#endif //CINEMAPROJECT_PAYMENT_H