/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on OCT. 11, 2016, 12.24 PM
 * Purpose:  Table for ocean rising for next 25 years
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rate = 1.5f; //Ocean's level is currently rising at 1.5 mm per year
    int year=1;
    float rise; //The Rising in mm
    //Display the header for the table
    cout<<"YEAR"<<"\t\t"<<"RISING IN MM"<<endl;
    //Process/Calculations Here
    do{
       rise=year*rate;      //Calculate for the Rising
       cout<<year<<"\t\t"<<rise<<" mm"<<endl;
       year++;
    }while (year<=25);
        
  
    

    //Exit
    return 0;
}

