//
// Created by momen on 8/31/2024.
//

#include "Authentication.h"

bool Authentication::login(User u ) {
    for(User user : cinema->getUsers()){
        if (user.getMail() == u.getMail() && user.getPhone() == u.getPhone() )
            return true;
    }
    return false;
}

void Authentication::signUp() {
    string email , phone, name;
    cin>>name>>email>>phone;
    if (validateMail(email) && validateMail(phone) ){
        User newUser = User(name, email, phone);
        if (!login(newUser)) {
            cinema->addUser(newUser);
            return;
        }
    }
    cout<<"INVALID DATA\n";
}

bool Authentication::validateMail(string) {
    return true;
}

bool Authentication::validatePhone(string) {
    return true;
}

Authentication::Authentication() {
    cinema = Cinema::getInstance();
}
