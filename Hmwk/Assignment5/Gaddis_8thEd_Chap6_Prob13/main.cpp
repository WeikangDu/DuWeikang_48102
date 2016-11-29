/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on November 11, 2016, 6:48 PM
 * Purpose: calculates average number employees are absent
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes
int nEmployees();
int nDayMissed(int);
float nAvgDay(int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration Variables
    int nE,nDay,avg;
    //Input
    nE=nEmployees();
    
    //Process
    nDay=nDayMissed(nE);
    
    avg=nAvgDay(nE,nDay);
    //Display result
    cout<<"The average number of days absent is "<<avg<<endl;
    
    return 0;
}
// *************************************************************
// The nEmployees function asks the user to enter the number   *
// of employees in the company and returns                     *
// *************************************************************

int nEmployees(){
    int n; //The number of employees
    cout<<"Please enter in the number of employees in this company: ";
    cin>>n;
    while(n<1){
        cout<<"BAD NUMBER, re-enter: ";
        cin>>n;
    }
    return n;
}

// *************************************************************
// The nDayMissed function asks the user to enter the number   *
// of days each employees missed and return it                 *
// *************************************************************
int nDayMissed(int n){
    int days;
    int tot=0;
    for(int i=1; i<=n; i++){
        cout<<"Enter the number of days missed for this employee"<<endl;
        cin>>days;
        while(days<0){
            cout<<"BAD NUMBER, re-enter: ";
            cin>>days;
        }
        tot+=days;
    }
    return tot;
}

// *************************************************************
// The nAvgDay function calculate and return the average absent*
// days                                                        *
// *************************************************************
float nAvgDay(int n, int tot){
    return static_cast<float>(tot)/n;
}