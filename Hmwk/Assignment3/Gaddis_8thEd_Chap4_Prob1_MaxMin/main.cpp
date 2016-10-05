/* 
   File:   main
   Author: WeikangDu
   Created on October 2, 2016, 3:48 PM
   Purpose:  Determine the number
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

/*
 * This program will ask user to enter two numbers, and it will determine
 * and display in output which number is the smaller and which is the larger
 */

int main(int argc, char** argv) {
    //Declaration Variables
    float num1, num2;//Ask the user enter in two numbers 
    
    //Input values
    cout<<"Please enter in two numbers, then program will display\n";
    cout<<"which number is the smaller and which number is the larger.\n";
    cin>>num1>>num2;
    //Process values -> Map inputs to Outputs
    //Determine the number
    if (num1>num2)
        cout<<"The larger number is "<<num1
            <<" , and the smaller number is "<<num2<<endl;
    else if (num1<num2)
        cout<<"The larger number is "<<num2
            <<" , and the smaller number is "<<num1<<endl;
    else if (num1==num2)
    {
        cout<<"There are no larger number and smaller number."<<endl;
        cout<<"It may because you enter in two same numbers."<<endl;
    }
    //Exit Program
    return 0;
}