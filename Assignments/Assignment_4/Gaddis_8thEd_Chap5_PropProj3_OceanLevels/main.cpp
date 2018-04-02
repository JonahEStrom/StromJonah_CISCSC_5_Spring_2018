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
    float ocean;         // use float because of decimals
    int years, count;    // count is the counter for the while loop function
    
    //Input or initialize values Here
    ocean=0;             // starts at zero
    years=25;            // the counter is set to 25 years or 25 loops
    count=0;             // initialize the loop counter as zero
    
    //Process/Calculations Here
    cout<<"Ocean's level starts at "<<ocean<<" millimeters"<<endl;
    while(count<=years){ // set condition to check if count is not above 25
        ocean+=1.5;      // increase ocean's level by 1.5 millimeters per year
        cout<<ocean<<" millimeters"<<" in the year of "<<count<<endl;
        count++;         // add one to the counter per year to complete the loop
    }
    
    //Output Located Here
    cout<<"\n";
    cout<<"Ocean's level at the end of 25 years is "<<ocean<<" millimeters"<<endl;

    //Exit
    return 0;
}

