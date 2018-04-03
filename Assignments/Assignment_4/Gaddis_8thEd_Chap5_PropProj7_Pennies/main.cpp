/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on April 3rd, 2018 1:12 PM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int totpay, penny, numDays;
    
    //Input or initialize values Here
    cout<<"How many days do you want? "<<endl;
    cin>>numDays;
    totpay=0;
    penny=1;
    
    //Process/Calculations Here
    

    cout<<"Day   Pay   Total"<<endl;
   for(int count=1;count<=numDays;count++)
   {
       cout<<count<<"     "<<penny/100<<"     "<<totpay/100<<endl;
       penny*=2;
       totpay+=penny;
   }
    //Output Located Here


    //Exit
    return 0;
}
