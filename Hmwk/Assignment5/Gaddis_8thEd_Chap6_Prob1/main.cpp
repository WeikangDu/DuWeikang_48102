
/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 7, 2016, 6:56 PM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes
float calculateRetail(float, float);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration Variables 
    float wholeC, perc, retail; //an item’s wholesale cost and its markup percentage.
    //Input Value
    cout<<"Please enter a number for the item's wholesale cost: $ ";
    cin>>wholeC;
    while(wholeC<0){
        cout<<"The item's wholesale cost can not be negative, re-enter: $ ";
        cin>>wholeC;
    }
    cout<<"Please enter a number for its markup percentage: % ";
    cin>>perc;
    while(perc<0){
        cout<<"The markup percentage can not be negative, re-enter: % ";
        cin>>perc;       
    }
    //Process
    retail=calculateRetail(wholeC,perc);
    //Display output
    cout<<"The item's wholesale cost is "<<wholeC<<" $"<<endl;
    cout<<"The markup percentage is "<<perc<<" %"<<endl;
    cout<<"The retail price is "<<retail<<" $"<<endl;

    return 0;
}

// **************************************************************
// The calculateRetail function receives the wholesale          *
// cost and the markup percentage                               *
// returns the retail price of the item.                        *
// **************************************************************

float calculateRetail(float sale, float p){
    return sale+sale*p/100.0;
}

