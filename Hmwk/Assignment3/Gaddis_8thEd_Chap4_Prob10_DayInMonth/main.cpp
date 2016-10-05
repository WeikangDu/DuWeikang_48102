
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 4, 2016, 10:30 PM
 * Purpose: Ask for month and year, display the days
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    unsigned short year, month;
    
    //Input
    cout<<"Please enter in a month (1-12)."<<endl;
    cin>>month;
    cout<<"Please enter in a number for year."<<endl;
    cin>>year;
    //Determine
    switch (month){
        case 1 : cout<<" 31 days."<<endl;break;
        case 2 : 
            if (year%100==0)
                if (year%400==0)
                    cout<<" 29 days."<<endl;
                else
                    cout<<" 28 days."<<endl;
            else if (year%4==0)
                cout<<" 29 days."<<endl;
            else
                cout<<" 28 days."<<endl;break;
        case 3 : cout<<" 31 days."<<endl;break;
        case 4 : cout<<" 30 days."<<endl;break;
        case 5 : cout<<" 31 days."<<endl;break;
        case 6 : cout<<" 30 days."<<endl;break;
        case 7 : cout<<" 31 days."<<endl;break;
        case 8 : cout<<" 31 days."<<endl;break;
        case 9 : cout<<" 30 days."<<endl;break;
        case 10 : cout<<" 31 days."<<endl;break;
        case 11 : cout<<" 30 days."<<endl;break;
        case 12 : cout<<" 31 days."<<endl;break;
        default:
            cout<<" Bad month, you should enter in month (1-12)."<<endl;
            
    }
        
                
    

    return 0;
}

