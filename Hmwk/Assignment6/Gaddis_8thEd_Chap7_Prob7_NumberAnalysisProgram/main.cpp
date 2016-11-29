
/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 17, 2016, 6:58 PM
 * Purpose: read the data from file, then analysis
 */

#include <iostream>
#include <fstream>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes
void readFile(ifstream &, int[], int);
void FindLowest(int[], int);
void FindHighest(int[], int);
//Execution Begins Here!

int main(int argc, char** argv) {
    // File stream object
    ifstream infile;
    //Declaration
    const int SIZE=10;
    int Ary[SIZE];
    //Open the file
    infile.open("numbers.txt");
    
    if(!infile){
        cout<<"False"<<endl;
        return 0;
    }
    //read
    readFile(infile, Ary, SIZE);
    //Close the file
    infile.close();
    //Find the number
    FindLowest(Ary,SIZE);
    FindHighest(Ary,SIZE);
    
    return 0;
}
//***************************************************************************
//This readFile function read the element from file to array                *
//***************************************************************************
void readFile(ifstream & infile, int Ary[], int size){
    for(int i=0; i<size; i++){
        infile>>Ary[i];
    }
}
//***************************************************************************
//This FindLowest function receive array and its size as argument           *
//Then find the lowest value in this array and output it                    *
//***************************************************************************
void FindLowest(int Ary[], int size){
    //Set lowest
    int low=Ary[0];
    for(int i=1; i<size; i++){
        if(low>Ary[i]){
            low=Ary[i];
        }
    }
    //Display the result
    cout<<"The lowest number in file is "<<low<<endl;
}
//***************************************************************************
//This FindHighest function receive array and its size as argument          *
//Then find the highest value in this array and output it                   *
//***************************************************************************
void FindHighest(int Ary[], int size){
    //Set lowest
    int high=Ary[0];
    for(int i=1; i<size; i++){
        if(high<Ary[i]){
            high=Ary[i];
        }
    }
    //Display the result
    cout<<"The highest number in file is "<<high<<endl;
}