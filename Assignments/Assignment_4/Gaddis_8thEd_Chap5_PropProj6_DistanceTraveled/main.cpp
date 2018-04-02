/* 
 * File:   Distance Traveled.cpp
 * Author: Jonah Strom
 * Created on April 2, 2018 10:45 PM
 * Purpose:  Calculate distance
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
    float speed, hours, distanc, count;
    
    //Input or initialize values Here
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    cout<<"How many hours has it traveled? ";
    cin>>hours;
    count=1;
    
    //Process/Calculations Here
    cout<<"--------------------------"<<endl;
    cout<<"Hour"<<"       "<<"Distance Traveled"<<endl;
    while(count<=hours){   
        distanc=speed*count;
        cout<<count<<" mph"<<"      "<<distanc<<" miles"<<endl;
        count++;
    }
    //Output Located Here

    //Exit
    return 0;
}

