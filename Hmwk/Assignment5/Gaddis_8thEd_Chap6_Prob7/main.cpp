/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on Nov 10, 2016, 11.18 AM
 * Purpose:  Celsius Temperature Table
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float celsius(float F);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float C;
    //Process/Calculations Here
    cout<<"This program will convert Fahrenheit to Celsius"<<endl;
    cout<<"Fahrenheit temperatures\t\tCelsius equivalents"<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    for(int i=0; i<=20; i++){
        C=celsius(i);
        cout<<"\t"<<i<<"\t\t\t\t"<<C<<endl;
    }
    //Output Located Here

    //Exit
    return 0;
}

float celsius(float F){
    return 5.0/9.0*(F-32);
}
