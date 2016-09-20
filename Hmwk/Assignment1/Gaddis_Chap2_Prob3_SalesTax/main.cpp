/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 4:58 PM
 * Purpose: Calculate the total of tax
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float purchase=95.0f, Perstate=0.04f, Percounty=0.02f; //The price of purchase is 95$, the percent of state tax is 4%, the percent of county tax is 2%
    float stateTax, countyTax, totalTax;
    
    stateTax = purchase * Perstate; //Calculate for the state tax
    countyTax = purchase * Percounty; //Calculate for the county tax
    totalTax = stateTax + countyTax; //Calculate for the total tax
    
    cout<<"The price of purchasing is "<<purchase<<" $\n";
    cout<<"The state tax is "<<stateTax<<" $\n";
    cout<<"The county tax is "<<countyTax<<" $\n";
    cout<<"The total tax is "<<totalTax<<" $\n";
   
    
    //Exit the program
    return 0;
}

