//
// Created by momen on 9/6/2024.
//

#ifndef CINEMAPROJECT_VIPTICKET_H
#define CINEMAPROJECT_VIPTICKET_H

#include "Ticket.h"

class VIPTicket : public Ticket{
public:
    const string &getFood() const;

    void setFood(const string &food);

    const string &getColor() const;

    void setColor(const string &color);

private:
    string food;
    string color;
public:
    VIPTicket(Show show, Seat seat, double cost, string food, string color);
};


#endif //CINEMAPROJECT_VIPTICKET_H
