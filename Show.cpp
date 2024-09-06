//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_SHOW_H
#define CINEMAPROJECT_SHOW_H

#include "Hall.h"
#include "Seat.h"


#include <bits/stdc++.h>
using namespace std;

class Show {
    int id;
    Hall hall;
    string date;
    string time;
    vector<pair<Seat* , bool>>seats;
    double price;
public:
    double getPrice() const;

    void setPrice(double price);

    static int cnt;
    Show(){}
    int getId() const;

    void setId(int id);

    const Hall &getHall() const;

    void setHall(const Hall &hall);

    const string &getDate() const;

    void setDate(const string &date);

    const string &getTime() const;

    void setTime(const string &time);

    vector<pair<Seat*, bool>> &getSeats() ;

    void setSeats(const vector<pair<Seat*, bool>> &seats);

    bool bookSeat(Seat seat) ;
public:
    Show(Hall& h, string d , string t, double );
};


#endif //CINEMAPROJECT_SHOW_H