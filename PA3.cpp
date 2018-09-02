//
//  PA3.cpp
//  Project3
//
//  Created by Marlo Amaya on 10/3/17.
//  Copyright © 2017 Marlo Amaya. All rights reserved.
//

#include <iostream>
#include "Plane.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Plane COSC1430;
    
    int ans = 0;
    while (ans!=6){
        cout << "\nPick one of these options:\n 1. Display all seats\n 2. Check a seat\n 3. Clear a seat\n 4. Book a seat\n 5. Empty all seats\n 6. Exit\n";
        cin >> ans;
    
        switch (ans)
        {    case 1:
                ans = 1;
                COSC1430.displaySeats();
                break;
            
            case 2:
                ans = 2;
                COSC1430.checkSeat();
                break;
            
            case 3:
                ans = 3;
                COSC1430.clearSeat();
                break;
            
            case 4:
                ans = 4;
                COSC1430.bookSeat();
                break;
            
            case 5:
                ans = 5;
                COSC1430.clearAllSeats();
                break;
            
            case 6:
                COSC1430.~Plane();
                cout << "\nGOODBYE!\n";
                break;
                
            default:
                cout << "*** Invalid Entry ***\n";
                break;
            
        }
    }
    
    return 0;
}

