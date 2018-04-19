/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
const float PI=4*atan(1);//Definition of PI
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float apprxPI;//Approximate value of PI given # terms in sequence
    int nTerms;//Number of terms used in sequence
    
    //Input or initialize values Here
    apprxPI=0;
    nTerms=100;
    
    //Process/Calculations Here
    for(int sign=-1,term=1,cntr=1;term<=nTerms;term++,cntr+=2){
        sign*=-1;//Flip the sign
        apprxPI+=(static_cast<float>(sign)/cntr);//atan(1)
    }
    apprxPI*=4;//Approximates PI
    
    //Output Located Here
    cout<<"After "<<nTerms
            <<" terms the Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    //Exit
    return 0;
}

