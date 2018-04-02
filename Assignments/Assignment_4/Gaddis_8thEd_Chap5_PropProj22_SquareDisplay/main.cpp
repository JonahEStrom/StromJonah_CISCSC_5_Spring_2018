/* 
 * File:   Square Display.cpp
 * Author: Jonah Strom
 * Created on April 2, 2018 10:45 PM
 * Purpose:  Display a square on the screen
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
    int row, colum, num;
    
    //Input or initialize values Here
    cout<<"Please insert any number from one to no greater than 15 here: ";
    cin>>num;
    cout<<"\n";
    
    //Process/Calculations Here
    if(num>15||num<=0){
        num=0;
        cout<<"Please try again"<<endl;
    }
    for(int row=1; row<=num; row++)
    {
        for(int colum=1; colum<=num; colum++){
        cout<<"X";
            }        
        cout<<endl;
    }
    
    
        
    //Output Located Here

    //Exit
    return 0;
}

