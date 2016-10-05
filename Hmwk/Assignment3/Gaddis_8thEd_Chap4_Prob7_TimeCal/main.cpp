
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 2, 2016, 5:00 PM
 * Purpose: Calculate for time
 */

#include <iostream>

using namespace std;

//User Libraries

//Constants
const int SECOND_PER_MINUTE=60; // 60 seconds equal to one minute
const int SECOND_PER_HOUR=3600; // 3600 seconds equal to one hour
const int SECOND_PER_DAY=86400; // 86400 seconds equal to one day

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declaration Variables
    int sec, min, hour, day;
    
    //Input
    cout<<"Enter a number in second.\n";
    cin>>sec;
    //Process
    
    //Determine
    if (sec>=SECOND_PER_DAY){
        day=sec/SECOND_PER_DAY; //How many days in that many seconds
        cout<<day<<" days in "<<sec<<" seconds";
    }
        
    else if (sec>=SECOND_PER_HOUR){
        hour=sec/SECOND_PER_HOUR; //How many hours in that many seconds
        cout<<hour<<" hours in "<<sec<<" seconds";
    }
        
    else if (sec>=0){
        min=sec/SECOND_PER_MINUTE; //How many minutes in that many seconds
        cout<<min<<" minutes in "<<sec<<" seconds";
    }
        
    else
        cout<<"You should enter in a positive number for second.\n";
    
    return 0;
}

