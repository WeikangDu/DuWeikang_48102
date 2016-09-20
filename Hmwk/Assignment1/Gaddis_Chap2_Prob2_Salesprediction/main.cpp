/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on September 17, 2016, 1:44 PM
 * Purpose: Calculate for sum of two numbers
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
   
    const float Percent=0.58f; //The East Coast sales division of a company generates 58 percent of total sales
    float Sales=8.6f; //The company has $8.6 million in sales this year 
    float Generate;
    
    Generate=Sales*Percent; //calculate for the generate
    
    //display the result
    cout<<"The division of a company generates is "<<Percent*100<<"%"<<endl;
    cout<<"The Sales company generates in this year is "<<Sales<<" million"<<endl;
    cout<<"The generate of The East Coast Division is "<<Generate<<" million"<<endl;
    
            
    return 0;
}

