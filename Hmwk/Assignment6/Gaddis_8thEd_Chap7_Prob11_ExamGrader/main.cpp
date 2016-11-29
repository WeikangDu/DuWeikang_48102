/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on November 18, 2016, 7:08 PM
 */

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
//User
//Global constants
const int SIZE=20;
//Function prototypes
void readFile(char[], char[], int);
void compareAnswers(char[], char[], int, int &);
void displayTestResults(int, int);
//The program begin here!
int main()
{
    //Declaration
    int numMissed;
    char correct[SIZE];
    char student[SIZE];
    //Read
    readFile("CorrectAnswers.txt", correct, SIZE);
    //Read
    readFile("StudentAnswers.txt", student, SIZE);
    //Determine
    compareAnswers(student, correct, SIZE, numMissed);
    // Display
    displayTestResults(numMissed, SIZE);

    return 0;
}


void readFile(char filename[], char values[], int size)
{
    //Declaration
    int count = 0;
    ifstream inFile;
    //Open the file
    inFile.open(filename);
    //Read
    for(int i=0; i<size; i++){
        inFile>>values[i];
    }
    //Close
    inFile.close();
}


void compareAnswers(char student[], char correct[], int size, int &numMissed)
{
    //Declaration
    numMissed=0;
    for (int i=0; i< size; i++)
    {
        if (student[i] != correct[i])
        {
            numMissed++;
            cout << "Missed question #"<<(i+1)
                 <<" Student's answer: "<<student[i]
                 <<" Correct answer: "<<correct[i]<<endl;
        }
    }
}


void displayTestResults(int numMissed, int numQuestions)
{
    int correctlyAnswered=numQuestions-numMissed;
    float score=static_cast<float>(correctlyAnswered) / numQuestions;
    cout<<"Number of correct answers: "<<correctlyAnswered<< endl;
    cout<<"Percentage answered correctly: "<<setprecision(2)<< fixed<<showpoint
             <<(score*100)<<"%\n";
    //Display
    if(score>=0.70)
        cout<<"The student passed the exam"<<endl;
    else
        cout<<"The student failed the exam"<<endl;
}
