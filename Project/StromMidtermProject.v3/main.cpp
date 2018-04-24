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
#include <iomanip>

using namespace std;



//Global Constants Only, No Global Variables
const int PRCNT=100;


//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    char ans;                 //'y'/'n' to contiune playing or not
    unsigned int pokemon;     //Which Pokemon to choose
    unsigned int turn;        //Count the turns in the battle
    unsigned int move;        //Which move to choose
        //Battle Mechanics
    int yourhp=50;          //My Pokemon's HP is set to 40 points
    int yourdef=20;         //My Pokemon's base Defense is set to 20 points
    int youracc=100;        //Accuracy of my Pokemon's moves is set to 100%
    int rivhp=50;           //Rival Pokemon's HP is set to 40 points
    int rivdef=20;          //Rival Pokemon's base Defense is set to 20 points
    int rivacc=100;         //Accuracy of Rival Pokemon's moves is set to 100%
        //Moves
    int tackle=10;          //Tackle - Does 10 points of damage
    int vnwhp=10;           //Vine Whip - Does 10 points of damage
    float growl=0.167;      //Growl - Decrease your rival's Defense by 1/6
    float lchsd=0.125;      //Leech Seed - Inflict 1/8 of HP damage
    int wtrgn=10;           //Water Gun - Does 10 points of damage
    float wthdrw=0.167;     //Withdraw - Increase your Defense by 1/6
    float tlwhp=0.167;      //Tail Whip - Decrease rival's Def by 1/6
    int scrtch=10;          //Scratch - Does 10 points of damage
    int ember=10;           //Ember - Does 10 points of damage
    float smkscrn=0.167;    //Smoke Screen - Decrease rival's 
                            //accuracy by 1/6
        
    //Setting up Random Seed Generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Rival will choose a move by rolling for number between 1 and 4 randomly
    int oppmove=(rand()%4)+1;
    
    //Reset stats (HP, Defense, and Accuracy) every time it starts a new battle
    do
    {
    yourhp=50;
    yourdef=20;
    youracc=100;
    rivhp=50;
    rivdef=20;
    rivacc=100;
    
    //Introduce user to this program and prompt user to choose Pokemon to battle
    cout<<"Hello Trainer! Welcome to Pokemon World! Your rival wishes "
            "to challenge you in the Pokemon battle!"<<endl;
    cout<<"There are only three Pokemon available for you to choose!\n"<<endl;
    cout<<"Bulbasaur, a grass type Pokemon"<<endl;
    cout<<"Squirtle, a water type Pokemon"<<endl;
    cout<<"Charmander, a fire type Pokemon\n"<<endl;
    cout<<"Grass type is weak to Fire type"
            "\nFire type is weak to Water type"
            "\nWater type is weak to Grass type"<<endl;
    cout<<"\nChoose your Pokemon wisely!"<<endl;
    cout<<"Press '1' for Bulbasaur"<<endl;
    cout<<"Press '2' for Squirtle"<<endl;
    cout<<"Press '3' for Charmander"<<endl;
    cout<<"Press '4' to surrender"<<endl;
    cin>>pokemon;
    
    //Create a space between choosing Pokemon and starting the battle
    cout<<" "<<endl;
 
    //Use Switch mechanic to determine which branch to use after user's input
    switch(pokemon)
    {
        case 1: //'1' is Bulbasaur option, so this program branches 
                //into Bulbasaur's pathways. 
                //Since Bulbasaur is grass type, so I, the programmer, tell the 
                //computer to use Charmander, a fire type Pokemon to make the 
                //battle harder. Fire is strong against Grass
            cout<<"You have chosen Bulbasaur!"<<endl;
            cout<<"Your rival has chosen Charmander!"<<endl;
                //Use Do-Loop mechanic to prompt user which first move to choose
                //since the user always has to make the first move

            do
            {
                //Set up turn counter with specific condition
                for(turn=1;yourhp>1&&rivhp>1;turn++)
                {
                cout<<"\nTurn "<<turn<<endl;
            
                cout<<"\nWhich move do you want your Bulbasaur to use?"<<endl;
                cout<<"Press '1' for Tackle"<<endl;
                cout<<"Press '2' for Vine Whip"<<endl;
                cout<<"Press '3' for Growl"<<endl;
                cout<<"Press '4' for Leech Seed"<<endl;
                cin>>move;
            //Use Switch mechanic to determine which branch to use after user 
            //picked which move to use    
            if(move==1)
            {
                //Display what move user just chose
                cout<<"\nYour Bulbasaur used Tackle!"<<endl;
                //damage calculation
                rivhp=rivhp-tackle;
                //Display how much your rival Pokemon's HP has lost in percentage
                cout<<"Your rival's Charamander lost "<<
                        (static_cast<float>(tackle)/50)*PRCNT<<"% of HP"<<endl;
                //Check to see if the damage will cause rival's HP to fall below
                //0. If so, then it will end the battle after informing that
                //user has defeated the rival
                if(rivhp<=0)
                    cout<<"Rival's Charmander fainted! \nCongratulation! "
                            "You have defeated your rival!"<<endl;
                else
                    //If rival's Pokemon HP is still above 0, then the battle
                    //continues and it informs the user how much rival's Pokemon 
                    //HP has left
                    cout<<"Rival's Charamander now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;
                //Check to see if both Pokemon are still alive to continue
                //making moves
                if(yourhp>1&&rivhp>1){
                    //Use the random seed generator to randomize rival's pick 
                    //for the move
                    int oppmove=(rand()%4)+1;
                    //Use Switch to branch into a branch that matches 
                    //the randomly rolled number
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        //Force type of the move into float from integer for 
                        //division with original Health Point (HP) and 
                        //multiplication of Percentage Converter to find HP in 
                        //Percentage
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (scrtch)/50)*PRCNT<<"% of HP"<<endl;
                        //Check to see if rival's Pokemon has landed a deadly 
                        //blow to your Pokemon or not. If so, then it will 
                        //display the defeat
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        //Since Fire is effective against Grass, Ember's damage 
                        //has doubled, from 10 to 20 points of damage
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (ember*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        //Simple calculation 
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Bulbasaur's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Bulbasaur Accuracy has been lowered to "
                        ""<<youracc<<"%"<<endl;
                        break;
                    }
                }
            }
            //If the user picked two, then it will use if-else-if to branch out 
            //to this block of code instead
            else if(move==2)
            {
                cout<<"\nYour Bulbasaur used Vine Whip!"<<endl;
                rivhp=rivhp-(vnwhp*0.5);
                //Since Grass is not effective against Fire, Vine Whip's damage 
                //has halved, from 10 to 5 points of damage
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Charamander lost "<<(static_cast<float>
                        (vnwhp*0.5)/50)*PRCNT<<"% of HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Charmander fainted! \nCongratulation! "
                            "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Charamander now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (scrtch)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (ember*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Bulbasaur's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Bulbasaur Accuracy has been lowered to "
                        ""<<youracc<<"%"<<endl;
                        break;
                    }
                }
            }
            else if(move==3)
            {
                cout<<"\nYour Bulbasaur used Growl!"<<endl;
                rivdef=rivdef-(rivdef*growl);
                cout<<"Rival's Charamander's Defense has been lowered by"
                        " "<<rivdef<<"%"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (scrtch)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (ember*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Bulbasaur's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Bulbasaur Accuracy has been lowered to "
                        ""<<youracc<<"%"<<endl;
                        break;
                    }
                }
            }
            else if(move==4)
            {
                cout<<"\nYour Bulbasaur used Leech Seed!"<<endl;
                rivhp=rivhp-(rivhp*lchsd);
                cout<<"Rival's Charamander is seeded"<<endl;
                cout<<"Rival's Charamander's Health is sapped by leech seed,"
                        " Charamander lost "<<(static_cast<float>
                        (rivhp)*lchsd)/(50)*PRCNT<<"% of HP!"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Charmander fainted! \nCongratulation! "
                            "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Charamander now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Charmander used Scratch!"<<endl;
                        yourhp=yourhp-scrtch;
                        cout<<"Your Bulbasaur lost "<<(static_cast<float>
                                (scrtch)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Charmander used Ember!"<<endl;
                        yourhp=yourhp-(ember*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Bulbasaur lost "<<(ember*2)<<" HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Bulbasaur fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Bulbasaur now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Charmander used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Bulbasaur's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Charmander used Smoke Screen!"<<endl;
                        youracc=youracc-(youracc*smkscrn);
                        cout<<"Your Bulbasaur Accuracy has been lowered to "
                        ""<<youracc<<"%"<<endl;
                        break;
                    }
                }
            }
            else //This refers to not choosing a number between 1 to 4 for 
                //choosing a move
            {
                cout<<"\nThe input is invalid, please try again"<<endl;
                turn--;
            }
                }
            }//This one is used to loop until either one of the Pokemon's HP 
            //fell below 1, then it will end the battle
            while(yourhp>1&&rivhp>1);
            break;
        case 2:
            //This is Squirtle's entire code block, very similar to Bulbasaur, 
            //just with different moves and rival's Pokemon
            cout<<"You have chosen Squirtle!"<<endl;
            cout<<"Your rival has chosen Bulbasaur!"<<endl;

            do
            {
                for(turn=1;yourhp>1&&rivhp>1;turn++)
                {
                    cout<<"\nTurn "<<turn<<endl;
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
                cout<<"Your rival's Bulbasaur lost "<<(static_cast<float>
                        (tackle)/50)*PRCNT<<"% of HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Bulbasaur fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Bulbasaur now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Bulbasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Bulbasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (vnwhp*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Bulbasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Bulbasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<(static_cast<float>
                                (yourhp*lchsd)/50)*PRCNT<<"% of HP!"<<endl;
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                    }
                }
            }
            else if(move==2)
            {
                cout<<"\nYour Squirtle used Water Gun!"<<endl;
                rivhp=rivhp-(wtrgn*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Bulbasaur lost "<<(static_cast<float>
                        (wtrgn*0.5)/50)*PRCNT<<"% of HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Bulbasaur fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Bulbasaur now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Bulbasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Bulbasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (vnwhp*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Bulbasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Bulbasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<(static_cast<float>
                                (yourhp*lchsd)/50)*PRCNT<<"% of HP!"<<endl;
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                    }
                }
            }
            else if(move==3)
            {
                cout<<"\nYour Squirtle used Withdraw!"<<endl;
                yourdef=yourdef+(yourdef*wthdrw);
                cout<<"Your Squirtle's Defense has increased by "
                        <<yourdef<<"%"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Bulbasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Bulbasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (vnwhp*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Bulbasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's Defense has been lowered to"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Bulbasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<(static_cast<float>
                                (yourhp*lchsd)/50)*PRCNT<<"% of HP!"<<endl;
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                    }
                }
            }
            else if(move==4)
            {
                cout<<"\nYour Squirtle used Tail Whip!"<<endl;
                rivdef=rivdef-(rivdef*tlwhp);
                cout<<"Rival's Bulbasaur's Defense has been lowered by"
                        " "<<rivdef<<"%"<<endl;
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Bulbasaur used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Bulbasaur used Vine Whip!"<<endl;
                        yourhp=yourhp-(vnwhp*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Squirtle lost "<<(static_cast<float>
                                (vnwhp*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Squirtle fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Squirtle now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Bulbasaur used Growl!"<<endl;
                        yourdef=yourdef-(yourdef*growl);
                        cout<<"Your Squirtle's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Bulbasaur used Leech Seed!"<<endl;
                        yourhp=yourhp-(yourhp*lchsd);
                        cout<<"Your Squirtle is seeded"<<endl;
                        cout<<"Your Squirtle's Health is sapped by leech seed,"
                        " Squirtle lost "<<(static_cast<float>
                                (yourhp*lchsd)/50)*PRCNT<<"% of HP!"<<endl;
                        cout<<"Your Squirtle now has "<<yourhp<<" HP left"<<endl;
                        break;
                    }
                }
            }
            else
            {
                cout<<"\nThe input is invalid, please try again"<<endl;
                turn--;
            }
                }
            }
            while(yourhp>1&&rivhp>1);
            break;
        case 3:
            //This is Charmander's code block, going against 
            //a Water type Pokemon
            cout<<"You have chosen Charmander!"<<endl;
            cout<<"Your rival has chosen Squirtle!"<<endl;

            do
            {
                for(turn=1;yourhp>1&&rivhp>1;turn++)
                {
                    cout<<"\nTurn "<<turn<<endl;
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
                cout<<"Your rival's Squirtle lost "<<(static_cast<float>
                        (scrtch)/50)*PRCNT<<"% of HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Squirtle fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Squirtle now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;     
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (wtrgn*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased by "
                                <<rivdef<<"%"<<endl;
                        break;
                    }
                }
            }
            else if(move==2)
            {
                cout<<"\nYour Charmander used Ember!"<<endl;
                rivhp=rivhp-(ember*0.5);
                cout<<"It is not very effective..."<<endl;
                cout<<"Your rival's Squirtle lost "<<(static_cast<float>
                        (ember*0.5)/50)*PRCNT<<"% of HP"<<endl;
                if(rivhp<=0)
                    cout<<"Rival's Squirtle fainted! \nCongratulation! "
                          "You have defeated your rival!"<<endl;
                else
                cout<<"Rival's Squirtle now has "<<(static_cast<float>
                        (rivhp)/50)*PRCNT<<"% of HP left"<<endl;     
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (wtrgn*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased by "
                                <<rivdef<<"%"<<endl;
                        break;
                    }
                }
            }
            else if(move==3)
            {
                cout<<"\nYour Charmander used Growl!"<<endl;
                rivdef=rivdef-(rivdef*growl);
                cout<<"Rival's Squirtle's Defense has been lowered by"
                        " "<<rivdef<<"%"<<endl;    
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (wtrgn*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased by "
                                <<rivdef<<"%"<<endl;
                        break;
                    }
                }
            }
            else if(move==4)
            {
                cout<<"\nYour Charmander used Smoke Screen!"<<endl;
                rivacc=rivacc-(rivacc*smkscrn);
                cout<<"Rival's Squirtle's Accuracy has been lowered to "
                        ""<<rivacc<<"%"<<endl;     
                if(yourhp>1&&rivhp>1){
                    int oppmove=(rand()%4)+1;
                    switch(oppmove){
                        case 1:
                        cout<<"\nRival's Squirtle used Tackle!"<<endl;
                        yourhp=yourhp-tackle;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (tackle)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 2:
                        cout<<"\nRival's Squirtle used Water Gun!"<<endl;
                        yourhp=yourhp-(wtrgn*2);
                        cout<<"It is super effective!"<<endl;
                        cout<<"Your Charmander lost "<<(static_cast<float>
                                (wtrgn*2)/50)*PRCNT<<"% of HP"<<endl;
                        if(yourhp<=0)
                            cout<<"Your Charmander fainted! \n"
                            "Your rival has defeated you!"<<endl;
                        else
                        cout<<"Your Charmander now has "<<(static_cast<float>
                                (yourhp)/50)*PRCNT<<"% of HP left"<<endl;
                        break;
                        case 3:
                        cout<<"\nRival's Squirtle used Tail Whip!"<<endl;
                        yourdef=yourdef-(yourdef*tlwhp);
                        cout<<"Your Charmander's Defense has been lowered by"
                        " "<<yourdef<<"%"<<endl;
                        break;
                        case 4:
                        cout<<"\nRival's Squirtle used Withdraw!"<<endl;
                        rivdef=rivdef+(rivdef*wthdrw);
                        cout<<"Rival's Squirtle's Defense has increased by "
                                <<rivdef<<"%"<<endl;
                        break;
                    }
                }
            }
            else
            {
                cout<<"\nThe input is invalid, please try again"<<endl;
                turn--;
            }
                }
            }
            while(yourhp>1&&rivhp>1);
            break;
        case 4:
        {
            //If user didn't want to battle, then it will branch to this block
            cout<<"You ran away!"<<endl;
            break;
        }
    }

    //Exit or continue playing more
    cout<<"\nContinue? y for Yes, n for No"<<endl;
    cin>>ans;
    cout<<" "<<endl;
    
    }while(ans=='y');
    
    return 0;
}
