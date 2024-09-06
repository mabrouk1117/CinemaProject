//
// Created by momen on 8/31/2024.
//

#include "Seat.h"
#include <iostream>
using namespace std;

void RegularSeat::getDetails() {
    cout << "Regular Seat - Number: " << this->getSeatNumber() 
         << ", Price: " << this->getPrice() << endl;
}

void VIPSeat::getDetails() {
    cout << "VIP Seat - Number: " << this->getSeatNumber() 
         << ", Price: " << this->getPrice() << endl;
}