//
// Created by momen on 8/31/2024.
//

#include "Movie.h"

Movie::Movie(const std::string &name, const std::string &genre, double rating, int id) : name(name), genre(genre),
                                                                                 rating(rating), id(id) {}

const std::string &Movie::getName() const {
    return name;
}

void Movie::setName(const std::string &name) {
    Movie::name = name;
}

const std::string &Movie::getGenre() const {
    return genre;
}

void Movie::setGenre(const std::string &genre) {
    Movie::genre = genre;
}

double Movie::getRating() const {
    return rating;
}

void Movie::setRating(double rating) {
    Movie::rating = rating;
}

const vector<Show> &Movie::getShows() const {
    return shows;
}

void Movie::addShow(Show s) {
    Movie::shows.push_back(s) ;
}

int Movie::getId() const {
    return id;
}

void Movie::setId(int id) {
    this->id = id;
}

Show Movie::getShow(int ShowId) {
    for (auto show: shows)
        if (ShowId == show.getId())
            return show;
    throw std::invalid_argument("Show not found");
    return Show();
}
