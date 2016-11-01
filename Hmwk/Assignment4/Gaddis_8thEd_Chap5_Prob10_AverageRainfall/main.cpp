/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 15, 2016, 7:57 PM
 * Purpose: Calculate for Average Rainfall
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaration Variable
    int years; //The number of year for period
    int i, mon; //The counter
    float rainF; //The rainfall in inches
    int tot=0, totMon;//The total of rainfall and the total number of month
    float ave; //The average rainfall for each month
    //Input Value
    cout<<"Please enter a number of year you want to calculate the rainfall"<<endl;
    cin>>years;
    while(years<1){
        cout<<"The number of year must be large than 1"<<endl;
        cin>>years;
    }
    for(i=1;i<=years;i++){
        for(mon=1;mon<=12;mon++){
            cout<<"Please enter in a number of inch of rianfall for No."<<mon<<" month in No."<<i<<" year"<<endl;
            cin>>rainF;
            while(rainF<0){
                cout<<"The rainfall can not be negative"<<endl;
                cin>>rainF;
                
            }
            tot+=rainF;
        }
    }
    //process
    totMon=12*years;
    
    ave=static_cast<float>(tot)/totMon;
    cout<<"The average Rainfall is "<<ave<<" inches"<<endl;

    return 0;
}

