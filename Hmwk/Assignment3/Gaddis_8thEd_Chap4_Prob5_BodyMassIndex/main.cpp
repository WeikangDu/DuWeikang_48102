
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 2, 2016, 4:31 PM
 * Purpose: Calculates and displays a person’s body mass index (BMI)
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declaration Variables
    float weit, heit; //Weight in pounds and height in inches
    float BMI; //Body mass index
    //Input
    cout<<"This program used for calculate for your body mass index.\n";
    cout<<"---------------------------------------------------------\n";
    cout<<"Please enter in your weight in pounds.\n";
    cin>>weit;
    cout<<"Please enter in your height in inches.\n";
    cin>>heit;
    //Process
    BMI = weit * 703 / pow(heit, 2);
   
    //Determine BMI
    if (BMI>=18.5 && BMI<=25)
        cout<<"Your BMI is "<<setprecision(2)<<fixed<<BMI<<" and your weight is optimal.\n";
    else if (BMI<18.5)
        cout<<"Your BMI is "<<setprecision(2)<<fixed<<BMI<<" and your weight is underweight.\n";
    else if (BMI>25)
        cout<<"Your BMI is "<<setprecision(2)<<fixed<<BMI<<" and your weight is overweight.\n";
    
    //Exit
    return 0;
}

