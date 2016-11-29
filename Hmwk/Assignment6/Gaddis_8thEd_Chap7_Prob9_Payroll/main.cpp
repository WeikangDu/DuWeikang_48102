/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 17, 2016, 7:37 PM
 * Purpose: Calculate the payroll
 */

#include <iostream> //I/O
#include <iomanip>  //Format

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void EmpInfo(long[], int[], float[], float[], int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declaration
    const int SIZE=7;
    long empId[SIZE]={5658845,4520125,
                   7895122,8777541,
                   8451277,1302850,7580489};
    int hours[SIZE];
    float payRate[SIZE];
    float wages[SIZE];
    //get the information of each employee
    EmpInfo(empId,hours,payRate,wages,SIZE);
    //Display the result
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Employee ID\t\t\tWages"<<endl;
    cout<<"--------------------------------------------"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<empId[i]<<"\t\t\t\t"<<wages[i]<<endl;
    }
    
    return 0;
}

void EmpInfo(long empId[], int hours[], float payRate[], float wages[], int size){
    for(int i=0; i<size; i++){
        //get the hours of each employee
        do{
            cout<<"Please enter in the hours for employee whose ID is "<<empId[i]<<endl;
            cin>>hours[i];
        }while(hours[i]<0);
        //get the pay rate for each employee
        do{
            cout<<"Please enter in the pay rate for employee whose ID is "<<empId[i]<<endl;
            cin>>payRate[i];
        }while(payRate[i]<15);
        //Calculate the wages
        wages[i]=hours[i]*payRate[i];
    }
}