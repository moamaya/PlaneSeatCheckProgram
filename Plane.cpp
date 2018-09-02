//
//  Plane.cpp
//  Project3
//
//  Created by Marlo Amaya on 10/3/17.
//  Copyright © 2017 Marlo Amaya. All rights reserved.
//

#include "Plane.h"
#include <iostream>

using namespace std;

int Plane::getfirstClassCols(){
    return firstClassCols;
};

int Plane::getfirstClassRows(){
    return firstClassRows;
};
int Plane::geteconCols(){
    return econCols;
};
int Plane::geteconRows(){
    return econRows;
};

Plane::Plane ()
{
    cout << "\nEnter the number of rows for first class: \n";
    cin >> firstClassRows;
    cout << "\nEnter the number of columns for first class: \n";
    cin >> firstClassCols;
    cout << "\nEnter the number of rows for economy: \n";
    cin >> econRows;
    cout << "\nEnter the number of columns for economy: \n";
    cin >> econCols;
    
    firstClass = new char*[getfirstClassRows()+1];
    
    for (int i = 0; i < getfirstClassRows(); ++i) {
        firstClass[i] = new char[getfirstClassCols()+1];
    }
    
    economy = new char*[geteconRows()+1];
    
    for (int i = 0; i < geteconRows(); ++i) {
        economy[i] = new char[geteconCols()+1];
    }
    
    for (int i=0; i<getfirstClassRows();i++){
        for (int j=0; j<getfirstClassCols();j++){
            firstClass[i][j] = '-';
        }
    }
    
    for (int i=0; i<geteconRows();i++){
        for (int j=0; j<geteconCols();j++){
            economy[i][j] = '-';
        }
    }
    
};

Plane::Plane(int a, int b, int c, int d){
    firstClassRows = a;
    firstClassCols = b;
    econRows = c;
    econCols = d;
    
    firstClass = new char*[a];
    
    for (int i = 0; i < a; ++i) {
        firstClass[i] = new char[b];
    }
    
    economy = new char*[c];
    
    for (int i = 0; i < c; ++i) {
        economy[i] = new char[d];
    }
    
    for (int i=0; i<a;i++){
        for (int j=0; j<b;j++){
            firstClass[i][j] = '-';
        }
    }
    
    for (int i=0; i<c;i++){
        for (int j=0; j<d;j++){
            economy[i][j] = '-';
        }
    }
};

