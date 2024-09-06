//
// Created by momen on 9/6/2024.
//

#ifndef CINEMAPROJECT_TICKETFACTORY_H
#define CINEMAPROJECT_TICKETFACTORY_H

#include "VIPTicket.h"

class TicketFactory {
public:
    Ticket createTicket(Show sh, VIPSeat st);
    Ticket createTicket(Show sh, RegularSeat st);

};

#endif //CINEMAPROJECT_TICKETFACTORY_H
