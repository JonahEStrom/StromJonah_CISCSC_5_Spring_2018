/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on April 18, 2018 11:42 AM
 * Purpose:  Project 1
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
    unsigned int pokemon;
    unsigned int counter=0;
    unsigned int move;
    float rival;                  //Rival's Pokemon
    float yourhp=40;
    float yourdef=20;
    float youracc=100;
    float rivhp=40;
    float rivdef=20;
    float rivacc=100;
    float damage;
    float tackle=10;
    float vnwhp=10;
    float growl=0.167;            //Growl - Decrease your rival's Defense by 1/6
    float lchsd=0.125;            //Leech Seed - Absorb 1/8 of HP
    float wtrgn=10;               //Water Gun - Does 10 points of damage
    float wthdrw=0.167;           //Withdraw - Increase your Defense by 1/6
    float tlwhp=0.167;
    float scrtch=10;
    float ember=10;
    float smkscrn=0.167;
    
    //Input or initialize values Here
    cout<<"Hello Trainer! Welcome to Pokemon World! Your rival wishes "
            "to challenge you in the Pokemon battle!"<<endl;
    cout<<"There are only three Pokemon available for you to choose!\n"<<endl;
    cout<<"Blubasaur, a grass type Pokemon"<<endl;
    cout<<"Squirtle, a water type Pokemon"<<endl;
    cout<<"Charamander, a fire type Pokemon\n"<<endl;
    cout<<"Choose your Pokemon wisely!"<<endl;
    cout<<"Press '1' for Blubasaur"<<endl;
    cout<<"Press '2' for Squirtle"<<endl;
    cout<<"Press '3' for Charamander"<<endl;
    cin>>pokemon;
    cout<<" "<<endl;
    
    switch(pokemon)
    {
        case 1:
            cout<<"You have chosen Blubasaur!"<<endl;
            cout<<"Your rival has chosen Charamander!"<<endl;

            do
            {
            cout<<"\nWhich move do you want your Blubasaur to use?"<<endl;
            cout<<"Press '1' for Tackle"<<endl;
            cout<<"Press '2' for Vine Whip"<<endl;
            cout<<"Press '3' for Growl"<<endl;
            cout<<"Press '4' for Leech Seed"<<endl;
            cin>>move;
            if(move==1)
            {
                cout<<"\nYour Blubasaur used Tackle!"<<endl;
                rivhp=rivhp-tackle;
                cout<<"Your rival's Charamander lost "<<tackle<<" HP"<<endl;
                cout<<"Rival's Charamander now has "<<rivhp<<" HP left"<<endl;
            }
            else if(move==2)
            {
                cout<<"\nYour Blubasaur used Vine Whip!"<<endl;
                rivhp=rivhp-(vnwhp*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Charamander lost "<<(vnwhp*0.5)<<" HP"<<endl;
                cout<<"Rival's Charamander now has "<<rivhp<<" HP left"<<endl;
            }
            else if(move==3)
            {
                cout<<"\nYour Blubasaur used Growl!"<<endl;
                rivdef=rivdef-(rivdef*growl);
                cout<<"Rival's Charamander's defense has been lowered to"
                        " "<<rivdef<<endl;
            }
            else if(move==4)
            {
                cout<<"\nYour Blubasaur used Leech Seed!"<<endl;
                rivhp=rivhp-(rivhp*lchsd);
                cout<<"Rival's Charamander is seeded"<<endl;
                cout<<"Rival's Charamander's Health is sapped by leech seed,"
                        " Charamander lost "<<rivhp*lchsd<<" HP!"<<endl;
                cout<<"Rival's Charamander now has "<<rivhp<<" HP left"<<endl;
            }
            }
            while(yourhp>1&&rivhp>1);
            break;
        case 2:
            cout<<"You have chosen Squirtle!"<<endl;
            cout<<"Your rival has chosen Blubasaur!"<<endl;

            do
            {
            cout<<"\nWhich move do you want your Squirtle to use?"<<endl;
            cout<<"Press '1' for Tackle"<<endl;
            cout<<"Press '2' for Water Gun"<<endl;
            cout<<"Press '3' for Withdraw"<<endl;
            cout<<"Press '4' for Tail Whip"<<endl;
            cin>>move;
            if(move==1)
            {
                cout<<"\nYour Squirtle used Tackle!"<<endl;
                rivhp=rivhp-tackle;
                cout<<"Your rival's Blubasaur lost "<<tackle<<" HP"<<endl;
                cout<<"Rival's Blubasaur now has "<<rivhp<<" HP left"<<endl;
            }
            if(move==2)
            {
                cout<<"\nYour Squirtle used Water Gun!"<<endl;
                rivhp=rivhp-(wtrgn*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Blubasaur lost "<<(wtrgn*0.5)<<" HP"<<endl;
                cout<<"Rival's Blubasaur now has "<<rivhp<<" HP left"<<endl;
            }
            if(move==3)
            {
                cout<<"\nYour Squirtle used Withdraw!"<<endl;
                yourdef=yourdef+(yourdef*wthdrw);
                cout<<"Your Squirtle's Defense has increased to "<<yourdef<<endl;
            }
            if(move==4)
            {
                cout<<"\nYour Squirtle used Tail Whip!"<<endl;
                rivdef=rivdef-(rivdef*tlwhp);
                cout<<"Rival's Blubasaur's defense has been lowered to"
                        " "<<rivdef<<endl;
            }
            }
            while(yourhp>1&&rivhp>1);
            break;
        case 3:
            cout<<"You have chosen Charamander!"<<endl;
            cout<<"Your rival has chosen Squirtle!"<<endl;

            do
            {
            cout<<"\nWhich move do you want your Charmander to use?"<<endl;
            cout<<"Press '1' for Scratch"<<endl;
            cout<<"Press '2' for Ember"<<endl;
            cout<<"Press '3' for Growl"<<endl;
            cout<<"Press '4' for Smoke Screen"<<endl;
            cin>>move;
            if(move==1)
            {
                cout<<"\nYour Charmander used Scratch!"<<endl;
                rivhp=rivhp-scrtch;
                cout<<"Your rival's Squirtle lost "<<scrtch<<" HP"<<endl;
                cout<<"Rival's Squirtle now has "<<rivhp<<" HP left"<<endl;   
            }
            if(move==2)
            {
                cout<<"\nYour Charmander used Ember!"<<endl;
                rivhp=rivhp-(ember*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Squirtle lost "<<(ember*0.5)<<" HP"<<endl;
                cout<<"Rival's Squirtle now has "<<rivhp<<" HP left"<<endl; 
            }
            if(move==3)
            {
                cout<<"\nYour Charmander used Growl!"<<endl;
                rivdef=rivdef-(rivdef*growl);
                cout<<"Rival's Squirtle's defense has been lowered to"
                        " "<<rivdef<<endl;
            }
            if(move==4)
                cout<<"\nYour Charmander used Smoke Screen!"<<endl;
                rivacc=rivacc-(rivacc*smkscrn);
                cout<<"Rival's Squirtle's Accuracy has been lowered to "
                        ""<<rivacc<<endl;
            }
            while(yourhp>1&&rivhp>1);
            break;
    }
    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
}

