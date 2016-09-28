/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 25, 2016, 2:35 PM
 * Purpose: Calculate for the Ingredient Adjuster
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float cSug=1.5f, cBut=1.0f, cFlo=2.75f;
    //1.5 cups of sugar, 1 cup of butter and 2.75 cups of flour for 48 cookies
    int N=48; //48 cookies
    float cSug1, cBut1, cFlo1; //The cups of sugar, butter and flour for 1 cookie
    float Sneed, Bneed, Fneed; //The cups of sugar, butter and flour the user needs
    int nCki; //The number of cookie the user want to make
    
    cSug1=cSug/N;
    cBut1=cBut/N;
    cFlo1=cFlo/N;
    
    cout<<"How many cookies you want to make?\n";
    cin>>nCki;
    
    Sneed=cSug1*nCki;
    Bneed=cBut1*nCki;
    Fneed=cFlo1*nCki;
    
    //Display output
    
    cout<<"For "<<nCki<<" cookies.\n";
    cout<<"You need following things:\n";
    cout<<"[    Sugar,    Butter,    Flour    ]"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"["<<setw(4)<<Sneed<<" cups,"<<setw(5)<<Bneed<<" cups, "
            <<setw(4)<<Fneed<<" cups"<<"   ]"<<endl;
    
    
    

    return 0;
}

