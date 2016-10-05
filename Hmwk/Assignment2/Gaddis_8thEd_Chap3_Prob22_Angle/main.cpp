/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 26, 2016, 8:03 PM
 * Purpose: Find the value tangent sine cosine of angle
 */

#include <iostream> // input output
#include <cmath> // sine cosine tangent
#include <iomanip> //format the output

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaration variables
    float ang; //The angle in radians
    
    //Introduce for program
    cout<<"This program will help you to calculate for sine, cosine and tangent.\n";
    
    //Input values
    cout<<"Please enter in an angle in radians.\n";
    cin>>ang;
    
    //Display the output
    cout<<setprecision(4)<<fixed<<showpoint<<endl;
    cout<<"The sine of this angle = "<<sin(ang)<<endl;
    cout<<"The cosine of this angle = "<<cos(ang)<<endl;
    cout<<"The tangent of this angle = "<<tan(ang)<<endl;
    

    return 0;
}

