
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 2, 2016, 9:26 PM
 * Purpose: Calculate sale of software
 */

#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Constants

const float PERCENT1=0.2f; //The discount percent for purchase number is 10-19
const float PERCENT2=0.3f; //The discount percent for purchase number is 20-49
const float PERCENT3=0.4f; //The discount percent for purchase number is 50-99
const float PERCENT4=0.5f; //The discount percent for purchase number is 100 or more
//Function prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration Variables
    float price=99.0f; // The sale price per packet for retails
    int packet; //The number of packets were sold
    float disc1, disc2, disc3, disc4; //Discount
    float total, total1, total2, total3, total4; // Total cost
    //Input
    cout<<"How many packets were sold?\n";
    cin>>packet;
    //Process
    disc1=price*PERCENT1;//The discount for purchase number is 10-19
    disc2=price*PERCENT2;//The discount for purchase number is 20-49
    disc3=price*PERCENT3;//The discount for purchase number is 50-00
    disc4=price*PERCENT4;//The discount for purchase number is 100 or more
    total=price*packet;
    total1=(price-disc1)*packet;//The total price for purchase number is 10-19
    total2=(price-disc2)*packet;//The total price for purchase number is 20-49
    total3=(price-disc3)*packet;//The total price for purchase number is 50-99
    total4=(price-disc4)*packet;//The total price for purchase number is 100 or more
    //Determine and output
    cout<<setprecision(2)<<fixed<<showpoint;
    if (packet>0 && packet<10)
        cout<<"You have no discount, and the total amount is "<<total<<" $"<<endl;
    else if (packet>=10 && packet<=19)
        cout<<"Your discount is "<<disc1<<" $"
            <<" and the total is "<<total1<<" $."<<endl;
    else if (packet>=20 && packet<=49)
        cout<<"Your discount is "<<disc2<<" $"
            <<" and the total is "<<total2<<" $."<<endl;
    else if (packet>=50 && packet<=99)
        cout<<"Your discount is "<<disc3<<" $"
            <<" and the total is "<<total3<<" $."<<endl;
    else if (packet>=100)
        cout<<"Your discount is "<<disc4<<" $"
            <<" and the total is "<<total4<<" $."<<endl;
    else
        cout<<"You should enter in a number which larger than 0.\n";
          
    return 0;
}

