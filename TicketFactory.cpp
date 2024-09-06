//
// Created by momen on 9/6/2024.
//

#include "TicketFactory.h"

Ticket TicketFactory::createTicket(Show show, Seat* seat) {
    double price = show.getPrice() + seat->getPrice();
    if(seat->getSeatType() == "VIP"){
        string food;
        string color;
        cout<<"Enter any food you want to order, if you don't want to order any, enter 0: ";
        cin>>food;
        cout<<"enter the color you want the Ticket to be at: ";
        return VIPTicket(show, *seat, price, food, color);
    }
    else if (seat->getSeatType() == "Regular"){
        double price = show.getPrice() + seat->getPrice();
        return Ticket(show, *seat, price);
    }
    else{
        cout<<"Invalid Seat Type"<<endl;
    }
}
