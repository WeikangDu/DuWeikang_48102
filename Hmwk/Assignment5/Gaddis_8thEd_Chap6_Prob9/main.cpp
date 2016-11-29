/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on November 11, 2016, 6:00 PM
 * Purpose: Use function determine the present value
 */

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
//User Libraries

//Global Constants

//Function prototypes
float presentValue(float,float,int);
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration the variables
    float r, n, F=10000.0f; //The annual interest, deposit years, and the future value
    //Input value
    do{
        cout<<"Please enter a number for the annual interest: ";
        cin>>r;
    }while(r<=0);
    do{
        cout<<"Please enter a number for the years deposit: ";
        cin>>n;
    }while(n<=0);
    //Process
    //Display the result
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<endl;
    cout<<"The annual interest is "<<r<<endl;
    cout<<"The years you want to deposit is "<<n<<endl;
    cout<<"You need to deposit $ "<<presentValue(F,r,n)<<endl;
    return 0;
}

//************************************************************************
//This presentValue function accept the futrue value, annual rate        *
//and number of years, then make a calculation and return the value      *
//************************************************************************
float presentValue(float F,float r,int n){
    return F/pow((1+r),n);
}