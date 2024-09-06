//
// Created by momen on 8/31/2024.
//
#include "User.h"

User::User(const string& name, const string& mail, const string& phone) 
    : name(name), mail(mail), phone(phone) {}

string User::getName() const {
    return name;
}

string User::getMail() const {
    return mail;
}

string User::getPhone() const {
    return phone;
}

vector<Payment*> User::getPaymentMethods(){
    return paymentMethods;
}
vector<Ticket*> User::getTickets(){
    return tickets;
}

Payment* User::getPaymentMethod(){
    if (!paymentMethods.empty()) {
        return paymentMethods[0];
    }
    throw ("No payment methods found !");
}

void User::addPaymentMethod(Payment* paymentMethod) {
    if (paymentMethod != nullptr) {
        paymentMethods.push_back(paymentMethod);
        cout << "Payment method added successfully.\n";
    } else {
        cout << "Invalid payment method!\n";
    }
}

void User::addTicket(Ticket* ticket) {
    if (ticket != nullptr) {
        tickets.push_back(ticket);
        cout << "Ticket added successfully.\n";
    } else {
        cout << "Invalid ticket!\n";
    }
}

User::~User() {}