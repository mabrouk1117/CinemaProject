//
// Created by momen on 8/31/2024.
//

#include "Cinema.h"

Cinema* Cinema::myCinema = nullptr;

const vector<Hall> &Cinema::getHalls() const {
    return halls;
}

void Cinema::addHalls(Hall& hall){
    halls.push_back(hall) ;
}

const vector<User> &Cinema::getUsers() const {
    return users;
}

void Cinema::addUser(User &user){
    users.push_back(user);
}

const vector<Show> &Cinema::getShows() const {
    return shows;
}

void Cinema::addShow(Show& show){
    shows.push_back(show) ;
}

const vector<Movie> &Cinema::getMovies() const {
    return movies;
}

void Cinema::addMovie(Movie& movie){
    movies.push_back(movie) ;
}

Cinema::Cinema() {

}
