/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on OCT. 11, 2016, 12.11 PM
 * Purpose:  Sum of numbers 
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
    
    int maxNum;
    int sum=0;
    
    //Input or initialize values Here
    cout<<"This program will sum all integer from 1 to the number the user enter in."<<endl;
    cout<<"Please enter in a positive integer number"<<endl;
    cin>>maxNum; //Asking for a ending number
    //Determine the valid number
    while (maxNum<0) {
        
        cout<<"Bad Number!! You can not enter in a negative number."<<endl;
        cin>>maxNum;}
    //Process
    for(int count=1;count<=maxNum;count++)
        sum+=count;
    //Output Located Here
    cout<<"The total from 1 to "<<maxNum<<" is "<<sum<<endl;
    }

    //Exit
    return 0;
}

