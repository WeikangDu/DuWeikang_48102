/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 26, 2016, 7:04 PM
 * Purpose: Calculate for converting U.S. dollar to Japanese yen and to euros.
 */

#include <iostream> //Input and output
#include <iomanip> //format the output

using namespace std;

//constants
const float YEN_PER_DOLLAR=100.76f; //One dollar equal to 100.76 yen, from google
const float EURO_PER_DOLLAR=0.89f; //One dollar equal to 0.89 euro, from google
////Function Prototypes

int main(int argc, char** argv) {
    
    //Declaration of variables
    float aDollar; //Amount of dollar
    float yen, euro; // Japanese yen and euro
    
    //Input values
    cout<<"How much dollars you want to convert?"<<endl;
    cin>>aDollar;
    
    //Process values -> Map inputs to outputs
    yen = aDollar * YEN_PER_DOLLAR;
    euro = aDollar * EURO_PER_DOLLAR;
    
    //Display the output
    
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"The following is the convert result:"<<endl;
    cout<<aDollar<<" Dollars"<<endl;
    cout<<yen<<" Japanese Yens"<<endl;
    cout<<euro<<" Euros"<<endl;
    
    
    return 0;
}

