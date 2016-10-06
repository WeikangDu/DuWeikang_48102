/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on Oct. 06, 2016, 12.26 AM
 * Purpose:  Play Rock Paper Scissors
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    
    char rPlay; //Our rock/paper/scissors
    char computr;
    
    
    //Input
    computr=rand()%4+80;
    while(computr=='Q'){
        computr=rand()%4+80;
    }
    //Input our rock, paper, scissors
    cout<<"Input your choice R-Rock, P-Paper, S-Scissors"<<endl;
    cin>>rPlay;
    switch(rPlay){
        case 'r':
        case 'R': rPlay='R';break;
        case 's':
        case 'S': rPlay='S';break;
        default: rPlay='T';break;
    }
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"The computer generate a "<<computr<<endl;
    cout<<"The player type in a       "<<rPlay<<endl;
    //Determine the winner and display
    if (computr == rPlay)
        cout<<"You both tied each other"<<endl;
    else if (computr=='P'){
        if (rPlay=='S')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else if (computr=='S'){
        if(rPlay=='R')cout<<"The Player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else{
        if(rPlay=='P')cout<<"The Player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }
        

    //Exit
    return 0;
}

