
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 2, 2016, 4:14 PM
 * Purpose: Determine whether the date is magic or not
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int month, day, year;
    int prod;
    //Input values
    cout<<"---------------------------------------------------\n";
    cout<<"This program will determine "<<endl;
    cout<<"whether the date you enter in is magic date or not.\n";
    cout<<"---------------------------------------------------\n";
    cout<<"Please enter in a month (in numeric form).\n";
    cin>>month;
    cout<<"Please enter in a day.\n";
    cin>>day;
    cout<<"Please enter in a two-digit year.\n";
    cin>>year;
    //Process values -> Map inputs to Outputs

    prod = month * day;
   
    //Determine
    if (prod==year)
        cout<<"The date you type in is a magic date.\n";
    else
        cout<<"The date you type in is not a miagic date\n";
    //Exit
    return 0;
}

