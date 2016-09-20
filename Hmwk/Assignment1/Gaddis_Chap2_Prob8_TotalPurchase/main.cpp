/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 3:14 PM
 * Purpose: Calculate for the total purchase
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    const float percentTax=0.07; //The sales tax is 7%
    //The customer purchase five items
    float priceItem1=15.95f; //The price of the first item in dollors
    float priceItem2=24.95f; //The price of the second item in dollors
    float priceItem3=6.95f; //The price of the third item in dollors
    float priceItem4=12.95; //The price of the fourth item in dollors
    float priceItem5=3.95; //The price of the fifth item in dollors
    float totalSale, Tax, Total; 
          //The subtotal of the sale, the amount of of sale tax, total of bill
    
    totalSale=priceItem1+priceItem2+priceItem3+priceItem4+priceItem5;
    Tax=totalSale*percentTax;
    Total=totalSale+Tax;
    
    //Display the results
    cout<<"The price of the first item is "<<priceItem1<<" $"<<endl;
    cout<<"The price of the second item is "<<priceItem2<<" $"<<endl;
    cout<<"The price of the third item is "<<priceItem3<<" $"<<endl;
    cout<<"The price of the fourth item is "<<priceItem4<<" $"<<endl;
    cout<<"The price of the fifth item is "<<priceItem5<<" $"<<endl;
    cout<<"The subtotal of the sales is "<<totalSale<<" $"<<endl;
    cout<<"The amount of sales tax is "<<setprecision(2)<<fixed<<Tax<<" $"<<endl;
    cout<<"The total of bill is "<<setprecision(2)<<fixed<<Total<<" $"<<endl;
    
    //Exit the program
    return 0;
}

