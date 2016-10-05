
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 2, 2016, 8:26 PM
 * Purpose: Make a Dollar game
 */

#include <iostream>
//User Libraries

//Constants
const float PENNIES=0.01f; // one pennie equal to 0.01$
const float NICKELS=0.05f; // one nickel equal to 0.05$
const float DIMES=0.1f; // one dime equal to 0.1$
const float QUARTERS=0.25f; // one quarter equal to 0.25$

//Function prototypes

//Execution Begins Here!

using namespace std;


int main(int argc, char** argv) {

    //Declaration Variables
    int numP, numN, numD, numQ; // The number of pennies, nickels, dimes and quarters
    float total; //The total amount
    
    //Input
    cout<<"Please enter in the number of Pennies.\n";
    cin>>numP;
    cout<<"Please enter in the number of Nickels.\n";
    cin>>numN;
    cout<<"Please enter in the number of Dimes.\n";
    cin>>numD;
    cout<<"Please enter in the number of Quarters.\n";
    cin>>numQ;
    
    total = numP*PENNIES + numN*NICKELS + numD*DIMES + numQ*QUARTERS;
    //Determine
    if (total == 1)
        cout<<"Congratulations!! You win the game.\n";
    else 
        cout<<"You did not win the game."<<endl;
        if (total > 1)
            cout<<"The amount is more than one dollar.\n";
        else 
            cout<<"The amount is less than one dollar.\n";
    
        //Exit
    
    return 0;
}

