//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_AUTHENTICATION_H
#define CINEMAPROJECT_AUTHENTICATION_H

#include "User.h"
#include "Cinema.h"

class Authentication {
    Cinema* cinema ;
public:
    Authentication();
    bool login(User) ;
    void signUp() ;
    bool validateMail(string);
    bool validatePhone(string);
};


#endif //CINEMAPROJECT_AUTHENTICATION_H
