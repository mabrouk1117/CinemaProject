//
// Created by momen on 8/31/2024.
//

#include "CinemaManager.h"
#include "TicketFactory.h"

CinemaManager::CinemaManager() {
    cinema = Cinema::getInstance();
}

void CinemaManager::showMovies() {
    cout<<"ID    Name    Genre    Rate\n" ;
    for(auto movie : cinema->getMovies()){
        cout<< movie.getId() << ": "<<movie.getName()<<" "<<movie.getGenre()<<" "<<movie.getRating()<<endl;
    }
    cout << endl;
}

void CinemaManager::showShows(Movie movie) {
    cout<<"Available shows for your movie are:\n";
    cout<<"Show ID     Movie Name      Date    Time\n";
    for(auto show :movie.getShows()){
        cout<< show.getId()<<": " << movie.getName()<<" "<<show.getDate()<<" "<<show.getTime()<<endl;
    }
    cout << endl;
}

void CinemaManager::showSeats(Show show) {
    auto seats = show.getSeats();
    for (int idx = 0; idx < seats.size(); ++idx) {
        if (idx % show.getHall().getColumnsNum() == 0)
            cout<<endl;
        if(!seats[idx].second)
            cout<<"X                        ";
        else{
            seats[idx].first->getDetails();
        }
    }
    cout<<endl;
}

bool CinemaManager::book(User &user) {
    showMovies();
    int movieId;
    cout << "Enter the movie ID you want to book: ";
    cin >> movieId;
    if(movieId < 0){
        cout << "Invalid movie ID\n";
        return false;
    }
    Movie movie = cinema->getMovieById(movieId);
    showShows(movie);
    int showId;
    cout << "Enter the show ID you want to book: ";
    cin >> showId;
    if(showId < 0){
        cout << "Invalid show ID\n";
        return false;
    }
    Show& show = cinema->getShowById(showId);
    showSeats(show);
    int seatId;
    cout << "Enter the seat ID you want to book: ";
    cin >> seatId;
    if(show.isBooked(seatId)){
        cout << "Seat is already booked\n";
        return false;
    }

    if(user.getPaymentMethods().empty()){
        cout << "You need to add a payment method first\n";
        return false;
    }
    Seat* mySeat = show.getSeat(seatId);
    Ticket* ticket = TicketFactory::createTicket(show, mySeat);
    if(!user.getPaymentMethods()[0]->pay(ticket->getPrice())){
        cout << "Payment failed\n";
        return false;
    }
    user.addTicket(ticket);
    show.bookSeat(seatId) ;
    cout << "Seat booked successfully\n";
    return true;
}
