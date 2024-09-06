//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_USER_H
#define CINEMAPROJECT_USER_H

#include <bits/stdc++.h>
using namespace std;

class User {

    string name ,mail, phone;
public:
    User(string name , string mail, string phone){
        this->name = name;
        this->mail = mail;
        this->phone = phone;
    }
    string getName(){
        return name;
    }
    string getMail(){
        return mail;
    }string getPhone(){
        return phone;
    }

};


#endif //CINEMAPROJECT_USER_H
