/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 17, 2016, 6:26 PM
 * Purpose: Asking for the sales, then display a sales bar chart
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declaration the variables
    
    int store1, store2, store3, store4, store5; //Five store sales
    char a='*'; //The signal for bar

    //Input
    cout<<"Enter today's sales for store 1 :";
    cin>>store1;
    cout<<"Enter today's sales for store 2 :";
    cin>>store2;
    cout<<"Enter today's sales for store 3 :";
    cin>>store3;
    cout<<"Enter today's sales for store 4 :";
    cin>>store4;
    cout<<"Enter today's sales for store 5 :";
    cin>>store5;
    //Process and display
    cout<<"\nSales Bar Chart"<<endl;
    cout<<"(Each * = $100)"<<endl;
    //Display for store1
    cout<<"Store 1 : ";
    for(int N=1; N<=store1/100; N++)
        cout<<a;
    cout<<endl;
    //Display for store2
    cout<<"Store 2 : ";
    for(int N=1; N<=store2/100; N++)
        cout<<a;
    cout<<endl;
    //Display for store3
    cout<<"Store 3 : ";
    for(int N=1; N<=store3/100; N++)
        cout<<a;
    cout<<endl;
    //Display for store4
    cout<<"Store 4 : ";
    for(int N=1; N<=store4/100; N++)
        cout<<a;
    cout<<endl;
    //Display for store5
    cout<<"Store 5 : ";
    for(int N=1; N<=store5/100; N++)
        cout<<a;
    cout<<endl;
    
    
    return 0;
}

