//
//  Plane.hpp
//  Project3
//
//  Created by Marlo Amaya on 10/3/17.
//  Copyright © 2017 Marlo Amaya. All rights reserved.
//

#ifndef Plane_hpp
#define Plane_hpp

#include <stdio.h>

#endif /* Plane_hpp */

struct seat
{
    char status;  //(‘-’ if the seat is empty, ‘x’ if the seat is booked)
    bool isBooked;  //(true if seat is booked, false if available)

};



class Plane
{
private:
    int firstClassRows, firstClassCols, econRows, econCols;
    char ** firstClass;
    char ** economy;
    
public:
    Plane();
    Plane(int rowsF, int colsF, int rowsE, int colsE);
    void displaySeats();
    void bookSeat();
    void checkSeat();
    void clearSeat();
    void clearAllSeats();
    ~Plane();
    
    //Getters and setters
    int getfirstClassRows();
    int getfirstClassCols();
    int geteconRows();
    int geteconCols();
    
};



