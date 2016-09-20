/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 3:34 PM
 * Purpose: Calculate for the the number of miles per gallon
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int gallonofgas=15, milesDriven=375; //The car can hold 15 gallons of gasline
                                         //It can travel 375 miles before refueling
    int MPG; //Miles per gallon
    
    MPG=milesDriven / gallonofgas;
    
    //Display
    cout<<"The car has "<<gallonofgas<<" gallon of gasline"<<endl;
    cout<<"The amount of gasline can be drived in "<<milesDriven<<" miles"<<endl;
    cout<<"The oil consumption is "<<MPG<<" miles per hour"<<endl;

    return 0;
}

