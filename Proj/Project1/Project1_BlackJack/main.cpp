/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 27, 2016, 7:07 PM
 * Purpose: Make a Poker Game (Black Jack)
 */

#include<iostream> //Input and output
#include<fstream>  //I/O file
#include<string>
#include<cstdlib>  //For the random number
#include<ctime>    //Time

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int sendCard(int);
bool cardIsempty(int);
void write(ofstream &outfile, int, int, int, int, int);
void read();
int choosRole();
void playingGame(ofstream &outfile);
void gameEngine();

//**************************************************************
// Main function here!!                                        *
//**************************************************************
int main(int argc, char** argv){
    gameEngine();
    return 0;
}

//**************************************************************
// Definition of function sendCard                             *
// This function limit the number and kind of card             *
//**************************************************************
int sendCard(int *cards){
    int cardIndex;
    while (true){	
        //Produce a random number
        cardIndex=rand() % 13;
        //Determine whether the same point card exits
        if (cards[cardIndex]>0){
            cards[cardIndex]--;
            break;
        }
    }
    return (cardIndex+1);
}

//**************************************************************
// Definition of function cardIsempty                          *
// This function determine whether here is no card for total   *
// and the each kind of card                                   *
//**************************************************************
bool cardIsempty(int *cards){
    bool flag=true;
    for (int i=0; i<13; i++){
        if (cards[i]>0){
            flag=false;
            break;
        }
    }
    return flag;
}
//**************************************************************
// Definition of function write                                *
// This function Output the result and data to a file,         *
// and determine the winner                                    *
//**************************************************************
void write(ofstream &outfile, int round,int computerCount,int *computer,int playerCount,int *player){
    if (!outfile){
        cout<<"Open file failed!"<<endl;
        exit(0);
    }
    else{
        int sum_computer=0;
        int sum_player=0;
	//Output the round number
        outfile<<"*****round"<<round<<"******\n";
        outfile<<"Computer:\t";
	//Output the card number each time for computer
        for (int i=0; i<computerCount; i++){
            sum_computer+=computer[i];
            outfile<<computer[i]<<"\t";
        }
        outfile<<"\n";
        outfile<<"Player  :\t";
	//Output the card number each time for player
        for (int i=0; i<playerCount; i++){
            sum_player+=player[i];
            outfile<<player[i]<<"\t";
        }
        outfile<<"\n";
        outfile<<"results:\t";
	//Determine the result and display it
        if (sum_computer>21 && sum_player>21) 
            outfile<<"Computer and Player are both explode!\n";
        else if (sum_computer<=21 && sum_player>21) outfile<<"Computer wins!\n";
        else if (sum_computer>21 && sum_player<=21) outfile<<"Player wins!\n";
        else if (sum_computer<sum_player) outfile<<"Player wins!\n";
        else if (sum_computer>sum_player) outfile<<"Computer wins!\n";
        else if (sum_computer==sum_player) outfile<<"No one wins!\n";
    }
}

//**************************************************************
// Definition of function read                                 *
// This function read the data from the file                   *
//**************************************************************
void read(){
    ifstream infile;
    infile.open("records.txt");
    if (!infile){
        cout<<"Open file failed!"<<endl;
        exit(0);
    }
    else{
        string str;
        while(!infile.eof()){
            getline(infile, str);
            if(str=="") break;
            else cout<<str<<endl;
        }
        infile.close();
    }
}

