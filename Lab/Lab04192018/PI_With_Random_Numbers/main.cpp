/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on July 19, 2016, 9:07 AM
 * Purpose: Random Numbers used in approximating PI
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
const float MXRND=pow(2,31)-1;
const float PI=4*atan(1);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float apprxPI;
    int nDarts;
    int inCrcl;
    
    //Input or initialize values Here
    inCrcl=0;
    nDarts=1000;
    
    //Process/Calculations Here
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;
        float y=rand()/MXRND;
        if(x*x+y*y<=1)inCrcl++;
    }
    apprxPI=4.0f*inCrcl/nDarts;
    
    //Output Located Here
    cout<<"After "<<nDarts
            <<" terms the Approximate Value of pi = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;

    //Exit
    return 0;
}

