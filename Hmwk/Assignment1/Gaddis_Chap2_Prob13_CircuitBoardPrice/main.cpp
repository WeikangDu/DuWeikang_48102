/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 6:26 PM
 * Purpose: Calculate the selling price
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const float perProfit=0.35f; //The percent of profit is 35%
    float cost=14.95f, priSell; //a circuit board costs 14.95$, selling price
    
    priSell=cost+cost*perProfit;
    
    cout<<"The price of selling is "<<setprecision(2)<<fixed<<priSell<<" $"<<endl;
    
    return 0;
}

