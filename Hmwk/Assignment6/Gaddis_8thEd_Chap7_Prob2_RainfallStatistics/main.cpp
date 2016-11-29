/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on Nov 15, 2016, 11:46 AM
 * Purpose:  Rainfall statistics
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void FindHighest (float []);
void FindLowest (float []);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int month=12;
    float rainfall[month];
    float totRainfall=0, avgRainfall;
    //Input or initialize values Here
    for(int i=0; i<month; i++){
        do{
            cout<<"Please enter in the rainfall for this month: ";
            cin>>rainfall[i];
        }while(rainfall[i]<0);
        totRainfall+=rainfall[i];
    }
    //Process/Calculations Here
    avgRainfall=totRainfall/month;
    //Output Located Here
    cout<<"The total rainfall for this year is "<<totRainfall<<endl;
    cout<<"The average rainfall for this year is "<<avgRainfall<<endl;
    FindHighest(rainfall);
    FindLowest(rainfall);
    //Exit
    return 0;
}
//***************************************************************************
//This FindHighest function receive rainfall array as argument, then find   *
//the highest value and its position. And then output them.                 *
//***************************************************************************
void FindHighest (float rainfall[]){
    //Declaration
    float highest=rainfall[0];
    int highMonth;
    int i=1;
    //Process
    for(i; i<12; i++){
        if(rainfall[i]>highest){
            highest=rainfall[i];
            highMonth=i;
        }else highMonth=1;
    }
    //Output the result
    cout<<"The highest amount of rainfall is "<<highest<<" in "<<highMonth<<" month."<<endl;
}

//***************************************************************************
//This FindLowest function receive rainfall array as argument, then find    *
//the lowest value and its position. And then output them.                  *
//***************************************************************************
void FindLowest (float rainfall[]){
    //Declaration
    float lowest=rainfall[0];
    int i=1;
    int lowMonth;
    //Process;
    for(i; i<12; i++){
        if(rainfall[i]<lowest){
            lowest=rainfall[i];
            lowMonth=i;
        }else lowMonth=1;
    }
    //Output the result
    cout<<"The lowest amount of rainfall is "<<lowest<<" in "<<lowMonth<<" month."<<endl;
}
