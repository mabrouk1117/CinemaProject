//
// Created by momen on 8/31/2024.
//

#include "Seat.h"
#include <iostream>

using namespace std;


string RegularSeat::getSeatType() const {
    return "Regular";
}

string VIPSeat::getSeatType() const {
    return "VIP";
}

void RegularSeat::getDetails() {
    cout << "Regular Seat Number(" << this->getSeatNumber()<<")   ";
}

void VIPSeat::getDetails() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
    cout << "VIP Seat Number(" << this->getSeatNumber()<<")       ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), White);

}