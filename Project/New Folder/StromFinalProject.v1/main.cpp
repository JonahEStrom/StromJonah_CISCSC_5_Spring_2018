/* 
 * File:   StromFinal.v1.cpp
 * Author: Jonah Strom
 * Created on June 1, 2018 
 * Purpose:  Pokemon Battle Simulator
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Percent Converter
    const int PRCNT=100;
    const int SIZE=7;
    
    
    //Declare all Variables Here
    char ans;
    int pokemon, turn, count, move, oppmove, X, Y, Z, DMG;
    float bulHP, chaHP, squHP;
    float bul[SIZE], cha[SIZE], squ[SIZE];
    string moves[SIZE]={"Bulbasaur", "Charmander", "Squirtle", "Tackle", 
    "Vine Whip", "Ember", "Bubble Beam"};
    
    ifstream bulFile, chaFile, squFile;
    
    
    
    
    //Setting up random seed generator
    srand(static_cast<int>(time(0)));
    
    //Opponent rolls for number between 1-4 to determine which move to use
    
    Z=(rand()%39)+217;
    
    
    
    //Open up text files
    bulFile.open("bulbasaur.txt");
    chaFile.open("charmander.txt");
    squFile.open("squirtle.txt");
    
    
    
    //Fill up arrays
    for(int count=0; count<SIZE; count++)
        bulFile >> bul[count];
        bulHP=bul[1];
    
    for(int count=0; count<SIZE; count++)
        chaFile >> cha[count];
        chaHP=cha[1];
        
    for(int count=0; count<SIZE; count++)
        squFile >> squ[count];
        squHP=squ[1];
        
    for(int count=0; count<SIZE; count++);
        
        
    
    
    //Do-while loop to ask users whether to continue or not
    do
    {
        //Choosing Pokemon
        cout<<"Pokemon?"<<endl;
        cin>>pokemon;
        
        switch(pokemon)
        {
            case 1:
                //Do-while loop to check if both Pokemon HP are still 
                //above 1 to continue the battle
                cout<<"Bulbasaur"<<endl;  
                
                do
                {
                    //Setting up turn counter with same condition as previous 
                    //do-while loop
                    for(turn=1; bul[1]>1 && cha[1]>1; turn++)
                    {
                        //Turn # displayed
                        cout<<"\nTurn "<<turn<<endl;
                        
                        //Setting up random seed generator for opponent
                        //to choose a move
                        oppmove=(rand()%2)+5;
                        
                        //Who is faster
                        if(bul[4]<cha[4])
                        
                        if(oppmove==5)
                        {
                            X=1.5, Y=20;
                            cout<<moves[1]<<" used "<<moves[5]<<endl;
                            cout<<"It is super effective!"<<endl;
                        }
                        if(oppmove==6)
                        {
                            X=1, Y=10;
                            cout<<moves[1]<<" used "<<moves[4]<<endl;
                        }    
                        DMG=((2*cha[0])/5+2)*(cha[2])*(cha[move])
                            /(bul[3])/50+(2)*(X)*(Y/10)*(Z)/255;
                            
                        bul[1]=bul[1]-DMG;
                            
                        
                        
                        if(bul[1]<1)
                            cout<<"Bulbasaur fainted! You lose!"<<endl;
                        else
                            cout<<"Bulbasaur HP: "<<bul[1]/bulHP*PRCNT
                                <<"%"<<endl;
                        
                        
                        //Choosing a move
                        cout<<"Move?"<<endl;
                        cin>>move;
                        
                        //Battle functions
                        //((2A/5+2)*B*C)/D)/50)+2)*X)*Y/10)*Z)/255;
                        if(move==5)
                            X=1.5, Y=5;
                        if(move==6)
                            X=1, Y=10;
                        
                        DMG=((2*bul[0])/5+2)*(bul[2])*(bul[move])
                                /(cha[3])/50+(2)*(X)*(Y/10)*(Z)/255;
                        
                        cha[1]=cha[1]-DMG;
                        
                        if(cha[1]<1)
                            cout<<"Charmander fainted! Congratulation!"<<endl;
                        else
                            cout<<"Charmander HP: "<<cha[1]/chaHP*PRCNT
                                    <<"%"<<endl;
                        
                        
                            
                        
                    }
                //If either Pokemon HP falls below 1, then the battle is over
                }while(bul[1]>1 && cha[1]>1);
                break;
                
                
                
            case 2:
                cout<<"Charmander"<<endl;
                do
                {
                    
                }while(cha[1]>1 && squ[1]>1);
                break;
                
            case 3:
                cout<<"Squirtle";
                do
                {
                    
                }while(squ[1]>1 && bul[1]>1);
                break;
        }
    
        //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Do-while loop asking to continue or not
    cout<<"\nContinue?"<<endl;
    cin>>ans;
    }while(ans=='y'||ans=='Y');
    
    bulFile.close();
    chaFile.close();
    squFile.close();
    
    
    
    
    //Exit
    return 0;
}

