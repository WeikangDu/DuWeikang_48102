/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 29, 2016, 11:48 AM
 * Purpose: Making a Small Sudoku Game.
 */

#include <iostream> //I/O
#include <ctime>    //Time
#include <cstdlib>  //Random
#include <fstream>  //I/O file
#include <string>   //String name
#include <vector>   //Vector

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int COLS=3;      //Set the array columns is 3
//Declaration Alpha structure holds information about tester
struct Alpha{
    int ID;         //Integer ID holds the tester's id
    string Name;    //String Name holds the tester's name
};
//Function Prototypes Here
void prntAry(int [][COLS], int);
int getRow(int);
int getCol(int COLS);
bool isPositionHasNum(int [][COLS], int, int);
void getNumber(int [][COLS], int, int);
bool isNumberRepeat(int [][COLS], int, int, int);
void clearPosition(int [][COLS], int, int, int);
bool isFinish(int [][COLS], int);
bool isSuccess(int [][COLS], int);
bool isPerfect(int [][COLS],int);
void dualSort(vector<int> &, string*, int);
int binarySearch(vector<int> &, int, int);
void displayMessage(string);
//Program Execution Begins Here!
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables here
    const int ROWS=3;    //Set the array rows is 3
    int x, y;            //The position row and column
    char choice, choose; //The variables holding user's choice
    int round=1;         //The number of round.
    ofstream outfile;    //Output file
    ifstream infile;     //input file
    const int NUM=10;    //The size of idNum and Name array
    vector<int> idNum(NUM);      //The vector holding ID number
    string Name[NUM]={"Collins Bill", "Smith Bart", "Allen Jim", "Griffin, Jim",
                      "Smith Marty", "Rose Gary", "Taylor Swith", "Johnson Jill"
                     ,"Allison Jeff", "Looney Joe"};
    Alpha tester;        //Declaration the structure variable
    int position;        //The variable holding the position of id and name array
    //Open the file
    outfile.open("records.txt");
    infile.open("ID.txt");
    //read the file to vector
    if(!infile){
        cout<<"Open file failed!"<<endl;
        exit(0);
    }else{
        for(int i=0; i<NUM; i++){
            infile>>idNum[i];
        }
    }
    //close the file
    infile.close();
    //Sort the array
    dualSort(idNum, Name, NUM);
    //display the message
    cout<<"Welcome to play Small Sudoku Game!!"<<endl;
    cout<<"Actually, this game is a version of alpha, "<<endl;
    cout<<"we have 10 registered id for tester. Please check in file (ID.txt)."<<endl;
    cout<<"Enter your ID Number : ";
    cin>>tester.ID;
    //Determine the ID is valid or not
    while(tester.ID<100||tester.ID>999){
        cout<<"Wrong ID, it must between 100 to 999, re-enter: ";
        cin>>tester.ID;
    }
    //Determine that the ID exits or not.
    while(binarySearch(idNum, NUM, tester.ID)==-1){
        cout<<"The ID is invalid, please check ID in 'ID.txt'. Re-enter: ";
        cin>>tester.ID;
    }
    position=binarySearch(idNum, NUM, tester.ID);
    tester.Name=Name[position];
    //Display message
    displayMessage(tester.Name);
    //Processing here!!
    do{
        //fill the array
        int array[ROWS][COLS]={}; //Set the two dimension array and
                                  //make the elements of array to 0.
        //Declaration the Variables
        int x1,y1;          //random position x and y;
        //Process
        x1=rand()%3;
        y1=rand()%3;
        //Determine
        //fill the array
        array[x1][y1]=rand()%9+1;
        //Process here!
        do{
            //display the array
            prntAry(array, ROWS);
            //Get the number of row for entering number
            cout<<"Which row you want to put a number in?"<<endl;
            x=getRow(ROWS);
            //Get the number of column for entering number.
            cout<<"Which column you want to put a number in?"<<endl;
            y=getCol(COLS);
            //check the position whether has a number
            while(isPositionHasNum(array,x,y)){
                cout<<"This position ("<<x<<","<<y<<") already has a number."<<endl;
                x=getRow(ROWS);
                y=getCol(COLS);
            }
            //Put the number in array
            getNumber(array,x,y);
            //Display the array
            prntAry(array, ROWS);
            //Check the number whether already has;
            while(isNumberRepeat(array,ROWS,x,y)){
                cout<<"You only can use this number once."<<endl;
                //Clear this position to 0;
                array[x-1][y-1]=0;
                //Print out the array
                prntAry(array, ROWS);
                //Re-enter in the number
                getNumber(array,x,y);
                //Print out the array
                prntAry(array, ROWS);
            }
            //Determine the choice to clear position.
            cout<<"Type Y to clear one position, or any key to continue: ";
            cin>>choice; 
            while(choice=='Y'||choice=='y'){
                clearPosition(array, ROWS,x1,y1);
                cout<<"Type Y to clear one position, or any key to continue: ";
                cin>>choice; 
            }
        }while(isFinish(array,ROWS));    //Check whether game is finished.
        
        //Check whether user is win or not.
        if(isSuccess(array, ROWS)){
            if(!outfile){
                cout<<"Open file failed!"<<endl;
                exit(0);
            }
            else{
                outfile<<"***round "<<round<<"***"<<endl;
                outfile<<"┏━━━┳━━━┳━━━┓"<<endl;
                for(int i=0; i<ROWS; i++){
                    if(i!=0) outfile<<"┣━━━╋━━━╋━━━┫"<<endl;
                    for(int j=0; j<COLS; j++){
                        outfile<<"┃ "<<array[i][j]<<" ";
                        if(j%3==2) outfile<<"┃"<<endl;
                    }
                }outfile<<"┗━━━┻━━━┻━━━┛"<<endl;
                outfile<<"\tby "<<tester.Name<<" ID: "<<tester.ID<<endl;
            }
            
            //Check the answer is perfect or not.
            if(isPerfect(array, ROWS)){
                cout<<endl;
                cout<<"YOU ARE VERY SMART, YOU MADE A PERFECT SOLUTION!!"<<endl;
                outfile<<"Perfect Solution!"<<endl;
                outfile<<endl;
            }else{
                cout<<endl;
                cout<<"CONGRADUATIONS!! YOU WON THE GAME!"<<endl;
                outfile<<"Basic Solution!!"<<endl;
                outfile<<endl;
            }
            
            cout<<"Type N to start a new round, or Q to quit this game:"<<endl;
            cin>>choose;
            switch(choose){
                case 'n':
                case 'N': choose='N';break;
                default : choose='Q';
            }
        }
        else{
            cout<<endl;
            cout<<"You did not win the game!"<<endl;
            cout<<"Type Y to clear one position, or N to start a new round, or Q to quit this game:"<<endl;
            cin>>choose;
            switch(choose){
                case 'y':
                case 'Y': choose='Y';break;
                case 'n':
                case 'N': choose='N';break;
                default : choose='Q';
            }
            while(choose=='Y'){
                clearPosition(array, ROWS,x1,y1);
                cout<<"Type Y to clear one position, or any key to continue: ";
                cin>>choose; 
            }
        }
        round++;
    }while(choose=='N');
    //Close the file
    outfile.close();
    //Exit
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   displayMessage   *********************************
//Purpose:  Display the the introduction and player name                       *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  Name->The variable hold the player's name                                  *
//Output:   Outputs to the function here -> Description, Range, Units          *
//******************************************************************************

