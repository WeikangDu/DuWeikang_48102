/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 16, 2016, 12:02 PM
 * Purpose: Asking for a serious number, then display the greatest number and least number
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaration the Variable
    int count; //The counter
    int num; //the number the user enter in
    int gNum, lNum; //The greatest number of the least number
    //Input value
    cout<<"The programs will display the greatest number and least number"<<endl;
    cout<<"\nPlease enter in a number; if you want to stop, enter -99"<<endl;
    cin>>num;
    
        gNum=num;
        lNum=num;
    
    while(num!=-99){
        cout<<"Please enter in a number; if you want to stop, enter -99"<<endl;
        cin>>num;
        if (num!=-99){
            if (num>gNum)
                gNum=num;
            if (num<gNum)
                lNum=num;
        }
    }
    //Output
        
            cout<<"The greatest number is "<<gNum<<endl;
            cout<<"The least number is "<<lNum<<endl;
    

    return 0;
}

