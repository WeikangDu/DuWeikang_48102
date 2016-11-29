
/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 7, 2016, 8:00 PM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants
const float G=9.8f; //The constant number of gravity
//Function prototypes
float fallingDistance(int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration
    float d; //The falling distance in meter
    for(int i=1; i<=10; i++){
        d=fallingDistance(i);
        cout<<"The distance is "<<d<<" meters when time in "<<i<<" seconds"<<endl;
    }
    return 0;
}

//*************************************************
// The fallingDistance function calculate the     *
// fall distance and return it.                   *
//*************************************************

float fallingDistance(int t){
    return 0.5*G*t*t;
}

