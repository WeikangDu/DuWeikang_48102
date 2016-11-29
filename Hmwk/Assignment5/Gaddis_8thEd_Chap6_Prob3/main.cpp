
/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 7, 2016, 7:40 PM
 */

#include <iostream>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes
float getSales(string);
void findHighest(float,float,float,float);
//Execution Begins Here!

int main(int argc, char** argv) {
    string Northeast, Southeast, Northwest, Southwest;
    findHighest(getSales("Northeast"),getSales("Southeast"),
            getSales("Northwest"),getSales("Southwest"));
    return 0;
}
//*************************************************************
//This getSales function receive the division name            *
//and ask user to enter in a number for each division         *
//then return the data of sale to main function               *
//*************************************************************
float getSales(string Name){
    float sale;
    cout<<"Please enter in a number of sale for "<<Name<<": $ ";
    cin>>sale;
    while(sale<0){
        cout<<"The value can not be negative, re-enter: ";
        cin>>sale;
    }
    return sale;
}
//*************************************************************
//This findHighest function receive the sales of four         *
//division, and compare them to find the highest one          *
//and then display the result                                 *
//*************************************************************
void findHighest(float Ne, float Se, float Nw, float Sw){
    string Name;
    float Highest;
    if(Ne>Se&&Ne>Nw&&Ne>Sw){
        Name="Northeast";
        Highest=Ne;
    }else if(Se>Ne&&Se>Nw&&Se>Sw){
        Name="Southeast";
        Highest=Se;
    }else if(Nw>Ne&&Nw>Se&&Nw>Sw){
        Name="Northwest";
        Highest=Nw;
    }else if(Sw>Ne&&Sw>Se&&Sw>Nw){
        Name="Southwest";
        Highest=Sw;
    }
    //Display the result
    cout<<"The highest sale is $ "<<Highest<<" in division "<<Name<<endl;
}

