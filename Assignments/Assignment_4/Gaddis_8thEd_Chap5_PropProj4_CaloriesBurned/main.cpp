/* 
 * File:   Ocean level.cpp
 * Author: Jonah Strom
 * Created on April 2, 2018 10:45 PM
 * Purpose:  Calculate rising ocean
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
    int minute, count;
    float calorie;         // use float because of decimals
    
    //Input or initialize values Here
    minute=30;             // 30 minutes as per the instruction
    calorie=0;             // calorie first set at zero
    count=0;               // initialize the loop counter as zero
    
    //Process/Calculations Here
    cout<<"The timer is set at "<<calorie<<" minute(s)"<<endl;
    while(count<=minute){  // set condition to check if count is not above 30
        calorie+=3.6;      // increase calorie by 3.6 per five minute of running
        cout<<calorie<<" calories burned in the end of "<<count<<" minutes"<<endl;
        count+=5;          // add one to the counter per year to complete the loop
    }
    
    //Output Located Here
    cout<<"\n";
    cout<<calorie<<" calories burned after 30 minutes of running"<<endl;

    //Exit
    return 0;
}

