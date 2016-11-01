/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on Oct 14, 2016, 15.50 PM
 * Purpose:  Calculate for the salary of each day and total amount
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PENNY=0.01f; //One penny equal to 0.01 dollar.

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int days; // The number of days the user worked.
    int day; //For the counter
    float dayPay; //The amount of pay for user for each day 
    float tot=0; //The total amount of the user earned.
    
    //Input the Values
    cout<<"This Program will calculate your salary for each day and total\n\n";
    cout<<"Please enter in a number of days you worked."<<endl;
    cin>>days; //Ask for input
    
    //Determine the valid values and output
    while (days<1){
        cout<<"The number of days can not be less than 1, re-enter:"<<endl;
        cin>>days;
    }
    for(day=1;day<=days;day++)
    {
        cout<<"Number of day"<<"\t\t"<<"Amount of earned"<<endl;
        dayPay=PENNY*pow(2,day-1);
        cout<<day<<"\t\t\t\t"<<dayPay<<endl;
        tot+=dayPay;
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"The total amount is "<<tot<<" dollars"<<endl;
    }
    

    //Exit
    return 0;
}