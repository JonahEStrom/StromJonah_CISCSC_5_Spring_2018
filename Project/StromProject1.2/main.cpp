/* 
 * File:   main.cpp
 * Author: Jonah Strom
 * Created on April 18, 2018 11:42 AM
 * Purpose:  Project 1
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Percent Conversion
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
        //Declare all Variables Here
    char ans;
    unsigned int pokemon;
    unsigned int turn=1;
    unsigned int move;
        //Battle Mechanics
    float rival;                  //Rival's Pokemon
    float yourhp=40;
    float yourdef=20;
    float youracc=100;
    float rivhp=40;
    float rivdef=20;
    float rivacc=100;
    float damage;
        //Moves
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
        //Enumeration
    srand(static_cast<unsigned int>(time(0)));
    int oppmove=(rand()%4)+1;
    
    //Input or initialize values Here
    do
    {
    yourhp=40;
    yourdef=20;
    youracc=100;
    rivhp=40;
    rivdef=20;
    rivacc=100;
    
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
    cout<<"Press '4' to surrender"<<endl;
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
                if(rivhp<=0)
                    cout<<"Rival's Charmander fainted! \nCongratulation! "
                            "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Charamander now has "<<rivhp<<" HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Blubasaur lost "<<scrtch<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Blubasaur lost "<<(ember*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Blubasaur's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Blubasaur Accuracy has been lowered to "
                        ""<<youracc<<endl;
                        break;
                    }
                }
            }
            else if(move==2)
            {
                cout<<"\nYour Blubasaur used Vine Whip!"<<endl;
                rivhp=rivhp-(vnwhp*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Charamander lost "<<(vnwhp*0.5)<<" HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Charmander fainted! \nCongratulation! "
                            "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Charamander now has "<<rivhp<<" HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Blubasaur lost "<<scrtch<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Blubasaur lost "<<(ember*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Blubasaur's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Blubasaur Accuracy has been lowered to "
                        ""<<youracc<<endl;
                        break;
                    }
                }
            }
            else if(move==3)
            {
                cout<<"\nYour Blubasaur used Growl!"<<endl;
                rivdef=rivdef-(rivdef*growl);
                cout<<"Rival's Charamander's defense has been lowered to"
                        " "<<rivdef<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Blubasaur lost "<<scrtch<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Blubasaur lost "<<(ember*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Blubasaur's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Blubasaur Accuracy has been lowered to "
                        ""<<youracc<<endl;
                        break;
                    }
                }
            }
            else if(move==4)
            {
                cout<<"\nYour Blubasaur used Leech Seed!"<<endl;
                rivhp=rivhp-(rivhp*lchsd);
                cout<<"Rival's Charamander is seeded"<<endl;
                cout<<"Rival's Charamander's Health is sapped by leech seed,"
                        " Charamander lost "<<rivhp*lchsd<<" HP!"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Charmander fainted! \nCongratulation! "
                            "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Charamander now has "<<rivhp<<" HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Blubasaur lost "<<scrtch<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Blubasaur lost "<<(ember*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Blubasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Blubasaur now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Blubasaur's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Blubasaur Accuracy has been lowered to "
                        ""<<youracc<<endl;
                        break;
                    }
                }
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
                if(rivhp<=0)
                    cout<<"Rival's Blubasaur fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Blubasaur now has "<<rivhp<<" HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Blubasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Blubasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(vnwhp*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Blubasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Blubasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<yourhp*lchsd<<" HP!"<<endl;
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                    }
                }
            }
            if(move==2)
            {
                cout<<"\nYour Squirtle used Water Gun!"<<endl;
                rivhp=rivhp-(wtrgn*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Blubasaur lost "<<(wtrgn*0.5)<<" HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Blubasaur fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Blubasaur now has "<<rivhp<<" HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Blubasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Blubasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(vnwhp*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Blubasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Blubasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<yourhp*lchsd<<" HP!"<<endl;
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                    }
                }
            }
            if(move==3)
            {
                cout<<"\nYour Squirtle used Withdraw!"<<endl;
                yourdef=yourdef+(yourdef*wthdrw);
                cout<<"Your Squirtle's Defense has increased to "<<yourdef<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Blubasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Blubasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(vnwhp*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Blubasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Blubasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<yourhp*lchsd<<" HP!"<<endl;
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                    }
                }
            }
            if(move==4)
            {
                cout<<"\nYour Squirtle used Tail Whip!"<<endl;
                rivdef=rivdef-(rivdef*tlwhp);
                cout<<"Rival's Blubasaur's defense has been lowered to"
                        " "<<rivdef<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Blubasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Blubasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(vnwhp*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Blubasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Blubasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<yourhp*lchsd<<" HP!"<<endl;
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                    }
                }
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
                if(rivhp<=0)
                    cout<<"Rival's Squirtle fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Squirtle now has "<<rivhp<<" HP left"<<endl;     
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(wtrgn*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased to "<<rivdef<<endl;
                        break;
                    }
                }
            }
            if(move==2)
            {
                cout<<"\nYour Charmander used Ember!"<<endl;
                rivhp=rivhp-(ember*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Squirtle lost "<<(ember*0.5)<<" HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Squirtle fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Squirtle now has "<<rivhp<<" HP left"<<endl;     
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(wtrgn*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased to "<<rivdef<<endl;
                        break;
                    }
                }
            }
            if(move==3)
            {
                cout<<"\nYour Charmander used Growl!"<<endl;
                rivdef=rivdef-(rivdef*growl);
                cout<<"Rival's Squirtle's defense has been lowered to"
                        " "<<rivdef<<endl;    
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(wtrgn*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased to "<<rivdef<<endl;
                        break;
                    }
                }
            }
            if(move==4)
            {
                cout<<"\nYour Charmander used Smoke Screen!"<<endl;
                rivacc=rivacc-(rivacc*smkscrn);
                cout<<"Rival's Squirtle's Accuracy has been lowered to "
                        ""<<rivacc<<endl;     
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<tackle<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(wtrgn*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<yourhp<<" HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's defense has been lowered to"
                        " "<<yourdef<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased to "<<rivdef<<endl;
                        break;
                    }
                }
            }
            }
            while(yourhp>1&&rivhp>1);
            break;
        case 4:
        {
            cout<<"You ran away!"<<endl;
            break;
        }
    }
    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    cout<<"\nContiune? y for Yes, n for No"<<endl;
    cin>>ans;
    cout<<" "<<endl;
    }while(ans=='y');
    return 0;
}
