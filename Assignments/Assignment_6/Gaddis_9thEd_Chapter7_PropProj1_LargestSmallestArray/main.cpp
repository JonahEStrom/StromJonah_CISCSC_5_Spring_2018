/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on May 24, 2018
 * Purpose:  Largest/Smallest Array Values
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
    const int SIZE=10;
    int numbers[SIZE];
    
    //Prompt user about this program 
    cout<<"Input ten of numbers here to have it sorted into finding the highest"
            " and lowest numbers in the array"<<endl;
    for(int index=0;index<SIZE;index++)
    {
        cout<<"Number #"<<(index+1)<< ": ";
        cin>>numbers[index];
    }
    
    //Setting up to find the highest value
    int count;
    int highest;
    //Loop to find the highest value
    highest=numbers[0];
    for(count=1;count<SIZE;count++)
    {
        if(numbers[count]>highest)
            highest=numbers[count];
    }
    
    //Setting up to find the lowest value
    int lowest;
    //Loop to find the lowest value
    lowest=numbers[0];
    for(count=1;count<SIZE;count++)
    {
        if(numbers[count]<lowest)
            lowest=numbers[count];
    }
    
    //Display the sorted values
    cout<<"\nThe highest number: "<<highest<<endl;
    cout<<"The lowest number: "<<lowest<<endl;
    
    //Exit
    return 0;
}

