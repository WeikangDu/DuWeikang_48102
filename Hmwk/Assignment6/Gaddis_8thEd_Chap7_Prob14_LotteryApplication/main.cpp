/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 18, 2016, 8:22 PM
 * Purpose: make a lottery application
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// Global constants
const int SIZE=5;
// Function prototypes
void fillAry(int []);
void prntAry(int []);
void UserAry(int []);
void displayAry(int []);
void compare(int[],int[]);
//Program begin here!
int main(int argc, char** argv) {

    //set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Declaration
    int lottery[SIZE];
    int user[SIZE];
    //fill lottery
    fillAry(lottery);
    //fill user array
    UserAry(user);
    //display 
    prntAry(lottery);
    displayAry(user);
    //determine
    compare(lottery,user);
    return 0;
}

void fillAry(int lottery[]){
    for(int i=0; i<SIZE; i++){
        lottery[i]=rand()%10;
    }
}

void prntAry(int lottery[]){
    cout<<"Lottery :"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<lottery[i]<<" ";
    }cout<<endl;
}

void UserAry(int user[]){
    for(int i=0; i<SIZE; i++){
        cout<<"Please enter in a number : ";
        cin>>user[i];
    }
}

void displayAry(int user[]){
    cout<<"User :"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<user[i]<<" ";
    }cout<<endl;
}

void compare(int lottery[],int user[]){
    int num=0;
    for(int i=0; i<SIZE; i++){
        if(lottery[i]==user[i]){
            num++;
        }
    }
    if(num<5) cout<<"You match "<<num<<" numbers"<<endl;
    else cout<<"You are the grand prize winner"<<endl;
}