/* 
 * File:   main.cpp
 * Author: WeikangDu
 *
 * Created on September 25, 2016, 12:12 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    //Declaration variables
    float gHold, mDriven, MPG; //The number of gallons of gas car can hold,
                               //The miles car can be driven on a full tank,
                               //The consumption of gasoline of the car.
    
    
    //Input values
    cout<<"How many gallons of gasoline your car can hold? \n";
    cin>>gHold;
    
    cout<<"How many miles you can drive on a full tank? \n";
    cin>>mDriven;
    
    MPG = mDriven / gHold; //distance can be driven divide gasoline hold
    
    //Display the output
    cout<<"Your car can hold "<<gHold<<" gallons of gasoline"<<endl;
    cout<<"Your car can be driven "<<mDriven<<" miles on a full tank"<<endl;
    cout<<"The gasoline consumption of you car is "<<setprecision(2)<<fixed
            <<MPG<<" miles per gallon\n";
    
    
    return 0;
}

