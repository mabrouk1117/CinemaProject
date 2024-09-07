//
// Created by momen on 9/6/2024.
//

#include "Ticket.h"


Ticket::Ticket(Show show, Seat* seat, double cost) {
    mySeat = seat;
    myShow = show;
    price = cost;
}

const Show &Ticket::getMyShow() const {
    return myShow;
}

void Ticket::setMyShow(const Show &myShow) {
    Ticket::myShow = myShow;
}

const Seat &Ticket::getMySeat() const {
    return *mySeat;
}

void Ticket::setMySeat( Seat *mySeat) {
    Ticket::mySeat = mySeat;
}

double Ticket::getPrice() const {
    return price;
}

void Ticket::setPrice(double price) {
    Ticket::price = price;
}