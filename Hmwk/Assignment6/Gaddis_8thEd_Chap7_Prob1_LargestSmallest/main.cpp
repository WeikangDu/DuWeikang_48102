
/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 17, 2016, 9:35 AM
 * Purpose: Largest/Smallest Array Values
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration
    const int SIZE=10; //Set the size of array
    float array[SIZE];
    float largest, smallest;
    //Input
    for(int i=0; i<SIZE; i++){
        cout<<"Please enter in a number : ";
        cin>>array[i];
    }
    //Find the largest value
    largest=array[0];
    for(int j=1; j<SIZE; j++){
        if(largest<array[j]){
            //if it happens, then change the largest
            largest=array[j];
        }
    }
    //Find the smallest value
    smallest=array[0];
    for(int k=1; k<SIZE; k++){
        if(smallest>array[k]){
            //if it happens, change the smallest
            smallest=array[k];
        }
    }
    //Display the result
    cout<<"The largest value is "<<largest<<endl;
    cout<<"The smallest value is "<<smallest<<endl;
    return 0;
}


