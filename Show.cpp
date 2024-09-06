//
// Created by momen on 8/31/2024.
//

#include "Show.h"

Show::Show(Hall& h, string d, string t, double DatePrice) {
    hall =h;
    date = d;
    time = t ;
    price = DatePrice + hall.getPrice();
    vector<Seat>st = hall.getSeats();
    for(auto seat : st){    // available
        seats.push_back({seat, true}) ;
    }
    this->id = cnt++;
}

int Show::cnt = 0;

const Hall &Show::getHall() const {
    return hall;
}

void Show::setHall(const Hall &hall) {
    Show::hall = hall;
}

const string &Show::getDate() const {
    return date;
}

void Show::setDate(const string &date) {
    Show::date = date;
}

const string &Show::getTime() const {
    return time;
}

void Show::setTime(const string &time) {
    Show::time = time;
}

 vector<pair<Seat, bool>> &Show::getSeats()  {
    return seats;
}

void Show::setSeats(const vector<pair<Seat, bool>> &seats) {
    Show::seats = seats;
}

bool Show::bookSeat(Seat seat) {
    for(auto st : seats){
        if (st.first.getSeatNumber() == seat.getSeatNumber() ) {
            if (st.second == 0)
                return false;
            st.second = 0;
        }
    }
    return true ;
}

int Show::getId() const {
    return id;
}

void Show::setId(int id) {
    Show::id = id;
}

double Show::getPrice() const {
    return price;
}

void Show::setPrice(double price) {
    Show::price = price;
}
