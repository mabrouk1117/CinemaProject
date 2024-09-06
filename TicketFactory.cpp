//
// Created by momen on 9/6/2024.
//

#include "TicketFactory.h"

Ticket TicketFactory::createTicket(Show show, VIPSeat seat) {
    double price = show.getPrice() + seat.getPrice();
    string food;
    string color;
    cout<<"Enter any food you want to order, if you don't want to order any, enter 0: ";
    cin>>food;
    cout<<"enter the color you want the Ticket to be at: ";
    return VIPTicket(show, seat, price, food, color);
}

Ticket TicketFactory::createTicket(Show show, RegularSeat seat) {
    double price = show.getPrice() + seat.getPrice();
    return Ticket(show, seat, price);
}
