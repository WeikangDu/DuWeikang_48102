/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Darren
 *
 * Created on November 11, 2016, 5:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
//User Libraries

//Global Constants

//Function prototypes
void coinToss();
//Execution Begins Here!
using namespace std;

int main(int argc, char** argv) {
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declaration the variables
    int time; //The times of roll
    //Input values
    do{
        cout<<"How many times you want to tossed?"<<endl;
        cin>>time;
    }
    while(time<1);
    //Process
    for(int i=1;i<=time;i++){
        cout<<i<<" : ";
        coinToss();
    }
    return 0;
}

//*********************************************************
//This coinToss function generate a random number         *
//between 1 and 2, then determine and display result      *
//*********************************************************
void coinToss(){
    //Generate a random number
    int n=1+rand()%2;
    if(n==1) cout<<"heads"<<endl;
    else cout<<"tails"<<endl;
}

