//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_HALL_H
#define CINEMAPROJECT_HALL_H
#include <vector>
#include "Seat.h"

class Hall {
public:
    int getHallNumber() const;

    void setHallNumber(int hallNumber);

    double getPrice() const;

    void setPrice(double price);

    const vector<Seat> &getSeats() const;

    int getColumnsNum() const;

    void setColumnsNum(int columnsNum);

    void setSeats(const vector<Seat> &seats);

private:
    int hallNumber;
    double price;
    int columnsNum;
    std::vector<Seat> seats;
public:
    Hall(){}
    Hall(const std::vector<Seat> &seats, int hallNumber, double price, int );

};


#endif //CINEMAPROJECT_HALL_H
