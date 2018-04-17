/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void menu();
void assign1();
void assign2();
void assign3();
void assign4();
void assign5();
void assign6();
void assign7();
void assign8();
void assign9();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Input or initialize values Here
    do{
        menu();
        cin>>choice;
        
        //Choices
        switch(choice){
            case '1':{assign1();break;}
            case '2':{assign2();break;}
            case '3':{assign3();break;}
            case '4':{assign4();break;}
            case '5':{assign5();break;}
            case '6':{assign6();break;}
            case '7':{assign7();break;}
            case '8':{assign8();break;}
            case '9':{assign9();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='9');

    //Exit
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Menu
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Programming Project #1"<<endl;
    cout<<"Type 2 for Programming Project #2"<<endl;
    cout<<"Type 3 for Programming Project #3"<<endl;
    cout<<"Type 4 for Programming Project #4"<<endl;
    cout<<"Type 5 for Programming Project #5"<<endl;
    cout<<"Type 6 for Programming Project #6"<<endl;
    cout<<"Type 7 for Programming Project #7"<<endl;
    cout<<"Type 8 for Programming Project #8"<<endl;
    cout<<"Type 9 for Programming Project #9"<<endl;
    cout<<"Type 0 to end the program"<<endl<<endl;  
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #1
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign1(){
    
    //Title
    cout<<"Programming Project #17"<<endl;
    
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

    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #2
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign2(){
    //Title
    cout<<"Programming Project 2"<<endl;
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

    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #3
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign3(){
    //Title
    cout<<"Programming Project 3"<<endl;

    //Declare all Variables Here
    float ocean;         // use float because of decimals
    int years, count;    // count is the counter for the while loop function
    
    //Input or initialize values Here
    ocean=0;             // starts at zero
    years=25;            // the counter is set to 25 years or 25 loops
    count=0;             // initialize the loop counter as zero
    
    //Process/Calculations Here
    cout<<"Ocean's level starts at "<<ocean<<" millimeters"<<endl;
    while(count<=years){ // set condition to check if count is not above 25
        ocean+=1.5;      // increase ocean's level by 1.5 millimeters per year
        cout<<ocean<<" millimeters"<<" in the year of "<<count<<endl;
        count++;         // add one to the counter per year to complete the loop
    }
    
    //Output Located Here
    cout<<"\n";
    cout<<"Ocean's level at the end of 25 years is "<<ocean<<" millimeters"<<endl;

    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #4
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign4(){
    //Title
    cout<<"Programming Project #4"<<endl;

    //Declare all Variables Here
    int minute, count;
    float calorie;         // use float because of decimals
    
    //Input or initialize values Here
    minute=30;             // 30 minutes as per the instruction
    calorie=0;             // calorie first set at zero
    count=0;               // initialize the loop counter as zero
    
    //Process/Calculations Here
    cout<<"The timer is set at "<<calorie<<" minute(s)"<<endl;
    while(count<=minute){  // set condition to check if count is not above 30
        calorie+=3.6;      // increase calorie by 3.6 per five minute of running
        cout<<calorie<<" calories burned in the end of "<<count<<" minutes"<<endl;
        count+=5;          // add one to the counter per year to complete the loop
    }
    
    //Output Located Here
    cout<<"\n";
    cout<<calorie<<" calories burned after 30 minutes of running"<<endl;
    
    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #5
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign5(){
    
    //Title
    cout<<"Programming Project 5"<<endl;
    
    //Declare all Variables Here
    float member, fee, years, count;
    
    //Input or initialize values Here
    years=6;                       
    count=1;
    member=2500;
    
    //Process/Calculations Here
    cout<<"Membership rate starts at $2500 per year\n"
            "and will continue to increase by 4% per year"<<endl;
    cout<<"\n";
    while(count<=years){
        fee=0.04;
        cout<<"$"<<member<<" in "<<count<<" year"<<endl;
        member+=member*fee;
        count++;
    }
    //Output Located Here
    cout<<"\n";
    cout<<"Membership rate per year at the end of six years will be $"<<member<<endl;

    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #6
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign6(){
    
    //Title
    cout<<"Programming Project 6"<<endl;
    
    //Declare all Variables Here
    float speed, hours, distanc, count;
    
    //Input or initialize values Here
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    cout<<"How many hours has it traveled? ";
    cin>>hours;
    count=1;
    
    //Process/Calculations Here
    cout<<"--------------------------"<<endl;
    cout<<"Hour"<<"       "<<"Distance Traveled"<<endl;
    while(count<=hours){   
        distanc=speed*count;
        cout<<count<<" mph"<<"      "<<distanc<<" miles"<<endl;
        count++;
    }

    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #7
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign7(){
    
    //Title
    cout<<"Programming Project 7"<<endl;
    
    //Declare all Variables Here
    int totpay, penny, numDays;
    
    //Input or initialize values Here
    cout<<"How many days do you want? "<<endl;
    cin>>numDays;
    totpay=0;
    penny=1;
    
    //Process/Calculations Here
    cout<<"Day   Pay   Total"<<endl;
    for(int count=1;count<=numDays;count++)
    {
       cout<<count<<"     "<<penny/100<<"     "<<totpay/100<<endl;
       penny*=2;
       totpay+=penny;
    }

    //Exit
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #8
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign8(){
    
    //Title
    cout<<"Programming Project 22"<<endl;
    
    //Declare all Variables here
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

    //Exit  
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//          Assignment #9
//000000011111111112222222222333333333344444444445555555555666666666677777777778

void assign9(){
    
    //Title
    cout<<"Programming Project "<<endl;
    
    //Declare all Variables here
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

    //Exit
}