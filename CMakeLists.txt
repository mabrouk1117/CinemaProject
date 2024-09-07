cmake_minimum_required(VERSION 3.23.2)
project(CinemaProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CinemaProject
        Authentication.cpp
        Authentication.h
        Cinema.cpp
        Cinema.h
        CinemaManager.cpp
        CinemaManager.h
        Hall.cpp
        Hall.h
        main.cpp
        Movie.cpp
        Movie.h
        Payment.h
        PaymentCreditCard.cpp
        PaymentCreditCard.h
        PaymentPayPal.cpp
        PaymentPayPal.h
        Seat.cpp
        Seat.h
        Show.cpp
        Show.h
        Ticket.cpp
        Ticket.h
        TicketFactory.cpp
        TicketFactory.h
        User.cpp
        User.h
        VIPTicket.cpp
        VIPTicket.h)