void displayMessage(string Name){
    cout<<"Hi, "<<Name<<". Let me introduce you for the rule of this game:"<<endl;
    cout<<"  1. You will get a 3x3 chart which already had a random "<<
            "number in random position."<<endl;
    cout<<"  2. You need to use 1-9 (each number only can use once) fill out"<<endl;
    cout<<"     all other blank position using (row,colum)."<<endl;
    cout<<"  3. You must make it to the sum of each row and each column"<<endl;
    cout<<"     equal to 15 to get basic win, and if you can make a perfect"<<endl;
    cout<<"     answer which the sum of each slash equal 15 also."<<endl;
    cout<<"  4. You can clear the position (expect original one) "<<
            "and enter again."<<endl;
    cout<<endl;
    cout<<"Okay, "<<Name<<". Are you ready to challenge yourself?"<<endl;
    cout<<"Enter any key to go!!"<<endl;
    cin.ignore();
    cin.get();
    cout<<"Problem Challenge: "<<endl;
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   binarySearch   ***********************************
//Purpose:  Search the value and its position                                  *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  *id->The integer array hold with ID number                                 *
//  size->The size of id array                                                 *
//  value->The value which the user enter in and want to search                *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the value position                                                  *
//******************************************************************************

int binarySearch(vector<int> &id, int size, int value){
    int first=0,        //First array element
        last=size-1,    //Last array element
        middle,         //midpoint of search
        position=-1;    //Position of search value
    bool found=false;   //Flag
    do{
        middle=(first+last)/2; //Calculate midpoint
        if(id[middle]==value){
            found=true;
            position=middle;
        }else if(id[middle]>value) last=middle-1;
        else first=middle+1;
    }while(!found && first<=last);
    return position;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   dualSort   ***************************************
//Purpose:  Sort the id array by ascending order with its parallel name array  *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  *id->The integer array hold with ID number                                 *
//  *name->The string array hold with name                                     *
//  size->the size of two parallel array                                       *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Saving the two array in the ascending order                                *
//******************************************************************************

void dualSort(vector<int> &id, string *name, int size){
    //Declaration the Variables
    int startScan, minIndex, minValue;
    string tempName;
    for(startScan=0; startScan<(size-1); startScan++){
        minIndex=startScan;
        minValue=id[startScan];
        tempName=*(name+startScan);
        for(int index=startScan+1; index<size; index++){
            if(id[index]<minValue){
                minValue=id[index];
                tempName=*(name+index);
                minIndex=index;
            }
        }
        id[minIndex]=id[startScan];
        *(name+minIndex)=*(name+startScan);
        id[startScan]=minValue;
        *(name+startScan)=tempName;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   isPerfect   **************************************
//Purpose:  Determine whether the answer is perfect solution or not            *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding the answer                            *
//  rows->the number of rows of the array                                      *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the boolean flag                                                    *
//******************************************************************************

bool isPerfect(int a[][COLS],int rows){
    bool flag=false;    //Set the initialize flag to false
    if(isSuccess(a,rows)){
        if((a[0][0]+a[1][1]+a[2][2])==15&&(a[0][2]+a[1][1]+a[2][0])==15) 
            flag=true;
    }
    //Finish and return the flag
    return flag;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   isSuccess   **************************************
//Purpose:  Determine whether the answer is successful or not                  *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  rows->The rows of the array                                                *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the boolean flag                                                    *
//******************************************************************************

bool isSuccess(int a[][COLS], int rows){
    //Declaration the Variables
    bool flag=false; //Set the flag
    int sumR1=0,sumR2=0,sumR3=0; //The sum of each row
    int sumC1=0,sumC2=0,sumC3=0; //The sum of each column
    //Process
    for(int j=0; j<COLS; j++){
        sumR1+=a[0][j];
        sumR2+=a[1][j];
        sumR3+=a[2][j];
    }
    for(int i=0; i<rows; i++){
        sumC1+=a[i][0];
        sumC2+=a[i][1];
        sumC3+=a[i][2];
    }
    //Determine the sum equal 15 or not
    if(sumR1==15&&sumR2==15&&sumR3==15&&
            sumC1==15&&sumC2==15&&sumC3==15) flag=true;
    //Finish and return the flag
    return flag;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************    isFinish   **************************************
//Purpose:  Determine whether the answer is successful or not                  *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  rows->The rows of the array                                                *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the boolean flag                                                    *
//******************************************************************************

bool isFinish(int a[][COLS], int rows){
    //Declaration the Variables
    bool flag=false; //Set the flag
    int times=0;     //Set the time holding the times of exist of same number
    for(int i=0; i<rows; i++){
        for(int j=0; j<COLS; j++){
            if(a[i][j]==0) times++;
        }
    }
    if(times!=0) flag=true;
    //Finish and return flag
    return flag;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   clearPosition   **********************************
//Purpose:  Get the position and clear the value of this position              *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  rows->The rows of the array                                                *
//  x1->The row of position of original one                                    *
//  y1->The column of position of original one                                 *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Print out the new array after clear position value                         *
//******************************************************************************

void clearPosition(int a[][COLS], int rows, int x1, int y1){
    //Declaration the Variables
    int x, y;
    //Process
    //Get the position want to clear
    x=getRow(rows);
    y=getCol(COLS);
    //Limit the original number which can not be cleared.
    while((x-1==x1&&y-1==y1)){
        cout<<"The question number can not be cleared."<<endl;
        cout<<"Please re-enter in the position."<<endl;
        x=getRow(rows);
        y=getCol(COLS);
    }
    //Check the position whether has a number
    while(!isPositionHasNum(a,x,y)){
        //if the position does not have a number
        cout<<"This position ("<<x<<","<<y
                <<") does not have a number need to clear"<<endl;
        cout<<"Please re-enter the position you want to clear."<<endl;
        x=getRow(rows);
        y=getCol(COLS);
    }
    //Set the position to 0
    a[x-1][y-1]=0;
    //Print out the new array
    prntAry(a,rows);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************    isNumberOnce   **********************************
//Purpose:  Check the value is already exist or not                            *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  rows->The rows of the array                                                *
//  x->The row of position the user enter in                                   *
//  y->The column of position the user enter in                                *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the boolean found                                                   *
//******************************************************************************

bool isNumberRepeat(int a[][COLS], int rows, int x, int y){
    //Declaration the variables
    int times=0; //The times one number displays
    bool found=false; //Set the flag
    for(int i=0; i<rows; i++){
        for(int j=0; j<COLS; j++){
                if(a[x-1][y-1]==a[i][j]){
                    times++;
            }
        }
    }if(times!=1) found=true;
    //Finish and return the found
    return found;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************    getNumber   *************************************
//Purpose:  Let the user enter in a value for answer                           *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  x->The row of position the user enter in                                   *
//  y->The column of position the user enter in                                *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Saving the value in array                                                  *
//******************************************************************************

void getNumber(int a[][COLS], int x, int y){
        cout<<"Please enter in a number you want put in ("<<x<<","<<y<<") : ";
        cin>>a[x-1][y-1];
    while(a[x-1][y-1]<=0||a[x-1][y-1]>9){
        cout<<"Wrong number, re-enter : ";
        cin>>a[x-1][y-1];
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//***********************    isPositionHasNum   ********************************
//Purpose:  Check whether position which the user want to enter in an answer   *
//          has value or not                                                   *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  x->The row of position the user enter in                                   *
//  y->The column of position the user enter in                                *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the boolean flag                                                    *
//******************************************************************************

bool isPositionHasNum(int a[][COLS], int x, int y){
    bool flag=false;  //Set the flag holding true and false
    //if the position is not 0, then the position has a number
    if(a[x-1][y-1]!=0) flag=true;
    //Finish and return flag
    return flag;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**************************    getCol   ***************************************
//Purpose:  Let the user enter in the column of position for answer            *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  COLS->The column of answer array                                           *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the column of position the user want to enter in a answer           *
//******************************************************************************

int getCol(int COLS){
    //Declaration the Variables
    int col; //The number of column
    //Input the column
    cout<<"Please enter in the number of column : ";
    cin>>col;
    //check the range
    while(col<1||col>COLS){
        cout<<"Wrong number for column, re-enter in number (1,2,3): ";
        cin>>col;
    }
    //Return the value of column
    return col;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**************************    getCol   ***************************************
//Purpose:  Let the user enter in the row of position for answer               *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  rows->The row of answer array                                              *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Return the row of position the user want to enter in a answer              *
//******************************************************************************

int getRow(int rows){
    //Declaration the Variables
    int row; //The number of row
    //Input the number of row
    cout<<"Please enter in the number of row : ";
    cin>>row;
    //check the range
    while(row<1||row>rows){
        cout<<"Wrong number for row, re-enter in number (1,2,3): ";
        cin>>row;
    }
    //Return the value of row
    return row;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************    prntAry   ***************************************
//Purpose:  Display the answer array                                           *
//Inputs:   Inputs to the function here -> Description, Range, Units           *
//  a[][COLS]->The integer array holding with answer                           *
//  row->The row of answer array                                               *
//Output:   Outputs to the function here -> Description, Range, Units          *
//  Print out the answer array                                                 *
//******************************************************************************

void prntAry(int a[][COLS], int row){
    //display the array
    cout<<"┏━━━┳━━━┳━━━┓"<<endl;
    for(int i=0; i<row; i++){
        if(i!=0) cout<<"┣━━━╋━━━╋━━━┫"<<endl;
        for(int j=0; j<COLS; j++){
            if(a[i][j]==0) cout<<"┃   ";
            else cout<<"┃ "<<a[i][j]<<" ";
            if(j%3==2) cout<<"┃"<<endl;
        }
    }cout<<"┗━━━┻━━━┻━━━┛"<<endl;
    cout<<endl;
}



