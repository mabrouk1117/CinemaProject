//
// Created by momen on 9/6/2024.
//

#ifndef CINEMAPROJECT_TICKETFACTORY_H
#define CINEMAPROJECT_TICKETFACTORY_H

#include "VIPTicket.h"

class TicketFactory {
public:
    static Ticket createTicket(Show sh, Seat* seat);
};

#endif //CINEMAPROJECT_TICKETFACTORY_H
