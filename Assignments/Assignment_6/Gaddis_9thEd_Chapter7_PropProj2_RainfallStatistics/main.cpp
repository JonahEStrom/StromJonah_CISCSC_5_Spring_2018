/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on May 24, 2018
 * Purpose:  Rainfall data-crunching
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
    const int SIZE=12;
    float rainfall[SIZE];
    
    //Prompt user about this program 
    cout<<"Input here amount of rainfall per month for a full year"<<endl;
    
    //Fill up the array
    for(int index=0;index<SIZE;index++)
    {
        cout<<"Month #"<<(index+1)<< ": ";
        cin>>rainfall[index];
        while(rainfall<0)
            cout<<"error"<<endl;
    }
    
    //Setting up to find the highest value
    int count;
    int highest;
    //Loop to find the highest value
    highest=rainfall[0];
    for(count=1;count<SIZE;count++)
    {
        if(rainfall[count]>highest)
            highest=rainfall[count];
    }
    
    //Setting up to find the lowest value
    int lowest;
    //Loop to find the lowest value
    lowest=rainfall[0];
    for(count=1;count<SIZE;count++)
    {
        if(rainfall[count]<lowest)
            lowest=rainfall[count];
    }
    
    //Setting up to find the average value
    int average;
    int total;
    //Loop to sum all values and then find the average value
    for(count=0;count<SIZE;count++)
    {
        total+=rainfall[count];
    }
    average=total/12;
    
    //Display the sorted values
    cout<<"\nThe highest amount of rainfall in a month: "<<highest<<endl;
    cout<<"The lowest amount of rainfall in a month: "<<lowest<<endl;
    cout<<"The average rainfall of the whole year: "<<average<<endl;
    
    //Exit
    return 0;
}

