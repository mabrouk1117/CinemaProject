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

void Cinema::setUsers(const vector<User> &users) {
    Cinema::users = users;
}

void Cinema::setShows(const vector<Show> &shows) {
    Cinema::shows = shows;
}

void Cinema::setMovies(const vector<Movie> &movies) {
    Cinema::movies = movies;
}

void Cinema::setHalls(const vector<Hall> &halls) {
    Cinema::halls = halls;
}

Movie Cinema::getMovieById(int id) {
    for(auto movie : movies){
        if(movie.getId() == id)
            return movie;
    }
}

Show &Cinema::getShowById(int id) {
    for(auto &show : shows){
        if(show.getId() == id)
            return show;
    }
}

Cinema::Cinema() {

}
