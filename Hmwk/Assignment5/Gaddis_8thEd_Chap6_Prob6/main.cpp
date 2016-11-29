/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 11, 2016, 5:22 PM
 * Purpose: 
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes
float kineticEnergy(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration the variables
    float m, v, KE;//mass in kilorgram, velocity in m/s, kinetic energy.
    //Input Value
    cout<<"Please enter in a number for mass in kg: ";
    cin>>m;
    cout<<"Please enter in a number for velocity in m/s: ";
    cin>>v;
    //Process
    KE=kineticEnergy(m,v);
    //Output
    cout<<"The kinetic Energy is "<<KE<<endl;
    return 0;
}

//***********************************************************
//This kineticEnergy function accept mass and velocity      *
//as argument, then return the kinetic energy               *
//***********************************************************
float kineticEnergy(float m, float v){
    return 1.0/2.0*m*v*v;
}