//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_MOVIE_H
#define CINEMAPROJECT_MOVIE_H

#include <bits/stdc++.h>
#include "Show.h"



class Movie {
    int id;
    std::string name;
    std::string genre;
    double rating;
    vector<Show>shows;
public:
    Movie(){}
    Movie(const std::string &name, const std::string &genre, double rating);

    const std::string &getName() const;

    const vector<Show> &getShows() const;

    Show getShow(int ShowId);
    void addShow(Show);

    void setName(const std::string &name);

    const std::string &getGenre() const;

    void setGenre(const std::string &genre);

    double getRating() const;

    void setRating(double rating);

    int getId() const;

    void setId(int id);

};


#endif //CINEMAPROJECT_MOVIE_H
