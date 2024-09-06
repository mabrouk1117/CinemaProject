//
// Created by momen on 8/31/2024.
//

#include "CinemaManager.h"

void CinemaManager::showMovies() {
    cout<<"NAME    Genre    Rate\n" ;
    for(auto movie : cinema->getMovies()){
        cout<<movie.getName()<<" "<<movie.getGenre()<<" "<<movie.getRating()<<endl;
    }
}

CinemaManager::CinemaManager() {
    cinema = Cinema::getInstance();
}

void CinemaManager::showShows(Movie movie) {
    cout<<"Available shows for your movie are:\n";
    cout<<"Movie ID     Movie Name      Date    Time\n";
    for(auto show :movie.getShows()){
        cout<< show.getId()<<" " << movie.getName()<<" "<<show.getDate()<<" "<<show.getTime()<<endl;
    }
}

void CinemaManager::showSeats(Show show) {
    auto seats = show.getSeats();
    for (int idx = 0; idx < seats.size(); ++idx) {
        if (idx % show.getHall().getColumnsNum() == 0)
            cout<<endl;
        if(!seats[idx].second)
            cout<<" X ";
        else{
            Seat seat = seats[idx].first;
            seat.getDetails() ;
        }
    }
}


