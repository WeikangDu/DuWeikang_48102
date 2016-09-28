/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 25, 2016, 2:07 PM
 * Purpose: Calculate for the percentage of male and female
 */

#include <iostream>

using namespace std;

const int PERCENT=100;

int main(int argc, char** argv) {
    
    int nMale, nFmale, nTot; //The number of Male and Female
                             //The total number of male and female
    
    float pMale, pFmale; //The percentage of male and female
    
    
    cout<<"How many males in the class?\n";
    cin>>nMale;
    cout<<"How many females in the class?\n";
    cin>>nFmale;
    
    nTot = nMale + nFmale;
    pMale = static_cast<float>(nMale) / nTot * PERCENT;
    pFmale = static_cast<float>(nFmale) / nTot * PERCENT;
    
    //Display output
    
    cout<<"There are "<<nMale<<" males";
    cout<<"and "<<nFmale<<" females registered in class.\n";
    
    cout<<"The percentage of male in the class is "<<pMale<<" %"<<endl;
    cout<<"The percentage of female in the class is "<<pFmale<<" %"<<endl;

    return 0;
}

