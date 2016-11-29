/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 7, 2016, 7:14 PM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes
float getLength();
float getWidth();
float getArea(float, float);
void displayData(float, float, float);
//Execution Begins Here!
int main(int argc, char** argv) {

    //Declaration the Variables
    float length,width,area;
    //Input Value
    length=getLength();
    width=getWidth();
    area=getArea(length,width);
    //Display 
    displayData(length,width,area);
    
    
    return 0;
}

//********************************************************
//This function getLength ask user enter in the length   *
//********************************************************
float getLength(){
    float L;
    cout<<"Please enter in a number for the rectangle's length:"<<endl;
    cin>>L;
    return L;
}

//********************************************************
//This function getWidth ask user enter in the width     *
//********************************************************
float getWidth(){
    float W;
    cout<<"Please enter in a number for the rectangle's width:"<<endl;
    cin>>W;
    return W;
}
//********************************************************
//This function getArea calculate the area of rectangle  *
//********************************************************
float getArea(float L, float W){
    return L*W;
}
//********************************************************
//This function display the data of rectangle            *
//********************************************************
void displayData(float length, float width, float area){
    cout<<"The rectangle's length is "<<length<<endl;
    cout<<"The rectangle's width is "<<width<<endl;
    cout<<"The rectangle's area is "<<area<<endl;
}