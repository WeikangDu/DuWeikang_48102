
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 5, 2016, 3:26 PM
 * Purpose: ask for two numbers, then sort them.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int choice;
    float a, b, c, d; // numbers
    
    cout<<"This program will sort the numbers you enter in.\n\n";
    cout<<"Menu: "<<endl;
    cout<<"     1. Sort two numbers"<<endl;
    cout<<"     2. Sort three numbers"<<endl;
    cout<<"     3. Sort four numbers"<<endl;
    cout<<"     4. Quit\n\n";
    cout<<"     Enter your choice "<<endl;
    cin>>choice;

    switch (choice){
        case 1 : 
            cout<<"Please enter in two numbers"<<endl;
            cin>>a>>b;
            if (a>b)
                cout<<a<<","<<b<<endl;
            else if (a<b)
                cout<<b<<","<<a<<endl;
            else
                cout<<"You entered in two same numbers"<<endl;break;
        case 2 :
            cout<<"Please enter in three numbers"<<endl;
            cin>>a>>b>>c;
            if (a>b && b>c)
                cout<<a<<","<<b<<","<<c<<endl;
            else if (a>c && c>b)
                cout<<a<<","<<c<<","<<b<<endl;
            else if (b>a && a>c)
                cout<<b<<","<<a<<","<<c<<endl;
            else if (b>c && c>a)
                cout<<b<<","<<c<<","<<a<<endl;
            else if (c>a && a>b)
                cout<<c<<","<<a<<","<<b<<endl;
            else if (c>b && b>a)
                cout<<c<<","<<b<<","<<a<<endl;
            else if (c==b && b==a)
                cout<<"You entered in three same numbers"<<endl;
            else
                cout<<"You entered in two same numbers"<<endl;break;
        case 3 :
            cout<<"Please entered in four numbers"<<endl;
            cin>>a>>b>>c>>d;
            if (a>b && b>c && c>d)
                cout<<a<<","<<b<<","<<c<<","<<d<<endl;
            else if (a>b && b>d && d>c)
                cout<<a<<","<<b<<","<<d<<","<<c<<endl;
            else if (a>d && d>b && b>c)
                cout<<a<<","<<d<<","<<b<<","<<c<<endl;
            else if (a>d && d>c && c>b)
                cout<<a<<","<<d<<","<<c<<","<<b<<endl;
            else if (a>c && c>d && d>b)
                cout<<a<<","<<c<<","<<d<<","<<b<<endl;
            else if (a>c && c>b && b>d)
                cout<<a<<","<<c<<","<<b<<","<<d<<endl;
            else if (b>a && a>c && c>d)
                cout<<b<<","<<a<<","<<c<<","<<d<<endl;
            else if (b>a && a>d && d>c)
                cout<<b<<","<<a<<","<<d<<","<<c<<endl;
            else if (b>c && c>a && a>d)
                cout<<b<<","<<c<<","<<a<<","<<d<<endl;
            else if (b>c && c>d && d>a)
                cout<<b<<","<<c<<","<<d<<","<<a<<endl;
            else if (b>d && d>a && a>c)
                cout<<b<<","<<d<<","<<a<<","<<c<<endl;
            else if (a>b && b>d && d>c)
                cout<<a<<","<<b<<","<<d<<","<<c<<endl;
            else if (b>d && d>c && c>a)
                cout<<b<<","<<d<<","<<c<<","<<a<<endl;
            else if (c>a && a>b && b>d)
                cout<<c<<","<<a<<","<<b<<","<<d<<endl;
            else if (c>a && a>d && d>b)
                cout<<c<<","<<a<<","<<d<<","<<b<<endl;
            else if (c>b && b>a && a>d)
                cout<<c<<","<<b<<","<<a<<","<<d<<endl;
            else if (c>b && b>d && d>a)
                cout<<c<<","<<b<<","<<d<<","<<a<<endl;
            else if (c>d && d>a && a>b)
                cout<<c<<","<<d<<","<<a<<","<<b<<endl;
            else if (c>d && d>b && b>a)
                cout<<c<<","<<d<<","<<b<<","<<a<<endl;
            else if (d>a && a>b && b>c)
                cout<<d<<","<<a<<","<<b<<","<<c<<endl;
            else if (d>a && a>c && c>b)
                cout<<d<<","<<a<<","<<c<<","<<b<<endl;
            else if (d>b && b>a && a>c)
                cout<<d<<","<<b<<","<<a<<","<<c<<endl;
            else if (d>b && b>c && c>a)
                cout<<d<<","<<b<<","<<c<<","<<a<<endl;
            else if (d>c && c>a && a>b)
                cout<<d<<","<<c<<","<<a<<","<<b<<endl;
            else if (d>c && c>b && b>a)
                cout<<d<<","<<c<<","<<b<<","<<a<<endl;break;
            
        case 4 :
            cout<<"End of this program!"<<endl;break;
        default : 
            cout<<" You must choose the number from 1 to 4."<<endl;
           
    }
    
    
    

    return 0;
}

