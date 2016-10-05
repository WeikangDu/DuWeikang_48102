/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 25, 2016, 3:17 PM
 * Purpose 
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const float percent=0.2f;

int main(int argc, char** argv) {
    //Declaration of variables
    string Mvnm; //The movie's name
    float priAd=10.00f, priCh=6.00f; //The price of Adult ticket is $10.00
                                     //The price of child ticket is $6.00
    int adTk, chTk; //The number of adult tickets and child's tickets were sold
    float proGb, proNb, paid; //Gross box office profit, net box office profit,
                             // Amount paid to distributor
    
    //Input Values
    
    cout<<"What is the movie's name?\n";
    getline(cin, Mvnm);
    cout<<"How many adult tickets were sold?\n";
    cin>>adTk;
    cout<<"How many child's tickets were sold?\n";
    cin>>chTk;
    
    //Process values -> Map inputs to outputs
    proGb = adTk*priAd + chTk*priCh;
    proNb = proGb*percent;
    paid = proGb - proNb;
    
    //Display output
    
    cout<<"Movie Name:                  "<<
          "'"<<Mvnm<<"'"<<endl;
    cout<<"Adult Tickets Sold:             "<<adTk<<endl;
    cout<<"Child Tickets Sold:             "<<chTk<<endl;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Gross Box Office Profit:     "<<
          "$ "<<proGb<<endl;
    cout<<"Net Box Office Profit:       "<<
          "$ "<<proNb<<endl;
    cout<<"Amount Paid to Distributor:  "<<
          "$ "<<paid<<endl;
    

    return 0;
}

