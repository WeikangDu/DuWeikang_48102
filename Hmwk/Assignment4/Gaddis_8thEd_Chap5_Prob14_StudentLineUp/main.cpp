/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 16, 2016, 12:35 PM
 * Purpose: Line up the student's name
 */

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
    //constants
    const int MIN_STUDENT=1;
    const int MAX_STUDENT=25;
    //Declaration Variables
    int num; // The number of students
    int count; //for the counter
    string name; // Students' name
    string Front;
    string End;
    //Input
    cout<<"How many student in this class"<<endl;
    cin>>num;
    while(num<MIN_STUDENT&&num>MAX_STUDENT){
        cout<<"The number of student must in range 1-25"<<endl;
        cin>>num;
    }
    cin.ignore();
    cout<<"Please enter in the name of student"<<endl;
    getline(cin,name);
    
    Front=name;
    End=name;
    for (count=2;count<=num;count++){
        cout<<"Please enter in the name of student"<<endl;
        getline(cin,name);
        
        if (name<Front)
            Front=name;
        if (name>End)
            End=name;
    }
    cout<<"The front student's name is "<<Front<<endl;
    cout<<"The end student's name is "<<End<<endl;

    return 0;
}

