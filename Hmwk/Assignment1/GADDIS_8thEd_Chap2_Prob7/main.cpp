/* 
 * File:   main.cpp
 * Author: WeikangDu
 *
 * Created on September 13, 2016, 11:48 AM
 * Purpose: Calculate for How high will it rise after N years
 */

#include <iostream>

using namespace std;

const float CNVMMFT=304.8f; //Conversion milimeters to feet from Google
const float CNVMMM=1000.0f; //Conversion from milimeters to meters
int main(int argc, char** argv) {
    float rate=1.5f;//Sea level rise in mm/year
    int nYear1=5, nYear2=7, nYear3=10;//Years to calculate rise
    float rise1, rise2, rise3; //Solutions for the 3 year from above
    int nYrBch; //Number of years before your home is beach front property
    float elevRiv=860.0f; //Elevation of Riverside in feet according to Wikipedia
    
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    cout<<"The rate of sea1 level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise"<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise"<<rise2<<" mm"<<endl;\
    cout<<"After "<<nYear3<<" years the sea will rise"<<rise3<<" mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;
    
    return 0;
}

