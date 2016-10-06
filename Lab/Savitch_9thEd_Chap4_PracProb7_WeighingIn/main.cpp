/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 06, 2016, 11:51 AM
 * Purpose: Calculate your Weight
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float GRAVITY=6.673e-8f;    //Universal Gravity Constant cm^3/g/sec^2
float CNKGGRM=1000;        //Conversion from KG to Gram
float CNSGGRM=14593.9;      //Conversion from Slugs to Gram
float CNKMMET=1000;        //Conversion from KM to Meters
float CNMETCM=100;          //Conversion from Meters to Centermeters
float CNDYNLB=2.24809e-6f;  //Conversion from Dynes to pounds
float CNSGLBS=32.174f;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float msEarth=5.972e24; //Google lookup -> Kilograms 
    float msMark=6.0f;      //Mass of Mark -> Slug
    float rdEarth=6371.0f;   //Google radius of the earth
    float weight;           //Force of attraction of Physics
    
    //Conversion of Inputs
    msEarth*=CNKGGRM; //Convert mass of the earth to grams
    msMark*=CNSGGRM;  //Convert mass of mark to grams
    rdEarth*=CNKMMET*CNMETCM; //Convert the radius of earth to centimeters
    
    
    //Process/Calculations Here
    weight= GRAVITY*msMark*msEarth/rdEarth/rdEarth; //Weak force attraction due to Gravity
    weight*=CNDYNLB; //Convert dynes to pounds
    
    //Output Located Here
    cout<<"According to the Week Force of Gravity Mark weights = "<<weight<<" lbs"<<endl;
    cout<<"As a check Mark weight = "<<6*CNSGLBS<<" lbs"<<endl;
    cout<<"The percent of error in the Radius of Earth = +- "<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    //Exit
    return 0;
}

