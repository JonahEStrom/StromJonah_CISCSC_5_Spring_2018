/* 
 * File:   Sales Bar Chart.cpp
 * Author: Jonah Strom
 * Created on April 2, 2018 10:45 PM
 * Purpose: Chart Stores' Sales
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
    float number, grpay, statetax, fedtax, fica, count, total;
    
    //Input or initialize values Here
    cout<<"Enter employee number here: ";
    cin>>number;
        if(number=0){
        cout<<"Loop terminated"<<endl;
        }
        else if(number>0){
    cout<<"Enter gross pay here: ";
    cin>>grpay;
    cout<<"Enter state tax here: ";
    cin>>statetax;
    cout<<"Enter federal tax here: ";
    cin>>fedtax;
    cout<<"Enter FICA witholdings here: ";
    cin>>fica;
        }
        
    //Process/Calculations Here

    
 
    //Output Located Here


    //Exit
    return 0;
}

