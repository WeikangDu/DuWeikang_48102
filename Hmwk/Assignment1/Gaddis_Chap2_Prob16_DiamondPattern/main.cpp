/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on September 18, 2016, 4:20 PM
 * Purpose: Make a Diamond Pattern
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char a=' ';
    char b;
    
    cout<<"What charactor would you like to input for the diamond pattern?"<<endl;
    cin>>b;
    
    
    cout<<a<<a<<a<<b<<a<<a<<a<<endl;
    cout<<a<<a<<b<<b<<b<<a<<a<<endl;
    cout<<a<<b<<b<<b<<b<<b<<a<<endl;
    cout<<b<<b<<b<<b<<b<<b<<b<<endl;
    cout<<a<<b<<b<<b<<b<<b<<a<<endl;
    cout<<a<<a<<b<<b<<b<<a<<a<<endl;
    cout<<a<<a<<a<<b<<a<<a<<a<<endl;
    

    return 0;
}

