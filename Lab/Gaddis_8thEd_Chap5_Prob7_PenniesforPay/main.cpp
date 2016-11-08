/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on Oct 13, 2016, 11.16 AM
 * Purpose:  Calculate for the salary of each day and total amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PENNY=0.01f; //One penny equal to 0.01 dollar.

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int day; // The number of days the user worked.
    float FirPay; //
    float dayPay; //The amount of pay for user for each day 
    float tot; //The total amount of the user earned.
    
    //Input the Values
    cout<<"This Program will calculate your salary for each day and total\n\n";
    cout<<"Please enter in a number of days you worked."<<endl;
    cin>>day;
    
    //Determine the valid values
    if (day<1)
        cout<<"The number of days can not be less than 1"<<endl;
    else{
        for (count=1;count<=day;count++){
            cout<<"Number of day"<<"\t\t"<<"Amount of earned"<<endl;
            dayPay=PENNY;
        }
    }
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Hello World"<<endl;

    //Exit
    return 0;
}

