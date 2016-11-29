/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 18, 2016, 7:23 PM
 * Purpose: Grade book
 */

#include <iostream>
#include <string>

using namespace std;
//Constant
const int STUDENTS=5;
const int SCORES=4;
//Function
void getInfo(string&,float[]);
void calc(float[], char&, float&);
void display(string, float[], float, char);

int main(int argc, char** argv) {
    //Declaration
    string Name[STUDENTS];
    char Grade [STUDENTS];
    float testScore1[SCORES];
    float testScore2[SCORES];
    float testScore3[SCORES];
    float testScore4[SCORES];
    float testScore5[SCORES];
    float avg[STUDENTS];
    //Get the infomation
    cout<<"Enter the information about student 1:"<<endl;
    getInfo(Name[0],testScore1);
    calc(testScore1,Grade[0],avg[0]);
    cout<<"Enter the information about student 2:"<<endl;
    cin.ignore();
    getInfo(Name[1],testScore2);
    calc(testScore2,Grade[1],avg[1]);
    cout<<"Enter the information about student 3:"<<endl;
    cin.ignore();
    getInfo(Name[2],testScore3);
    calc(testScore3,Grade[2],avg[2]);
    cout<<"Enter the information about student 4:"<<endl;
    cin.ignore();
    getInfo(Name[3],testScore4);
    calc(testScore4,Grade[3],avg[3]);
    cout<<"Enter the information about student 5:"<<endl;
    cin.ignore();
    getInfo(Name[4],testScore5);
    calc(testScore5,Grade[4],avg[4]);
    //Display the result
    display(Name[0], testScore1, avg[0], Grade[0]);
    display(Name[1], testScore2, avg[1], Grade[1]);
    display(Name[2], testScore3, avg[2], Grade[2]);
    display(Name[3], testScore4, avg[3], Grade[3]);
    display(Name[4], testScore5, avg[4], Grade[4]);
    
    return 0;
}

void getInfo(string &Name,float testScore[]){
    cout<<"Please enter student's name: ";
    getline(cin,Name);
    //Get the score
    for(int i=0; i<SCORES; i++){
        do{
            cout<<"Enter in the socre for test "<<i+1<<" : ";
            cin>>testScore[i];
        }while(testScore[i]<0||testScore[i]>100);
    }
}

void calc(float testScore[], char &Grade, float &avg){
    float tot=0.0;
    for (int i= 0; i<SCORES; i++)
    tot+=testScore[i];
    avg=tot/SCORES;
    if (avg>=90)
        Grade='A';
    else if (avg>=80)
        Grade='B';
    else if (avg>=70)
        Grade='C';
    else if (avg>=60)
        Grade='D';
    else
        Grade='F';
}

void display(string Name, float testScore[], float avg, char Grade){
    cout<<"---------------------------------"<<endl;
    cout<<"Name: "<<Name<<endl;
    for(int i=0; i<SCORES; i++){
        cout<<"Test "<<i+1<<" : "<<testScore[i]<<endl;
    }
    cout<<"Average Score: "<<avg<<endl;
    cout<<"Grade : "<<Grade<<endl;
}