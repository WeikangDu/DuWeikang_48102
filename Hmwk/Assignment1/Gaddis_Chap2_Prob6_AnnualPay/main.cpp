/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 5:36 PM
 * Purpose: Calculate 
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float payAmount=2200.0f, //The employee earns $2200 each pay period
            payPeriod=26.0f, //The employee gets paid 26 times in one year
            annualPay; //The total employee earned in one year
    
    annualPay = payAmount * payPeriod;
    
    //Display the results
    cout<<"The employee earns "<<setprecision(2)<<fixed<<payAmount<<" $ per period\n";
    cout<<"The employee gets paid "<<setprecision(2)<<fixed<<payPeriod<<" times in one year\n";
    cout<<"The amount of anunal pay is "<<setprecision(2)<<fixed<<annualPay<<" $\n";
    
    //Exit the program
    return 0;
}

