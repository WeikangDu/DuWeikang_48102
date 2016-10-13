/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on Oct 13, 2016, 11.25 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    ifstream in;
    ofstream out;
    int rows,cols;
    string line;
    
    //Input or initialize values Here
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows = "<<rows<<" cols = "<<cols<<endl;
    //Output Located Here / what is in the file to the output screen
    //In addition add in row numbers and column numbers for the user
    getline(in,line);
    for (int row=1;row<=rows;row++){
        getline(in,line);
        cout<<row<<"  "<<line<<endl;
    }
    cout<<"  ";
    for(int col=1;col<=cols;col++){
        cout<<col;
    }
    cout<<endl;
   //Where do you want to place the player
    int prow,pcol;
    cout<<"Where to position the player in row in column"<<endl;
    cin>>prow>>pcol;
    cout<<"Player position in Y = "<<prow<<" Player position in X = "<<pcol<<endl;
    
    //Read back in the file
    in.close();
    in.clear();
    //Input or initialize values Here
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows = "<<rows<<" cols = "<<cols<<endl;
    //Output Located Here and clear file
    out.open("player.dat");
    getline(in,line);
    for (int row=1;row<=rows;row++){
        getline(in,line);
        if(row==prow&&line[pcol-1]=='0')line[pcol-1]='P';
        cout<<row<<"  "<<line<<endl;
        out<<line;
    }
    cout<<"  ";
    for(int col=1;col<=cols;col++){
        cout<<col;
    }
    //Close the file
    in.close();

    //Exit
    return 0;
}