void Plane::displaySeats(){
    cout << "Seating Map for First Class\n";
    for (int i=0; i<getfirstClassRows(); i++) {
        for (int j =0; j<getfirstClassRows(); j++){
                cout << firstClass[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Seating Map for Economy Class\n";
    for (int i=0; i<econRows; i++) {
        for (int j =0; j<econRows; j++){
                cout << economy[i][j] << " ";
        }
        cout << "\n";
    }
};

void Plane::bookSeat(){
    int section;
    cout << "\nIn which section would you like to book a seat?\n Enter '1' for First Class or '2' for Economy:\n";
    cin >> section;
    
    switch (section)
    {    case 1:
            section = 1;
            int row;
            cout << "\nEnter the row of seat you would like to book:\n";
            cin >> row;
            if (row>getfirstClassRows() || row < 0){
                cout << "\nPlease enter a correct row size. Try again\n";
                break;
            }
            
            int col;
            cout << "\nEnter the column of seat you would like to book:\n";
            cin >> col;
            if (col>getfirstClassCols() || col < 0){
                cout << "\nPlease enter a correct column size. Try again\n";
                break;
            }
            
            if (firstClass[row-1][col-1] == 'x')
                cout << "\nSeat is taken\n";
            else
                firstClass[row-1][col-1] = 'x';
                cout << "\nYour seat is now reserved\n";
            break;
            
        case 2:
            section = 2;
            int row2;
            cout << "\nEnter the row of seat you would like to book:\n";
            cin >> row2;
            if (row2>geteconRows() || row2 < 0){
                cout << "\nPlease enter a correct row size. Try again\n";
                break;
            }
            
            int col2;
            cout << "\nEnter the column of seat you would like to book:\n";
            cin >> col2;
            if (col2>geteconCols() || col2 < 0){
                cout << "\nPlease enter a correct column size. Try again\n";
                break;
            }
            
            if (economy[row2-1][col2-1] == 'x')
                cout << "\nSeat is taken\n";
            else
                economy[row2-1][col2-1] = 'x';
                cout << "\nYour seat is now reserved\n";
            break;
            
        default:
            cout << "*** Invalid Entry ***\n";
            break;
    }
};

void Plane::checkSeat() {
    int section;
    cout << "\nIn which section would you like to check a seat?\n Enter '1' for First Class or '2' for Economy:\n";
    cin >> section;
    
    switch (section)
    {    case 1:
            section = 1;
            int row;
            cout << "\nEnter the row of seat you would like to check:\n";
            cin >> row;
            if (row>getfirstClassRows() || row < 0){
                cout << "\nPlease enter a correct row size. Try again\n";
                break;
            }
            
            int col;
            cout << "\nEnter the column of seat you would like to check:\n";
            cin >> col;
            if (col>getfirstClassCols() || col < 0){
                cout << "\nPlease enter a correct column size. Try again\n";
                break;
            }
            
            if (firstClass[row-1][col-1] == 'x')
                cout << "\nSeat is taken\n";
            else
                cout << "\nSeat is available\n";
            break;
            
        case 2:
            section = 2;
            int row2;
            cout << "\nEnter the row of seat you would like to check:\n";
            cin >> row2;
            if (row2>geteconRows() || row2 < 0){
                cout << "\nPlease enter a correct row size. Try again\n";
                break;
            }
            
            int col2;
            cout << "\nEnter the column of seat you would like to check:\n";
            cin >> col2;
            if (col2>geteconCols() || col2 < 0){
                cout << "\nPlease enter a correct column size. Try again\n";
                break;
            }
            
            if (economy[row2-1][col2-1] == 'x')
                cout << "\nSeat is taken\n";
            else
                cout << "\nSeat is available\n";
            break;
            
        default:
            cout << "*** Invalid Entry ***\n";
            break;
    
    }
};

void Plane::clearSeat() {
    int section;
    cout << "\nIn which section would you like to clear a seat?\n Enter '1' for First Class or '2' for Economy:\n";
    cin >> section;
    
    switch (section)
    {    case 1:
            section = 1;
            int row;
            cout << "\nEnter the row of seat you would like to clear:\n";
            cin >> row;
            if (row>getfirstClassRows() || row < 0){
                cout << "\nPlease enter a correct row size. Try again\n";
                break;
            }
            
            int col;
            cout << "\nEnter the column of seat you would like to clear:\n";
            cin >> col;
            if (col>getfirstClassCols() || col < 0){
                cout << "\nPlease enter a correct column size. Try again\n";
                break;
            }
            
            firstClass[row-1][col-1] = '-';
            cout << "\nSeat is now cleared\n";
            break;
            
        case 2:
            section = 2;
            int row2;
            cout << "\nEnter the row of seat you would like to clear:\n";
            cin >> row2;
            if (row2>geteconRows() || row2 < 0){
                cout << "\nPlease enter a correct row size. Try again\n";
                break;
            }
            
            int col2;
            cout << "\nEnter the column of seat you would like to clear:\n";
            cin >> col2;
            if (col2>geteconCols() || col2 < 0){
                cout << "\nPlease enter a correct column size. Try again\n";
                break;
            }
            
            economy[row2-1][col2-1] = '-';
            cout << "\nSeat is now cleared\n";
            break;
            
        default:
            cout << "*** Invalid Entry ***\n";
            break;
            
    }
};

void Plane::clearAllSeats() {
    int ans;
    cout << "\nAre you sure you want to clear all seats?\n Enter '1' for Yes or '2' for No \n";
    cin >> ans;
    
    switch (ans)
    {    case 1:
            ans = 1;
            for (int i=0; i< getfirstClassRows(); i++){
                for (int j=0; j< getfirstClassCols(); j++){
                    firstClass[i][j] = '-';
                }
            }
            
            for (int i=0; i< geteconRows(); i++){
                for (int j=0; j< geteconCols(); j++){
                    economy[i][j] = '-';
                }
            }
            
            cout << "\nSeats are all clear\n";
            
            break;
            
        case 2:
            ans = 2;
            break;
            
        default:
            cout << "*** Invalid answer ***\n";
            break;
    }
};

Plane::~Plane (){
    if (firstClass != NULL) {
        for (int row = 0; row < getfirstClassRows()+1; row++) {
            delete[]firstClass[row];
        }
        delete [] firstClass;
    }
    firstClass = NULL;
    
    if (economy != NULL) {
        for (int row = 0; row < geteconRows()+1; row++) {
            delete[]economy[row];
        }
        delete [] economy;
    }
    economy = NULL;
};




    
    
