//
// Created by momen on 8/31/2024.
//

#include "Hall.h"

Hall::Hall(const std::vector<Seat*> &seats, int hallNumber, double price, int cols) : seats(seats), hallNumber(hallNumber),
                                                                           price(price), columnsNum(cols) {}

int Hall::getHallNumber() const {
    return hallNumber;
}

void Hall::setHallNumber(int hallNumber) {
    Hall::hallNumber = hallNumber;
}

double Hall::getPrice() const {
    return price;
}

void Hall::setPrice(double price) {
    Hall::price = price;
}

const vector<Seat*> &Hall::getSeats() const {
    return seats;
}

void Hall::setSeats(const vector<Seat*> &seats) {
    Hall::seats = seats;
}

int Hall::getColumnsNum() const {
    return columnsNum;
}

void Hall::setColumnsNum(int columnsNum) {
    Hall::columnsNum = columnsNum;
}