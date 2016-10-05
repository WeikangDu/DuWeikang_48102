/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 25, 2016, 4:14 PM
 * Purpose: Calculate for the calories
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Input Values
    int nCki=30, nserv=10, calPs=300; //The number of cookies in one bag is 30
                                      //The number of serving in one bag is 10
                                      //The calories per serving is 300
    int calConsum; //How many calories were consumed
    int nAte; //The number of cookies were eaten
    
    cout<<"How many cookies you ate? \n";
    cin>>nAte;
    
    calConsum = calPs*nserv/nCki * nAte;
    
    cout<<"You consumed "<<calConsum<<" calories"<<endl;
    
    

    return 0;
}

