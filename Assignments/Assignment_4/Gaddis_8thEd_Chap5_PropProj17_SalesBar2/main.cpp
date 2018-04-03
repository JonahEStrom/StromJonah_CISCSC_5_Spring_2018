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
    int s1, s2, s3, s4, s5; // sales values
    float as1, as2, as3, as4, as5; //variables to hold result of dividing sales by 100
    
    //Input or initialize values Here
    cout<<"Enter each five stores' sales today "<<endl;
    
    cout<<"First store ";
    cin>>s1;

    cout<<"Second store ";
    cin>>s2;

    cout<<"Third store ";
    cin>>s3;

    cout<<"Fourth store ";
    cin>>s4;

    cout<<"Fifth store ";
    cin>>s5;
    // division by 100 to get one '*' per 100 sales
    as1=s1/100;
    as2=s2/100;
    as3=s3/100;
    as4=s4/100;
    as5=s5/100;
    
    //Process/Calculations Here
    cout<<"First store : ";
    for(int count=0;count<as1;count++){
        cout<<'*';
    }
    cout<<"\n";
    cout<<"Second store: ";
    for(int count=0;count<as2;count++){
        cout<<'*';
    }
    cout<<"\n";
    cout<<"Third store : ";
    for(int count=0;count<as3;count++){
        cout<<'*';
    }
    cout<<"\n";
    cout<<"Fourth store: ";
    for(int count=0;count<as4;count++){
        cout<<'*';
    }
    cout<<"\n";
    cout<<"Fifth store : ";
    for(int count=0;count<as5;count++){
        cout<<'*';
    }
    //Output Located Here

    //Exit
    return 0;
}