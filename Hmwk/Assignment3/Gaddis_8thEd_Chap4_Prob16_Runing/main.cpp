
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 4, 2016, 9:36 PM
 * Purpose: Sort the grade of race
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaration Variables
    string P1, P2, P3; // Three places
    string name1, name2, name3; // The names of three runners
    float time1, time2, time3; // The time of each of them finish a race
    //Input
    cout<<"Please enter in the name of first runner"<<endl;
    getline (cin, name1);
    cout<<"Please enter in the time of first runner finish a race"<<endl;
    cin>>time1;
    cin.ignore();
    if (time1<=0) //Determine the time
        cout<<"The time must be positive"<<endl;
    else{
        cout<<"Please enter in the name of second runner"<<endl;
        getline (cin, name2);
        cout<<"Please enter in the time of second runner finish a race"<<endl;
        cin>>time2;
        cin.ignore();
        if (time2<=0)//Determine the time
            cout<<"The time must be positive"<<endl;
        else{
            cout<<"Please enter in the name of third runner"<<endl;
            getline (cin, name3);
            cout<<"Please enter in the time of second runner finish a race"<<endl;
            cin>>time3;
            if (time3<=0)//Determine the time
                cout<<"The time must be positive"<<endl;
            else{
                if (time1<time2 && time1<time3) //find the name for place 1
                    P1=name1;
                else if (time2<time1 && time2<time3)
                    P1=name2;
                else
                    P1=name3;
                if ((time1>time2 && time1<time3) || (time1>time3 && time1<time2)) //find the name for place 2
                    P2=name1;
                else if ((time2>time1 && time2<time3) || (time2>time3 && time2<time1))
                    P2=name2;
                else
                    P2=name3;
                if (time1>time2 && time1>time3) //find the name for place 3
                    P3=name1;
                else if (time2>time1 && time2>time3)
                    P3=name2;
                else
                    P3=name3;
            }
            
        }
        //Display the rank order
        cout<<"The following list will show the name of runners in rank order:"<<endl;
        cout<<P1<<" , "<<P2<<" , "<<P3<<endl;
    }

    return 0;
}

