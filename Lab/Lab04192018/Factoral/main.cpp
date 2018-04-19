/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n,fctrl;
    
    //Input or initialize values Here
    fctrl=1;
    n=10;
    
    //Process/Calculations Here
    for(int i=1;i<=n;i++){
        fctrl*=i;
    }
    //Output Located Here
    cout<<n<<"! = "<<fctrl<<endl;

    //Exit
    return 0;
}

