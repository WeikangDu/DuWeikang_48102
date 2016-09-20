/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 5:16 PM
 * Purpose: Calculate for the average number of values
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float num1=28, num2=32, num3=37, num4=24, num5=33, total, N=5, Ave;
    
    total = num1+num2+num3+num4+num5;
    Ave = total / N;
    
    cout<<"The number of average is "<<Ave<<endl;
    
    return 0;
}

