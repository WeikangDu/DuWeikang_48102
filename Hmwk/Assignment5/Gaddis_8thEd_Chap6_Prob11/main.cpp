/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on November 11, 2016, 6:18 PM
 */

#include <iostream>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes
void getScore(int &);
void calcAverage(int,int,int,int,int);
int findLowest(int,int,int,int,int);
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaration the variables
    int s1,s2,s3,s4,s5; //The score of five tests
    //Store the five tese
    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);
    //Calculate the average score
    calcAverage(s1,s2,s3,s4,s5);
    
    return 0;
}

// ****************************************************************
// The getScore function asks the user for a test score,          *
// stores it.                                                     *
// ****************************************************************
void getScore(int &score){
    cout<<"Please enter in your score of test: "<<endl;
    cin>>score;
    while(score<0||score>100){
        cout<<"Wrong score, please re-enter: ";
        cin>>score;
    }
}

// ****************************************************************
// The calcAverage function calculates and displays the           *
// average of the remain four scores.                             *
// ****************************************************************
void calcAverage(int s1, int s2, int s3, int s4, int s5 ){
    int low=findLowest(s1,s2,s3,s4,s5);
    int totS=s1+s2+s3+s4+s5;
    int avg=(totS-low)/4;
    
    cout<<"The average score is "<<avg<<endl;
}

// ****************************************************************
// The findLowest function finds and returns the lowest           *
// of the five scores.                                            *
// ****************************************************************
int findLowest(int s1, int s2, int s3, int s4, int s5){
    int low; //The lowest score
    if(s1<s2&&s1<s3&&s1<s4&&s1<s5) low=s1;
    else if(s2<s1&&s2<s3&&s2<s4&&s2<s5) low=s2;
    else if(s3<s1&&s3<s2&&s3<s4&&s3<s5) low=s3;
    else if(s4<s1&&s4<s2&&s4<s3&&s4<s5) low=s4;
    else if(s5<s1&&s5<s2&&s5<s3&&s5<s4) low=s5;
    return low;
}