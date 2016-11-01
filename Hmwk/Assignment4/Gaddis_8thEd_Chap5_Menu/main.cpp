/* 
   File:   main
   Author: WeikangDu
   Created on October 17, 7.52 PM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <cmath> 
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PENNY=0.01f; //One penny equal to 0.01 dollar.
const int PERCENT=100; //Pecentage
const float MONTH_PER_YEAR=12.0;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1  : SumNumbers"<<endl;
        cout<<"2.  Type 2  for Problem 3  : OceanLevels"<<endl;
        cout<<"3.  Type 3  for Problem 7  : PenniesforPay"<<endl;
        cout<<"4.  Type 4  for Problem 9  : HotelOccupancy"<<endl;
        cout<<"5.  Type 5  for Problem 10 : AverageRainfall"<<endl;
        cout<<"6.  Type 6  for Problem 13 : GreatestAndLeast"<<endl;
        cout<<"7.  Type 7  for Problem 14 : StudentLineUp"<<endl;
        cout<<"8.  Type 8  for Problem 16 : SavingAccountBalance"<<endl;
        cout<<"9.  Type 9  for Problem 17 : SalesBarChart"<<endl;
        cout<<"10. Type 10 for Problem 22 : SquareDisplay"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"SumNumbers"<<endl;
                //Declare all Variables Here
                int maxNum;
                int sum=0;

                //Input or initialize values Here
                cout<<"This program will sum all integer from 1 to the number the user enter in."<<endl;
                cout<<"Please enter in a positive integer number"<<endl;
                cin>>maxNum; //Asking for a ending number
                //Determine the valid number
                while (maxNum<0) {
                    cout<<"Bad Number!! You can not enter in a negative number; re-enter:"<<endl;
                    cin>>maxNum;
                }
                //Process/Calculations Here
                for(int count=1;count<=maxNum;count++){
                    sum+=count;
                }
                //Output Located Here
                cout<<"The sum of number 1 to "<<maxNum<<" is "<<sum<<endl;
                   

                break;
            }
            case 2:{
                cout<<"OceanLevels"<<endl;
                //Declare all Variables Here
                float rate = 1.5f; //Ocean's level is currently rising at 1.5 mm per year
                int year=1;
                float rise; //The Rising in mm
                //Display the header for the table
                cout<<"YEAR"<<"\t\t"<<"RISING IN MM"<<endl;
                //Process/Calculations Here
                do{
                   rise=year*rate;      //Calculate for the Rising
                   cout<<year<<"\t\t"<<rise<<" mm"<<endl;
                   year++;
                }while (year<=25);
                break;
            }
            case 3:{
                cout<<"PenniesforPay"<<endl;
                //Declare all Variables Here
                int days; // The number of days the user worked.
                int day; //For the counter
                float dayPay; //The amount of pay for user for each day 
                float tot=0.0f; //The total amount of the user earned.

                //Input the Values
                cout<<"This Program will calculate your salary for each day and total\n\n";
                cout<<"Please enter in a number of days you worked."<<endl;
                cin>>days; //Ask for input

                //Determine the valid values and output
                while (days<1){
                    cout<<"The number of days can not be less than 1, re-enter:"<<endl;
                    cin>>days;
                }
                for(day=1;day<=days;day++)
                {
                    cout<<"Number of day"<<"\t\t"<<"Amount of earned"<<endl;
                    dayPay=PENNY*pow(2,day-1);
                    cout<<day<<"\t\t\t\t"<<dayPay<<endl;
                    tot+=dayPay;
                    cout<<setprecision(2)<<fixed<<showpoint;
                    cout<<"The total amount is "<<tot<<" dollars"<<endl;
                }

                break;
            }
            case 4:{
                cout<<"HotelOccupancy"<<endl;
                //Declaration of Variables
                int nFloors; //The number of floor the hotel has
                int floor; //Each floor for counter
                int nOcup; //The number of room was occupied
                int nRoom; //The number of room for each floor
                int totRoom=0; //The total number of room the hotel has
                int totOcup=0; //The total number of room is occupied
                int totUnocup=0; //The total number of room is not occupied
                float Rate; //The rate of unoccupied


                //Input values

                cout<<"How many floors in the hotel?"<<endl;
                cin>>nFloors;
                //Determine the value
                while (nFloors<1){
                    cout<<"The number of floors can not less than 1"<<endl;
                    cin>>nFloors;
                }
                for (floor=1;floor<=nFloors;floor++){
                    if(floor==13)
                        continue;
                    cout<<"How many rooms in "<<floor<<" floor"<<endl;
                    cin>>nRoom;
                    while (nRoom<10){
                        cout<<"The number of room must be large than 10"<<endl;
                        cin>>nRoom;
                    }
                    totRoom+=nRoom;
                    cout<<"How many rooms were occupied in this floor?"<<endl;
                    cin>>nOcup;
                    while (nOcup<0&&nOcup>nRoom){
                        cout<<"The number of occupied room must be 0 to "<<nRoom<<endl;
                        cin>>nOcup;
                    }
                    totOcup+=nOcup;
                }
                totUnocup=totRoom-totOcup;
                Rate=static_cast<float>(totOcup)/totRoom*PERCENT;
                //Display Output
                cout<<"There are "<<totRoom<<" rooms in this hotel"<<endl;
                cout<<"There are "<<nOcup<<" rooms were occupied"<<endl;
                cout<<"There are "<<totUnocup<<" rooms are not occupied"<<endl;
                cout<<"The percent of occupied room is "<<Rate<<" %"<<endl;
                break;
            }
            case 5:{
                cout<<"AverageRainfall"<<endl;
                //Declaration
                int years; //The number of year for period
                int i, mon; //The counter
                float rainF; //The rainfall in inches
                int tot=0, totMon;//The total of rainfall and the total number of month
                float ave; //The average rainfall for each month
                //Input Value
                cout<<"Please enter a number of year you want to calculate the rainfall"<<endl;
                cin>>years;
                while(years<1){
                    cout<<"The number of year must be large than 1"<<endl;
                    cin>>years;
                }
                for(i=1;i<=years;i++){
                    for(mon=1;mon<=12;mon++){
                        cout<<"Please enter in a number of inch of rianfall for No."<<mon<<" month in No."<<i<<" year"<<endl;
                        cin>>rainF;
                        while(rainF<0){
                            cout<<"The rainfall can not be negative"<<endl;
                            cin>>rainF;

                        }
                        tot+=rainF;
                    }
                }
                //process
                totMon=12*years;

                ave=static_cast<float>(tot)/totMon;
                cout<<"The average Rainfall is "<<ave<<" inches"<<endl;
                break;
            }
            case 6:{
                cout<<"GreatestAndLeast"<<endl;
                //Declaration the Variable
                int count; //The counter
                int num; //the number the user enter in
                int gNum, lNum; //The greatest number of the least number
                //Input value
                cout<<"The programs will display the greatest number and least number"<<endl;
                cout<<"\nPlease enter in a number; if you want to stop, enter -99"<<endl;
                cin>>num;

                    gNum=num;
                    lNum=num;

                while(num!=-99){
                    cout<<"Please enter in a number; if you want to stop, enter -99"<<endl;
                    cin>>num;
                    if (num!=-99){
                        if (num>gNum)
                            gNum=num;
                        if (num<gNum)
                            lNum=num;
                    }
                }
                //Output

                        cout<<"The greatest number is "<<gNum<<endl;
                        cout<<"The least number is "<<lNum<<endl;
                break;
            }
            case 7:{
                cout<<"StudentLineUp"<<endl;
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
                break;
            }
            case 8:{
                cout<<"SavingAccountBalance"<<endl;
                //Declaration variable
                int mon; //for the counter
                float AIR; //annual interest rate
                float Ban; //The balance
                int mons; //The number of month
                float dep, wdraw, monI, totI=0, eBan, totD=0, totW=0; //Deposit for month, withdraw for month
                //monthly interest, total interest, ending balance, total deposit, total withdraw
                float MAIR; // Monthly annual interest rate
                //Input

                cout<<setprecision(2)<<fixed<<showpoint;
                MAIR=AIR/MONTH_PER_YEAR;
                cout<<"Please enter in the number for annual interest rate"<<endl;
                cin>>AIR;
                while (AIR<0){
                    cout<<"The number of annual interest rate can not be negative, re-enter:"<<endl;
                    cin>>AIR;
                }
                cout<<"Please enter in a number of starting banlance"<<endl;
                cin>>Ban;
                while (Ban<0){
                    cout<<"The balance can not be nagative, re-enter:"<<endl;
                    cin>>Ban;
                }
                cout<<"Please enter in a number for month"<<endl;
                cin>>mons;
                while (mons<0){
                    cout<<"The month can not be negative, re-enter:"<<endl;
                    cin>>mons;
                }
                for (mon=1;mon<=mons;mon++){
                    cout<<"The amount you deposited in $ :"<<endl;
                    cin>>dep;
                    while(dep<0){
                        cout<<"The deposit number can not be negative"<<endl;
                        cin>>dep;
                    }
                    cout<<"The amount you withdraw in $ :"<<endl;
                    cin>>wdraw;
                    while(wdraw<0){
                        cout<<"The withdraw number can not be nagative"<<endl;
                        cin>>wdraw;
                    }
                    //calculate
                    Ban+=dep;
                    Ban-=wdraw;
                    monI=Ban*MAIR;
                    totD+=dep;
                    totW+=wdraw;
                    MAIR=static_cast<float>(AIR)/MONTH_PER_YEAR;
                    if (Ban<0){
                        cout<<"The account has a balance of "<<Ban<<endl;
                        cout<<"Because the balance is negative";
                        cout<<"The program closed.";break;
                    }

                    totI+=monI;
                    Ban+=monI;
                }
                //Display output
                cout<<MAIR<<"\t"<<monI<<endl;
                cout<<"The ending banlance is "<<Ban<<" $"<<endl;
                cout<<"The amount of deposit is "<<totD<<" $"<<endl;
                cout<<"The amount of withdraw is "<<totW<<" $"<<endl;
                cout<<"The amount of interest earned is "<<totI<<" $"<<endl;
                break;
            }
            case 9:{
                cout<<"SalesBarChart"<<endl;
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

                break;
            }
            case 10:{
                cout<<"SquareDisplay"<<endl;
                //Declaration the variables
            char a='X';//The signal for the square
            int num; //The number for square
            //Input
            cout<<"Please enter in a integer number"<<endl;
            cin>>num;
            //Process and output

            for (int n=1; n<=num; n++){
                for(int n=1; n<=num; n++)
                cout<<a;
                cout<<endl;
            }
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}