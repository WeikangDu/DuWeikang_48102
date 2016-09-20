/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on September 17, 2016, 2:09 PM
 * Purpose: Calculate for the resturant bill
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    
    //Constant
    const float PercentofTax=0.0675f, PercentofTip=0.2f;
    
    float mealCharge=88.67f,
          Tax,
          Tip,
          Total;
    
    Tax=mealCharge*PercentofTax;
    Tip=(mealCharge+Tax)*PercentofTip;
    Total=mealCharge+Tax+Tip;
    
    cout<<"The meal cost is "<<setprecision(2)<<fixed<<mealCharge<<" $"<<endl;
    cout<<"The tax amount is "<<setprecision(2)<<fixed<<Tax<<" $"<<endl;
    cout<<"The tip amount is "<<setprecision(2)<<fixed<<Tip<<" $"<<endl;
    cout<<"The total bill is "<<setprecision(2)<<fixed<<Total<<" $"<<endl;
    

    return 0;
}

