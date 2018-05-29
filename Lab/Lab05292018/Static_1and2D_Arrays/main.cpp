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
const int COLS=10;
//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void fillAry9ubt [][COLS],int);
void prntAry(int [][COLS],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    const int ROWS=10;
    int array[SIZE],array2[ROWS][COLS];
    
    //Initialize Variables
    fillAry(array,SIZE);
    fillAry(array2,ROWS);
    
    //Print the Array
    prntAry(array,SIZE,10);
    fillAry(array2,ROWS);
    
    //Process/Map inputs to outputs
    
    
    //Output data
    prntAry(array,SIZE,10);
    
    //Find an element
   
    
    //Exit stage right!
    return 0;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++)
        {
            a[row][col]=rand()%90+10;
        }
    }
}

