/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on May 15th, 2018, 10:05 AM
 * Purpose:  Investigate Sorts
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    int n,q;
    cin>>n>>q;
    
    vector <vector<int> >a(n);
    
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        
        for(int j=0;i<k;j++){
            int data;
            cin>>data;
            a[i].push_back(data);
        }
    }
    
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
    
    //Declare Variables
   
    
    
    //Initialize Variables
    
    
  
  
    //Output data
        
    
    //Find an element
   
    
    //Exit stage right!
    return 0;
}



