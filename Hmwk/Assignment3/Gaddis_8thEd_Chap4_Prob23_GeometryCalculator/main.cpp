
/* 
 * File:   main.cpp
 * Author: WeikangDu
 * Created on October 4, 2016, 8:42 PM
 * Purpose: Menu
 */

#include <iostream>
#include <cmath>

using namespace std;
//User Libraries

// Constants
const float PI=4*atan(1.0);

//Function prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    
    //Declaration Variables
    int choice;
    float r, L, W, B, H, areaC, areaR, areaT;
    //Process
    
    
    cout<<"Geometry Calculator"<<endl;
    cout<<"         1. Calculate the Area of a Circle"<<endl;
    cout<<"         2. Calculate the Area of a Rectangle"<<endl;
    cout<<"         3. Calculate the Area of a Triangle"<<endl;
    cout<<"         4. Quit"<<endl;
    cout<<"Enter your choice (1-4)"<<endl;
    cin>>choice;
    
    switch (choice){
        case 1 :
            cout<<"Enter in the radius of circle"<<endl;
            cin>>r;
            if (r<0)
                cout<<"The radius can not be a nagetive number"<<endl;
            else{
                areaC = PI * pow(r,2);
                cout<<"The area of this circle is "<<areaC<<endl;
            }
            break;
        case 2:
            cout<<"Enter a number for the length of rectangle"<<endl;
            cin>>L;
            if (L<0)
                cout<<"The length can not be a negative number"<<endl;
            else{
                cout<<"Enter a number for the width of rectangle"<<endl;
                cin>>W;
                if (W<0)
                    cout<<"The width can not be a negative number"<<endl;
                else{
                    areaR=L*W;
                    cout<<"The area of this rectangle is "<<areaR<<endl;
                }
            }
            break;
        case 3:
            cout<<"Plese enter in a number for the high of triangle"<<endl;
            cin>>H;
            if (H<0)
                cout<<"The high can not be a negative number"<<endl;
            else{
                cout<<"Enter in a number for the base"<<endl;
                cin>>B;
                if (B<0)
                    cout<<"The base can not be a negative number"<<endl;
                else{
                    areaT=(B*H)/2;
                    cout<<"The area of this triangle is "<<areaT<<endl;
                }
            }
            break;
        case 4: cout<<"End of this program!"<<endl;break;
        default:
            cout<<"Wrong choice, you must choose the choice in the menu"<<endl;
            
    }
            
                
            

    return 0;
}

