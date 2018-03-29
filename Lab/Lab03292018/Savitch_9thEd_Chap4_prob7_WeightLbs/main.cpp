/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on March 29, 2018 12:03 PM
 * Purpose:  Calculation
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=6.673e-8;//cm^3/g/sec^2
const float CMMTRS=0.01;//centimeters to meters
const float MTRSFT=3.281f;//meters to feet
const float LBSLUG=32.174f;//slug to pound

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float myMass, msEarth, rEarth, myWt, myWtCnv;
    
    //Input or initialize values Here
    myMass=6;//6 slugs * conversion
    myWtCnv=myMass*LBSLUG;//conversion
    msEarth=5.972e27f;//grams
    rEarth=6.371e6f;//meters
    
    //Process/Calculations Here
    myWt=GRAVITY*CMMTRS*CMMTRS*CMMTRS
            *myMass*msEarth*MTRSFT/(rEarth*rEarth);
    
    //Output Located Here
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
    //Exit
    return 0;
}

