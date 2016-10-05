
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 3, 2016, 7:59 PM
 * Purpose: Calculate for the shipping charge
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaration the Variables
    bool goodweight=true;
    bool gooddis=true;
    float baseDis=500.0f; //Convert
    float weight, dis; // Weight of packet and the distance to ship
    float r1=1.1f, chag1, //The rate per 500 miles and charge for weight in 2kg or less
          r2=2.2f, chag2, //The rate per 500 miles and charge for weight Over 2 kg but not more than 6 kg
          r3=3.7f, chag3, //The rate per 500 miles and charge for weight Over 6 kg but not more than 10 kg
          r4=4.8f, chag4; //The rate per 500 miles and charge for weight Over 6 kg but not more than 10 kg
    //Input
    cout<<"This program will calculate the shipping charge.\n";
    cout<<"Please enter in the weight of your packet in Kilogram.\n";
    cin>>weight;
    
    //Determine the weight is valid
    if (weight<=0)
    {
        cout<<"The weight must greater than 0.\n";
        goodweight=false;
    }
    else if (weight>20)
    {
        cout<<"The company's maximum shipping weight is 20 kg.\n";
        goodweight=false;
    }
    if (goodweight)
    {
        cout<<"Please enter in the shipping distance in Mile.\n";
        cin>>dis;
        //Determine whether the distance is valid or not
        if (dis<10)
        {
            cout<<"The company's minimum shipping distance is 10 miles.\n";
            gooddis=false;
        }
        else if (dis>3000)
        {
            cout<<"The company's maximum shipping distance is 3000 miles.\n";
            gooddis=false;
        }
    }
    //Process
    chag1= r1 * dis/baseDis;
    chag2= r2 * dis/baseDis;
    chag3= r3 * dis/baseDis;
    chag4= r4 * dis/baseDis;
    //Determine
    cout<<setprecision(2)<<fixed<<showpoint;
    if (goodweight && gooddis)
    {
        if (weight<=2)
            cout<<"The charge for your packet is "<<chag1<<" $.\n";
        else if (weight<=6)
            cout<<"The charge for your packet is "<<chag2<<" $.\n";
        else if (weight<=10)
            cout<<"The charge for your packet is "<<chag3<<" $.\n";
        else
            cout<<"The charge for your packet is "<<chag4<<" $.\n";
    }
    
    //exit

    return 0;
}

