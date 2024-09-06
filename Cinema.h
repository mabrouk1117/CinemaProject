//
// Created by salah on 8/31/2024.
//

#ifndef CINEMAPROJECT_CINEMA_H
#define CINEMAPROJECT_CINEMA_H

#include "Show.h"
#include "Movie.h"
#include "Hall.h"
#include "User.h"
#include <vector>

using namespace std;

class Cinema {
public:
    const vector<User> &getUsers() const;

    void addUser(User &user);

    const vector<Show> &getShows() const;

    void addShow(Show& show);

    const vector<Movie> &getMovies() const;

    void addMovie(Movie& movie);

    const vector<Hall> &getHalls() const;

    void setUsers(const vector<User> &users);

    void setShows(const vector<Show> &shows);

    void setMovies(const vector<Movie> &movies);

    void setHalls(const vector<Hall> &halls);


    void addHalls(Hall& hall);
    static Cinema* getInstance(){
        if (myCinema == nullptr)
            myCinema = new Cinema() ;
        return myCinema;
    }
private:
    std::vector<User> users;
    std::vector<Hall> halls;
    std::vector<Show> shows;
    std::vector<Movie> movies;
    static Cinema *myCinema ;
    Cinema() ;
    ~Cinema() ;
};


#endif //CINEMAPROJECT_CINEMA_H
