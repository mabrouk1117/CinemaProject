//
// Created by momen on 8/31/2024.
//

#ifndef CINEMAPROJECT_CINEMAMANAGER_H
#define CINEMAPROJECT_CINEMAMANAGER_H

#include "Cinema.h"
#include "Movie.h"

class CinemaManager {
    Cinema* cinema ;
public:
    CinemaManager();
    void showMovies() ;
    void showShows(Movie movie);
    void showSeats(Show show) ;
};


#endif //CINEMAPROJECT_CINEMAMANAGER_H