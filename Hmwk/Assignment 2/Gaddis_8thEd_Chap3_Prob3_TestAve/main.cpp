/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 25, 2016, 1:02 PM
 * Purpose: Calculate for the Average of test score
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Input values
    float Stest1, Stest2, Stest3, Stest4, Stest5; //The score of 5 tests
    float AveScore; // The number of average score
    int N=5; //The number of tests
    
    cout<<"Please enter in your five tests score.\n";
    cin>>Stest1>>Stest2>>Stest3>>Stest4>>Stest5;
    
    AveScore = (Stest1+Stest2+Stest3+Stest4+Stest5) / N;
    
    //Display the output
    cout<<"Your first test score is "<<Stest1<<endl;
    cout<<"Your second test score is "<<Stest2<<endl;
    cout<<"Your third test score is "<<Stest3<<endl;
    cout<<"Your fourth test score is "<<Stest4<<endl;
    cout<<"Your fifth test score is "<<Stest5<<endl;
    cout<<"The average of test score is "<<setprecision(1)<<fixed<<AveScore<<endl;
    

    return 0;
}

