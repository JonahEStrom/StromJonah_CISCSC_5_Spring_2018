/* 
 * File:   Budget Analysis.cpp
 * Author: Jonah Strom
 * Created on April 2, 2018 10:45 PM
 * Purpose: Analyze a monthly budget
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
    float budget, expense, total, difference;
    
    //Input or initialize values Here
    cout<<"Please enter your budget: ";
    cin>>budget;
    total=0;
    
    //Process/Calculations Here
    while(total<=budget){    
        cout<<"Insert here your expense: ";
        cin>>expense;
        total+=expense;
        cout<<"totaling $"<<total<<" expenses out of your $"<<budget<<" budget"<<endl;
        difference=total-budget;
    }
    cout<<"the outstanding cost of your expenses and your desired budget is: $"<<difference;
    
    //Output Located Here
    
            
    //Exit
    return 0;
}

