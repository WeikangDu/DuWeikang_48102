/* 
 * File:   main.cpp
 * Author: Weikang Du
 * Created on September 20, 2016, 12:12 PM
 * Purpose: Use trigonometric functions
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Constants

const float PI = 4 * atan(1.0); //PI
const float CNVDEGR = PI / 180; //Conversion from degree to radians

int main(int argc, char** argv) {

    //Declaration of Variables 
    float deg, radians;

    //Input Values
    deg = 0;
    radians = deg*CNVDEGR;

    //Display Output
    cout << "[ Degrees, Radians,    Sine,  Cosine, Tangent]" << endl;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;

    deg += 5;
    cout << fixed << showpoint << setprecision(5);
    cout << "[" << setw(8) << deg << "," << setw(8) << radians
            << "," << setw(8) << sin(radians) << "," << setw(8) << cos(radians)
            << "," << setw(8) << tan(radians) << "]" << endl;



    return 0;
}

