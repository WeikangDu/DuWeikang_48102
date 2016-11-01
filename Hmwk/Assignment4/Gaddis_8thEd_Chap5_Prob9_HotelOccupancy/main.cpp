
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 15, 2016, 4:44 PM
 * Purpose: Calculate for the hotel occupancy
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const int PERCENT=100; //Pecentage
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int nFloors; //The number of floor the hotel has
    int floor; //Each floor for counter
    int nOcup; //The number of room was occupied
    int nRoom; //The number of room for each floor
    int totRoom=0; //The total number of room the hotel has
    int totOcup=0; //The total number of room is occupied
    int totUnocup=0; //The total number of room is not occupied
    float Rate; //The rate of unoccupied
    
    
    //Input values
    
    cout<<"How many floors in the hotel?"<<endl;
    cin>>nFloors;
    //Determine the value
    while (nFloors<1){
        cout<<"The number of floors can not less than 1"<<endl;
        cin>>nFloors;
    }
    for (floor=1;floor<=nFloors;floor++){
        if(floor==13)
            continue;
        cout<<"How many rooms in "<<floor<<" floor"<<endl;
        cin>>nRoom;
        while (nRoom<10){
            cout<<"The number of room must be large than 10"<<endl;
            cin>>nRoom;
        }
        totRoom+=nRoom;
        cout<<"How many rooms were occupied in this floor?"<<endl;
        cin>>nOcup;
        while (nOcup<0&&nOcup>nRoom){
            cout<<"The number of occupied room must be 0 to "<<nRoom<<endl;
            cin>>nOcup;
        }
        totOcup+=nOcup;
    }
    totUnocup=totRoom-totOcup;
    Rate=static_cast<float>(totOcup)/totRoom*PERCENT;
    //Display Output
    cout<<"There are "<<totRoom<<" rooms in this hotel"<<endl;
    cout<<"There are "<<nOcup<<" rooms were occupied"<<endl;
    cout<<"There are "<<totUnocup<<" rooms are not occupied"<<endl;
    cout<<"The percent of occupied room is "<<Rate<<" %"<<endl;
    //Exit Program

    return 0;
}

