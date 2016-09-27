/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on September 27, 2016, 12.03 PM
 * Purpose:  Calculate for truth table
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    bool x,y;
    
    //Out put the heading of the truth table
    cout<<"The Truth Table will be shown follow: "<<endl;
    
    cout<<"[ X | Y | !X | !Y | X&&Y | X||Y | X^Y | X^Y^Y | X^Y^X | !(X&&Y) | !X||!Y | !(X||Y) | !X&&!Y ]\n";
    
    //Input or initialize values Here
    x=true;
    y=true;
    
    
    //Output Located Here
    cout<<"[ "<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    cout<<setw(2)<<(!x?'T':'F')<<" | ";
    cout<<setw(2)<<(!y?'T':'F')<<" | ";
    cout<<setw(4)<<(x&&y?'T':'F')<<" | ";
    cout<<setw(4)<<(x||y?'T':'F')<<" | ";
    cout<<setw(3)<<(x^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x&&y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x||!y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x||y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x&&!y?'T':'F')<<" ]"<<endl;
    
    //Input for second row
    y=false;
    
    //Display the table
    cout<<"[ "<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    cout<<setw(2)<<(!x?'T':'F')<<" | ";
    cout<<setw(2)<<(!y?'T':'F')<<" | ";
    cout<<setw(4)<<(x&&y?'T':'F')<<" | ";
    cout<<setw(4)<<(x||y?'T':'F')<<" | ";
    cout<<setw(3)<<(x^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x&&y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x||!y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x||y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x&&!y?'T':'F')<<" ]"<<endl;
    
    //Input for second row
    x=false;
    y=true;
    
    //Display the table
    cout<<"[ "<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    cout<<setw(2)<<(!x?'T':'F')<<" | ";
    cout<<setw(2)<<(!y?'T':'F')<<" | ";
    cout<<setw(4)<<(x&&y?'T':'F')<<" | ";
    cout<<setw(4)<<(x||y?'T':'F')<<" | ";
    cout<<setw(3)<<(x^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x&&y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x||!y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x||y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x&&!y?'T':'F')<<" ]"<<endl;
    
    //Input for second row
    x=false;
    y=false;
    
    //Display the table
    cout<<"[ "<<(x?'T':'F')<<" | ";
    cout<<(y?'T':'F')<<" | ";
    cout<<setw(2)<<(!x?'T':'F')<<" | ";
    cout<<setw(2)<<(!y?'T':'F')<<" | ";
    cout<<setw(4)<<(x&&y?'T':'F')<<" | ";
    cout<<setw(4)<<(x||y?'T':'F')<<" | ";
    cout<<setw(3)<<(x^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(5)<<(x^y^y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x&&y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x||!y?'T':'F')<<" | ";
    cout<<setw(7)<<(!(x||y)?'T':'F')<<" | ";
    cout<<setw(6)<<(!x&&!y?'T':'F')<<" ]"<<endl;
    
    
    
    

    //Exit
    return 0;
}

