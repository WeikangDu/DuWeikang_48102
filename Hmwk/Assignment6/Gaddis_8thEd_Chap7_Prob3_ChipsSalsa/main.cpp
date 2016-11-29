/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 18, 2016, 9:24 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Function prototypes
void FindLowest(string[],int[],int);
void FindHighest(string[],int[],int);
int main(int argc, char** argv) {
    //Declaration
    int tot=0;
    const int SIZE=5;
    string salsa[SIZE]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sold[SIZE];
    //get sold jars
    for(int i=0; i<SIZE; i++){
        do{
            
        
        cout<<"Please enter in the number of jars for ' "<<salsa[i]
            <<" ' sold during last month"<<endl;
        cin>>sold[i];
        
        }while(sold[i]<0);
        tot+=sold[i];
    }
    //Display
    cout<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<setw(6)<<salsa[i]<<"\t";
    }cout<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<setw(5)<<sold[i]<<"\t";
    }cout<<endl;
    cout<<endl;
    cout<<"The total sold is "<<tot<<" jars"<<endl;
    FindLowest(salsa,sold,SIZE);
    FindHighest(salsa,sold,SIZE);
    
    return 0;
}

//***************************************************************************
//This FindLowest function receive salsa and sold array as argument,        *
//Then find the lowest value in sold array and transfer the position to     *
//salsa array, then display the name in salsa at same position              *
//***************************************************************************
void FindLowest(string salsa[],int sold[],int size){
    int low=sold[0];
    int p=0;
    for(int i=1; i<size; i++){
        if(low>sold[i]){
            low=sold[i];
            p=i;
        }
    }
    cout<<"The lowest selling product is "<<salsa[p]<<endl;
}

//***************************************************************************
//This FindHighest function receive salsa and sold array as argument,       *
//Then find the highest value in sold array and transfer the position to    *
//salsa array, then display the name in salsa at same position              *
//***************************************************************************
void FindHighest(string salsa[],int sold[],int size){
    int high=sold[0];
    int p=0;
    for(int i=1; i<size; i++){
        if(high<sold[i]){
            high=sold[i];
            p=i;
        }
    }
    cout<<"The highest selling product is "<<salsa[p]<<endl;
}