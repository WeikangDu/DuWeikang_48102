/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 3:55 PM
 * Purpose: Calculate for the land
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Constant
    const float ftacre=43560.0f; //One acre is equivalent to 43560 square feet
    
    float tractofland=391876.0f; //One land is 391876 square feet
    float numAcre; //how many acres equivalent to 391876 square feet
    
    numAcre = tractofland / ftacre;
    
    cout<<"One acre is "<<ftacre<<" square feet\n";
    cout<<"The tract of land is "<<tractofland<<" square feet\n";
    cout<<"The number of acre is "<<setprecision(3)<<fixed<<numAcre<<endl;

    return 0;
}

