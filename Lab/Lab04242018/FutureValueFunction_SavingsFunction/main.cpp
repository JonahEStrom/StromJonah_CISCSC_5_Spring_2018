/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Initial Savings Funtion
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float CNVPERC=1e2f;//100
//Function Prototypes Here
float fvall(float,float,int);//Future Value with Power Function
float fval2(float,float,int);//Future Value with Log/Exp
float fval3(float,float,int);//Future Value with for-loop
float fval4(float,float,int);//Future Value by recursion
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float presVal,//Present Value in $'s
          intRate;//Interest rate in %
    int   numCmp; //Number of compounding periods in years
    //Input or initialize values Here
    presVal=1e2f;//$100's
    intRate=6;   //6 per cent
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<presVal<<endl;
    cout<<"Interest Rate = "<<intRate<<"%"<<endl;
    cout<<"Number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Savings using FV -> Power     = $"
            <<fvall(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Log/Exp   = $"
            <<fval2(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> for-loop  = $"
            <<fval3(presVal,intRate/CNVPERC,numCmp)<<endl;
    cout<<"Savings using FV -> Recursion = $"
            <<fval4(presVal,intRate/CNVPERC,numCmp);

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
float fvall(float pv,float ir,int n){
    return pv*pow((1+ir),n);
}

float fval2(float pv,float ir,int n){
    return pv*exp(n*log(1+ir));
}

float fval3(float pv,float ir,int n){
    for(int i=1;i<=n;i++){
        pv*=(1+ir);
    }
    return pv;
}

float fval4(float pv,float ir,int n){
    if(n<=0)return pv;
    return fval4(pv,ir,n-1)*(1+ir);
}