//**************************************************************
// Definition of function choosRole                            *
// This function show the menu and return a mode               *
//**************************************************************
int choosRole(){
    int choice;
    //Display the menu
    cout<<"Welcome to play the Black Jack Game (21 Points Game)"<<endl;
    cout<<"Please enter in a number to choose the mode:"<<endl;
    cout<<"1.Normal Player ( NORMAL )"<<endl;
    cout<<"2.Super  Player (  EASY  )"<<endl;
    cout<<"3.Get model introduction"<<endl;
    cout<<"4.Quit the game"<<endl;
    cin>>choice;
    while(choice<1||choice>4){
        cout<<"Wrong choice, re-enter : ";
        cin>>choice;
    }
    do{
        switch(choice){
            case 1: choice=1;break;
            case 2: choice=2;break;
            case 3:{
                cout<<"Normal mode: You can not know the card number when you deciding"<<
                      "choose or not."<<endl;
                cout<<"Super mode: You can see the card number before you deciding"<<endl;
                cout<<endl;
                cout<<"Please enter in a number to choose the mode:"<<endl;
                cout<<"1.Normal Player ( NORMAL )"<<endl;
                cout<<"2.Super  Player (  EASY  )"<<endl;
                cout<<"3.Get model introduction"<<endl;
                cout<<"4.Quit the game"<<endl;
                cin>>choice;
                while(choice<1||choice>4){
                    cout<<"Wrong choice, re-enter : ";
                    cin>>choice;
                }
            }break;
            case 4: exit(0);
        }
    }while(choice!=1&&choice!=2);
    
    
    return choice;
}

//**************************************************************
// Definition of function playingGame                          *
// This function send the card to computer and player,         *
// and determine whether choose or not the card for each time  *
//**************************************************************
void playingGame(ofstream &outfile){
    int tmp_card; //Temporary card number
    char choice; 
    int card_count=0; //The times of send card
    int sum_computer,sum_player; //The total number in hand for both
    int role; //chose the mode
    //Declaration the Variables
    int cards[13]={4,4,4,4,4,4,4,4,4,4,4,4,4}; //The 13 kinds of poker and each for 4, no joker
    int computer[24];
    int computerCount=0; //The number of computer get card
    int player[24];
    int playerCount=0;   //The number of player get card
    int rounds=0;      //Set the round
    role=choosRole();
    cout<<"** Start the new round."<<endl;
    srand((unsigned)time(NULL)); //Set the seed for the random number
    while (!cardIsempty(cards)){ //Call the cardIsempty function
        card_count=0; 
        sum_computer=0; 
        sum_player=0;  
        while (card_count<4){	
            cout << "** Send computer the card.\n";
            tmp_card=sendCard(cards); //Call the sendCard function
            if (sum_computer+tmp_card<=21){
                sum_computer+=tmp_card; //Call the sendCard function
                computer[computerCount]=tmp_card;
                computerCount++;
            }
            cout<<"** Send player the card.\n";
            tmp_card=sendCard(cards); //Call the sendCard function		
            cout<<"** The sum of cards in hand is: "<<sum_player<<endl;
            if(role==2){
                cout<<"Enter Y to see the card, or any key to deny this:";
                cin>>choice;
                if(choice=='Y'||choice=='y')
                    cout<<"** The card is "<<tmp_card<<endl;	
            }
            cout << "Enter Y to choose the card, or any key to deny the card:";
            cin >> choice;
            if (choice=='Y'||choice=='y'){
                sum_player+=tmp_card;
                player[playerCount]=tmp_card;
                playerCount++;
            }
            card_count++;
        }
        rounds++;
        write(outfile,rounds,computerCount,computer,playerCount,player);
        cout<<"This round ends."<<endl;
        cout<<"Enter Y to continue play, or Any key to stop the game and see the result:";
        cin>>choice;
        if (choice=='Y'||choice=='y'){
            computerCount=0;
            playerCount=0;
            for(int j=0; j<24; j++){
		computer[j]=0;
		player[j]=0;
            }
            for(int j=0; j<13; j++){
		cards[j]=4;
		card_count=0;
                continue;
            }
        }
        else break;
    }
}

//**************************************************************
// Definition of function gameEngine                           *
//**************************************************************
void gameEngine(){
    ofstream outfile;
    outfile.open("records.txt");
    if (!outfile){
        cout<<"Open file failed!"<<endl;
        exit(0);
    }
    else{
        playingGame(outfile);
        outfile.close();
        read();
    }
}



