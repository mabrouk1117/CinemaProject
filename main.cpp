#include <iostream>
#include <string>
#include <vector>
#include "Cinema.h"
#include "User.h"
#include "Show.h"
#include "Movie.h"
#include "Hall.h"
#include "Payment.h"
#include "PaymentCreditCard.h"
#include "PaymentPayPal.h"
#include "Authentication.h"
#include "CinemaManager.h"


using namespace std;

int main()
{
    vector<Seat*> seats;
    Seat* seat1 = new RegularSeat(10.0, 1);
    Seat* seat2 = new RegularSeat(10.0, 2);
    Seat* seat3 = new VIPSeat(20.0, 3);
    Seat* seat4 = new VIPSeat(20.0, 4);
    seats.push_back(seat1);
    seats.push_back(seat2);
    seats.push_back(seat3);
    seats.push_back(seat4);
    
    // vector<Hall> halls;
    // Hall hall1(seats, 1, 30.0, 2);
    // Hall hall2(seats, 2, 40.0, 4);
    // halls.push_back(hall1);
    // halls.push_back(hall2);

    // vector<Show> shows;
    // Show show1(hall1, "2024-08-31", "12:00", 12.5);
    // Show show2(hall2, "2024-08-31", "8:00", 25);


    // vector<Movie> movies;
    // Movie movie1("The Shawshank Redemption", "Drama", 9.3);
    // Movie movie2("The Godfather", "Crime", 9.2);
    // movie1.addShow(show1);
    // movie2.addShow(show2);
    // movies.push_back(movie1);
    // movies.push_back(movie2);

    // // vector<User> users;
    // // User user1("Momen", "Momen@gmail.com", "01129338445");
    // // User user2("Ali", "Ali@gmail.com", "01029308822");
    // // User user3("Tarek", "Tarek@gmail.com", "01521341325");

    // // user1.addPaymentMethod(new PaymentCreditCard("5555-5555-5555-5555"));
    // // user1.addPaymentMethod(new PaymentPayPal("Momencash@gmail.com"));
    // // user2.addPaymentMethod(new PaymentCreditCard("5555-5555-5555-3211"));
    // // user3.addPaymentMethod(new PaymentPayPal("Tarekcash@gmail.com"));
    // // users.push_back(user1);
    // // users.push_back(user2);
    // // users.push_back(user3);

    // Cinema* cinema = Cinema::getInstance();
    // cinema->setHalls(halls);
    // cinema->setMovies(movies);
    // cinema->setShows(shows);
    // // cinema->setUsers(users);

    // CinemaManager cinemaManager;

    // cinemaManager.showMovies();
    return 0;
}