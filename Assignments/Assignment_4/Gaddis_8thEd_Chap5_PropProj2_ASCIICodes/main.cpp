/* 
 * File:   Gaddis_Chap5_ProgProj2_ASCIICodes.cpp
 * Author: Jonah Strom
 * Created on March 28, 2018 at 12:38 PM
 * Purpose:  Display ASCII characters from 0 through 127
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
    int loop; 

    //Input or initialize values Here
    cout<<"This program will display every ASCII characters from 0 to 127"<<endl;
    loop=0;
    cout<<endl;  
    
    //Process/Calculations Here
    //Break line per 16 characters, so I had to program loop 8 times
    //with different conditions with endl after the outputs to create line breaks
    while(loop<=16){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=32){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=48){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=64){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=80){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=96){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=112){
        cout<<char(loop)<<" ";
        loop++;
    }
    cout<<endl;
    while(loop<=127){
        cout<<char(loop)<<" ";
        loop++;
    }    
    //Output Located Here


    //Exit
    return 0;
}

