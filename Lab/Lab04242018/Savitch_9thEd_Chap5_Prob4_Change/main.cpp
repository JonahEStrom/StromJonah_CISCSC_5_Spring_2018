/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on April 24, 2018 12:21 PM
 * Purpose:  Calculate change
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int DOLRSPN=100;//100
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;
//Function Prototypes Here
int numCoin(int,int);//Calculates number of coins
int rmnder(int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float price,amtTndr;
    int pennies,n25,n10,n5,n1;
    
    //Initialization
    price=9.14f;
    amtTndr=10.00f;
    
    //Output initial variables
    pennies=(amtTndr-price+0.005)*DOLRSPN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price = $"<<price<<endl;
    cout<<"Amount tendered = $"<<amtTndr<<endl;
    cout<<"Change returned "<<pennies<<endl;
    
    //Calculate minimum amount of change
    pennies=(amtTndr-price)*DOLRSPN;
    n25=numCoin(pennies,QUARTER);
    pennies=rmnder(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=rmnder(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=rmnder(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=rmnder(pennies,PENNY);
    
    //Output Located Here
    cout<<"Number of Quarters = "<<n25<<endl;
    cout<<"Number of Dimes    = "<<n10<<endl;
    cout<<"Number of Nickels  = "<<n5<<endl;
    cout<<"Number of Pennies  = "<<n1<<endl;
    

    //Exit
    return 0;
}
//334567890123456789012345678901234567890123456789012345678901234567890123456789
//334567890123456789012345678901234567890123456789012345678901234567890123456789
//                              Future Value Functions
//Inputs:
//  pv -> present value in $'s
//  ir -> interest rate in decimal value
//  n  -> number of compounding periods (yrs)
//Outputs:
//  fv -> future value in $'s
//334567890123456789012345678901234567890123456789012345678901234567890123456789
//334567890123456789012345678901234567890123456789012345678901234567890123456789

//Calculate the remainder
int rmnder(int pennies, int denom){
    return pennies-numCoin(pennies,denom)*denom;
}

//Calculate the number of Coins of that denomination
int numCoin(int pennies,int denom){
    return pennies/denom;
}