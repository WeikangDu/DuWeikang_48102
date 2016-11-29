
/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 17, 2016, 10:38 AM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants
const int MONKEYS=3;
const int DAYS=5;
//Function prototypes
void fillAry(float[][DAYS]);
void AvgFood(float[][DAYS]);
void Least(float[][DAYS]);
void Greatest(float[][DAYS]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration
    float m1=0, m2=0, m3=0;
    //This array hold the food data
    float food[MONKEYS][DAYS];
    //Get the data
    fillAry(food);
    //Calculate the average
    AvgFood(food);
    //Find food amount weekly by each monkey
    //monkey1
    for(int day=0; day<DAYS; day++){
        m1+=food[0][day];
    }
    //monkey2
    for(int day=0; day<DAYS; day++){
        m2+=food[1][day];
    }
    //monkey3
    for(int day=0; day<DAYS; day++){
        m3+=food[2][day];
    }
    //Determine which is least and greatest
    if(m1>m2&&m2>m3){
        cout<<"The largest amount is "<<m1<<" pounds"<<endl;
        cout<<"The least amount is "<<m3<<" pounds"<<endl;
    }else if(m1>m3&&m3>m2){
        cout<<"The largest amount is "<<m1<<" pounds"<<endl;
        cout<<"The least amount is "<<m2<<" pounds"<<endl;
    }else if(m2>m1&&m1>m3){
        cout<<"The largest amount is "<<m2<<" pounds"<<endl;
        cout<<"The least amount is "<<m3<<" pounds"<<endl;
    }else if(m2>m3&&m3>m1){
        cout<<"The largest amount is "<<m2<<" pounds"<<endl;
        cout<<"The least amount is "<<m1<<" pounds"<<endl;
    }else if(m3>m1&&m1>m2){
        cout<<"The largest amount is "<<m3<<" pounds"<<endl;
        cout<<"The least amount is "<<m2<<" pounds"<<endl;
    }else if(m3>m2&&m2>m1){
        cout<<"The largest amount is "<<m3<<" pounds"<<endl;
        cout<<"The least amount is "<<m1<<" pounds"<<endl;
    }else if(m1==m2){
        if(m2>m3){
            cout<<"The largest amount is "<<m2<<" pounds"<<endl;
            cout<<"The least amount is "<<m3<<" pounds"<<endl;
        }else{
            cout<<"The largest amount is "<<m3<<" pounds"<<endl;
            cout<<"The least amount is "<<m2<<" pounds"<<endl;
        }
    }else if(m1==m3){
        if(m2>m3){
            cout<<"The largest amount is "<<m2<<" pounds"<<endl;
            cout<<"The least amount is "<<m3<<" pounds"<<endl;
        }else{
            cout<<"The largest amount is "<<m3<<" pounds"<<endl;
            cout<<"The least amount is "<<m2<<" pounds"<<endl;
        }
    }else if(m2==m3){
        if(m2>m1){
            cout<<"The largest amount is "<<m2<<" pounds"<<endl;
            cout<<"The least amount is "<<m1<<" pounds"<<endl;
        }else{
            cout<<"The largest amount is "<<m1<<" pounds"<<endl;
            cout<<"The least amount is "<<m2<<" pounds"<<endl;
        }
    }else if(m1==m2&&m2==m3){
        cout<<"Three values are equal"<<endl;
    }
    return 0;
}

//***************************************************************************
//This fillAry function receive food array as argument,                     *
//and then let the user enter in each element for this array                *
//***************************************************************************
void fillAry(float food[][DAYS]){
    for(int i=0; i<MONKEYS; i++){
        for(int j=0; j<DAYS; j++){
            do{
                cout<<"Please enter pounds of food eaten by monkey"<<(i+1)<<" at day"<<(j+1)<<endl;
                cin>>food[i][j];
            }
            while(food[i][j]<0);
        }
    }
}
//***************************************************************************
//This AvgFood function receive food array as argument, then sum each       *
//element in the array, then calculate the average and output it            *
//***************************************************************************
void AvgFood(float food[][DAYS]){
    //Declaration
    float total=0;
    float avg;
    //Process
    for(int day=0; day<DAYS; day++){
        for(int monkey=0; monkey<MONKEYS; monkey++){
            total+=food[monkey][day];
        }
    }
    //Calculate the daily food
    avg=total/DAYS;
    //Display the result
    cout<<"The average food amount of whole family per day is "<<avg<<" pounds"<<endl;
}
