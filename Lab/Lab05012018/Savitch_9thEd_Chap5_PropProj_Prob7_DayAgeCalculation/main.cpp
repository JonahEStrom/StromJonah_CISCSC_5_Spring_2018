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
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLpYr(unsigned short);
char gtCntVl(unsigned int);
char gtYrVal(unsigned int);
char gtMnVal(char,unsigned int);
string dyOfWk(char, char, unsigned int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string sMonth,sDay;
    unsigned short year;
    unsigned char day, month;
    
    //Input or initialize values Here
    cout<<"This program outputs the day of the week "<<endl;
    cout<<"given the date"<<endl;
    cout<<"Input the date i.e. July 4, 2008"<<endl;
    cin>>sMonth>>sDay>>year;
    
    //Process/Calculations Here
    day=cnvDay(sDay);
    month=cnvMnth(sMonth);
    
    cout<<static_cast<int>((gtYrVal)(year))<<endl;
    
    for(int year=2008;year<2018;year++){
    cout<<static_cast<int>(gtCntVl(year))<<endl;
    }
   
    int cntLpYr=0;
    for(int year=1600;year<=2000;year++){
        cout<<year<<" "<<(isLpYr(year)?'T':'F')<<endl;
        if(isLpYr(year))cntLpYr++;
    }
    
    //Output Located Here
    cout<<"Number of leap Yrs = "<<cntLpYr<<endl;
    cout<<"The date is "
            <<static_cast<int>(month)<<"/"
            <<static_cast<int>(day)<<"/"<<year<<endl;

    //Exit
    return 0;
}

char gtMnVal(char month,unsigned int year){
    switch(month){
        case 1:{
            if(isLpYr(year))return 6;
            return 0;
        }
        case 2:{
            if(isLpYr(year))return 2;
            return 3; 
        }
        case 3:case 11:{return 3;}
        case 4:case 7:{return 6;}
        case 5:{return 1;}
        case 6:{return 4;}
        case 8:{return 2;}
        case 9:case 12:{return 5;}
        case 10:{return 0;}
    }
}

char gtYrVal(unsigned int year){
    return year%100+(year%100)/4;
}

char gtCntVl(unsigned int year){
    year/=100;
    return 2*(3-year%4);
}

bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0))&&(!(year%100==0)));
}

unsigned char cnvMnth(string sMonth){
    if(sMonth=="January")return 1;
    if(sMonth=="February")return 2;
    if(sMonth=="March")return 3;
    if(sMonth=="April")return 4;
    if(sMonth=="May")return 5;
    if(sMonth=="June")return 6;
    if(sMonth=="July")return 7;
    if(sMonth=="August")return 8;
    if(sMonth=="September")return 9;
    if(sMonth=="October")return 10;
    if(sMonth=="November")return 11;
    if(sMonth=="December")return 12;
}

unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
    return day;
}
