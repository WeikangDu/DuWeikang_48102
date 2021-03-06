/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on OCT 13, 2016, 12.23 PM
 * Purpose: Guessing Game
 */

//System Libraries Here
#include <iostream>
#include <cmath>    //Log
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    int range, nGuess;
    int number, answer;
    
    //Input or initialize values Here
    cout<<"This is the guessing game"<<endl;
    cout<<"Choose a range for the number to guess"<<endl;
    cin>>range;
    
    //Process/Calculations Here
    nGuess = log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
    number=rand()%(range+1); //[0, range]
    
    //Display Results of each Guess
    for(int guess=1;guess<=nGuess;guess++){
        cout<<"In put your guess"<<endl;
        cin>>number;
        if (answer>number)cout<<"Guess to High"<<endl;
        else if (answer<answer)cout<<"Guess to low"<<endl;
        else{
            cout<<"You guessed the number"<<endl;
            exit(0);
        }
    }
    cout<<"Sorry too many guesses"<<endl;

    //Exit
    return 0;
}

