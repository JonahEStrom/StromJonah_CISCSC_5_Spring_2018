/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
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
    float salary,roi,savReq,percDep;
    int nYears;
    float svBegYr,inEndYr,dpEndYr;
    
    //Input or initialize values Here
    salary=1.e5f;
    roi=5e-2;
    savReq=salary/roi;
    percDep=1e-1f;
    nYears=50;
    svBegYr=0;
    inEndYr=0;
    dpEndYr=percDep*salary;
    
    
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year     Savings  Interest   Deposit"<<endl;
    for(int nYear=0,year=2021;nYear<=nYears&&savReq>svBegYr;nYear++,year++){
        cout<<setw(2)<<nYear
                <<setw(8)<<year
                <<setw(12)<<svBegYr
                <<setw(10)<<inEndYr
                <<setw(10)<<dpEndYr<<endl;
        inEndYr=svBegYr*roi;
        svBegYr=svBegYr+inEndYr+dpEndYr;
    }
    cout<<"Savings to Retire = $"<<svBegYr<<endl;
    //Output Located Here
    cout<<"Hello World"<<endl;

    //Exit
    return 0;
}

