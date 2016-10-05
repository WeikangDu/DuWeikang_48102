/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 25, 2016, 1:15 PM
 * Purpose: Calculates the average rainfall for three months.
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string mon1, mon2, mon3; //The user enter in three month name
    float rain1, rain2, rain3; //The amount of rain in inches that fell each month
    float Averain; //The average amount of rain in inches that fell three month
    int N=3; //The number of months
    
    cout<<"Please enter the name of first month (like July.)\n";
    cin>>mon1;
    cout<<"and type in the amount of rain that fell in this month.\n";
    cin>>rain1;
    cout<<"Please enter the name of second month\n";
    cin>>mon2;
    cout<<"and type in the amount of rain that fell in this month.\n";
    cin>>rain2;
    cout<<"Please enter the name of third month\n";
    cin>>mon3;
    cout<<"and type in the amount of rain that fell in this month.\n";
    cin>>rain3;
    
    Averain = (rain1+rain2+rain3) / N;
    
    //Display output
    
    cout<<"The amount of rain that fell in "<<mon1<<" is "<<rain1<<" inches"<<endl;
    cout<<"The amount of rain that fell in "<<mon2<<" is "<<rain2<<" inches"<<endl;
    cout<<"The amount of rain that fell in "<<mon3<<" is "<<rain3<<" inches"<<endl;
    
    
    cout<<"The average rainfall for "<<mon1<<", "<<mon2
        <<", "<<mon3<<" is "<<setprecision(2)<<fixed<<Averain<<" inches"<<endl;
    
    

    return 0;
}

