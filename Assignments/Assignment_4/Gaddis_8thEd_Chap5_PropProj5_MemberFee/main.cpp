/* 
 * File:   Membership Fee.cpp
 * Author: Jonah Strom
 * Created on April 2, 2018 10:45 PM
 * Purpose:  Calculate Membership Fees increase
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
    float member, fee, years, count;
    
    //Input or initialize values Here
    years=6;                       
    count=1;
    member=2500;
    
    //Process/Calculations Here
    cout<<"Membership rate starts at $2500 per year\n"
            "and will continue to increase by 4% per year"<<endl;
    cout<<"\n";
    while(count<=years){
        fee=0.04;
        cout<<"$"<<member<<" in "<<count<<" year"<<endl;
        member+=member*fee;
        count++;
    }
    //Output Located Here
    cout<<"\n";
    cout<<"Membership rate per year at the end of six years will be $"<<member<<endl;

    //Exit
    return 0;
}

