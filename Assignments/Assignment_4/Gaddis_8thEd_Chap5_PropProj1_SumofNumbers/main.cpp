/* 
 * File:   Gaddis_Chap5_ProgProj1_SumofNumbers.cpp
 * Author: Jonah Strom
 * Created on March 28, 2018 at 12:38 PM
 * Purpose:  Calculate the sum of the number entered
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
    int loop, num, sum;
    
    //Input or initialize values Here
    loop=1; // Have it initialized to one, not zero as per the instruction 
    cout<<"This program will take your number then use loop to get the"
            " 2sum of all the integers from 1 up to the "
            "number entered"<<endl;
    cout<<"Input your number: ";
    cin>>num; // This is to determine how many times loop function will loop       
    
    //Process/Calculations Here
    if(num<=0)
        cout<<"Please enter a positive integer, not including zero"<<endl;
    // To check if the entered number is positive or not, if it is not positive
    // then the sum will just display zero and then urge the user to try again
    while(loop<=num){
        cout<<loop; // display every integers from 1 up to the entered number
        cout<<" "; // create a space between displayed integers
        sum=loop+sum; // calculation for the sum 
        loop++; // add one to the loop value before looping again
    }
    cout<<" "<<endl; // break from the displayed integers
    
    //Output Located Here
    cout<<"The total sum of the number entered is: ";
    cout<<sum; // Display the final sum

    //Exit
    return 0;
}

