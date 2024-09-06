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

void User::addPaymentMethod(Payment* paymentMethod) {
    paymentMethods.push_back(paymentMethod);
}

User::~User() {
    for (auto paymentMethod : paymentMethods) {
        delete paymentMethod;
    }
}
