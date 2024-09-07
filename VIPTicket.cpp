//
// Created by momen on 9/6/2024.
//

#include "VIPTicket.h"

#include <utility>

VIPTicket::VIPTicket( Show show, Seat* seat, double cost, string food, string color): Ticket(std::move(show), std::move(seat), cost){
    this->food = food;
    this->color = color;
}

const string &VIPTicket::getFood() const {
    return food;
}

void VIPTicket::setFood(const string &food) {
    VIPTicket::food = food;
}

const string &VIPTicket::getColor() const {
    return color;
}

void VIPTicket::setColor(const string &color) {
    VIPTicket::color = color;
}
