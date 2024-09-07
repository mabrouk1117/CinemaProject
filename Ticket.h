//
// Created by momen on 9/6/2024.
//

#ifndef CINEMAPROJECT_TICKET_H
#define CINEMAPROJECT_TICKET_H

#include "Seat.h"
#include "Show.h"

class Ticket {
private:
    Show myShow;
    Seat* mySeat;
    double price;
public:
    Ticket(Show, Seat*, double);

    const Show &getMyShow() const;

    void setMyShow(const Show &myShow);

    const Seat &getMySeat() const;

    void setMySeat(Seat* mySeat);

    double getPrice() const;

    void setPrice(double price);
};


#endif //CINEMAPROJECT_TICKET_H
