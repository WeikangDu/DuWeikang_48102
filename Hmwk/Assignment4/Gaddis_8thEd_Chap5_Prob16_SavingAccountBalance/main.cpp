/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 16, 2016, 1:05 PM
 * Purpose: Calculate for the saving account balance
 */

#include <iostream>
#include <iomanip>

using namespace std;
const float MONTH_PER_YEAR=12.0;

int main(int argc, char** argv) {
    //Declaration variable
    int mon; //for the counter
    float AIR; //annual interest rate
    float Ban; //The balance
    int mons; //The number of month
    float dep, wdraw, monI, totI=0, eBan, totD=0, totW=0; //Deposit for month, withdraw for month
    //monthly interest, total interest, ending balance, total deposit, total withdraw
    float MAIR; // Monthly annual interest rate
    //Input
    
    cout<<setprecision(2)<<fixed<<showpoint;
    MAIR=AIR/MONTH_PER_YEAR;
    cout<<"Please enter in the number for annual interest rate"<<endl;
    cin>>AIR;
    while (AIR<0){
        cout<<"The number of annual interest rate can not be negative, re-enter:"<<endl;
        cin>>AIR;
    }
    cout<<"Please enter in a number of starting banlance"<<endl;
    cin>>Ban;
    while (Ban<0){
        cout<<"The balance can not be nagative, re-enter:"<<endl;
        cin>>Ban;
    }
    cout<<"Please enter in a number for month"<<endl;
    cin>>mons;
    while (mons<0){
        cout<<"The month can not be negative, re-enter:"<<endl;
        cin>>mons;
    }
    for (mon=1;mon<=mons;mon++){
        cout<<"The amount you deposited in $ :"<<endl;
        cin>>dep;
        while(dep<0){
            cout<<"The deposit number can not be negative"<<endl;
            cin>>dep;
        }
        cout<<"The amount you withdraw in $ :"<<endl;
        cin>>wdraw;
        while(wdraw<0){
            cout<<"The withdraw number can not be nagative"<<endl;
            cin>>wdraw;
        }
        //calculate
        Ban+=dep;
        Ban-=wdraw;
        monI=Ban*MAIR;
        totD+=dep;
        totW+=wdraw;
        MAIR=static_cast<float>(AIR)/MONTH_PER_YEAR;
        if (Ban<0){
            cout<<"The account has a balance of "<<Ban<<endl;
            cout<<"Because the balance is negative";
            cout<<"The program closed.";break;
        }
        
        totI+=monI;
        Ban+=monI;
    }
    //Display output
    cout<<MAIR<<"\t"<<monI<<endl;
    cout<<"The ending banlance is "<<Ban<<" $"<<endl;
    cout<<"The amount of deposit is "<<totD<<" $"<<endl;
    cout<<"The amount of withdraw is "<<totW<<" $"<<endl;
    cout<<"The amount of interest earned is "<<totI<<" $"<<endl;
    
    

    return 0;
}

