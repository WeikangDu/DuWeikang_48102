/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 13, 2016, 12:27 PM
 * Purpose: Calculate Average/ Mean and Standard Deviation
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x1,x2,x3,x4,x5;//input values
    float avg,stdev;
    
    cout<<"This program calculates the man and standard deviation"<<endl;
    cout<<"Input 5 values"<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    avg=(x1+x2+x3+x4+x5)/5;
    stdev=pow((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg)+(x3-avg)*(x3-avg)+
            (x4-avg)*(x4-avg)+(x5-avg)*(x5-avg)/4, 0.5);
    
    cout<<"The input values = "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<endl;
    cout<<"The mean = "<<avg<<endl;
    cout<<"THE standard Deviation = "<<stdev<<endl;
    
    

    return 0;
}

