//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_SEAT_H
#define CINEMAPROJECT_SEAT_H
#include <string>
#include <iostream>
//#include <windows.h>
using namespace std;
const int RED = 12 ;
const int White = 7 ;

class Seat {
    double price;
    int seatNumber;
public:
    Seat(){}
    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        Seat::price = price;
    }

    int getSeatNumber() const {
        return seatNumber;
    }

    void setSeatNumber(int seatNumber) {
        Seat::seatNumber = seatNumber;
    }

    virtual void getDetails() {}

    virtual string getSeatType() {};

    Seat(double price, int seatNumber) : price(price), seatNumber(seatNumber){}
};

class RegularSeat : public Seat{
public:
    RegularSeat(double price, int seatNumber) : Seat(price, seatNumber){}
    void getDetails() override;
    string getSeatType() const;
};

class VIPSeat : public Seat{
public:
    VIPSeat(double price, int seatNumber) : Seat(price, seatNumber){}
    void getDetails() override;
    string getSeatType() const;
};

#endif //CINEMAPROJECT_SEAT_H