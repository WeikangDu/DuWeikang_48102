/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 17, 2016, 6:43 PM
 * Purpose: Asking for a number, then display a square
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaration the variables
    char a='X';//The signal for the square
    int num; //The number for square
    //Input
    cout<<"Please enter in a integer number"<<endl;
    cin>>num;
    //Process and output
    
    for (int n=1; n<=num; n++){
        for(int n=1; n<=num; n++)
        cout<<a;
        cout<<endl;
    }
    

    return 0;
}

