#ifndef CINEMAPROJECT_PAYMENT_H
#define CINEMAPROJECT_PAYMENT_H

#include <bits/stdc++.h>
using namespace std;

class Payment {
public:

    virtual bool pay(double amount) = 0;
};

#endif //CINEMAPROJECT_PAYMENT_H