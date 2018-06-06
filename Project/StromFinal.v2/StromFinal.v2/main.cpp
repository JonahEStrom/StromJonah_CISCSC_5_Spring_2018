/* 
 * File:   StromFinal.cpp
 * Author: Jonah Strom
 *
 * Created on June 1, 2018, 2:25 PM
 */

#include <iomanip>  // Formatting
#include <iostream> // cout/cin
#include <string>   // string
#include <fstream>  // read in files
#include <ctime>    // Random Number Generator
#include <cstdlib>  // Exit Function
#include <cmath>    // Floor Function

using namespace std;

//Functions
void info();
void intro(int pokemon);
float dmgCalc(

int main(int argc, char** argv) {
    //Constants
    const int PRCNT=100;
    const int SIZE=7;
    
    //Variables
    char ans;
    int turn, pokemon, count, move, oppmove, temp;
    float bulHP, chaHP, squHP, X, Y, Z, DMG;
    
    //Arrays
    float bul[SIZE], cha[SIZE], squ[SIZE];
    string moves[SIZE]={"Bulbasaur", "Charmander", "Squirtle", "Tackle",
    "Vine Whip", "Ember", "Bubble Beam"};
    
    //Files
    ifstream bulFile, chaFile, squFile;
    
    //Setting up random seed generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Setting up random number between 217-255 for 'Z'
    Z=(rand()%39)+217;
  
    //Introduction
    cout<<"Welcome, trainer!"<<endl;
    info();
    
    //Do-while loop to ask user whether to continue or not
    do
    {
         
    //Open up text files
    bulFile.open("bulbasaur.txt");
    chaFile.open("charmander.txt");
    squFile.open("squirtle.txt");
    
    for(int count=0; count<SIZE; count++)
        bulFile >> bul[count];
        bulHP=bul[1];
    
    for(int count=0; count<SIZE; count++)
        chaFile >> cha[count];
        chaHP=cha[1];
    
    for(int count=0; count<SIZE; count++)
        squFile >> squ[count];
        squHP=cha[1];
        
    //Close the files
    bulFile.close();
    chaFile.close();
    squFile.close(); 
       
    //Choose a Pokemon
    intro(pokemon);
    
    //Do-while loop to create a turn counter and check if both Pokemon can 
    //still fight or not 
    switch(pokemon)
        {
            case 1:
                cout<<"You've chosen Bulbasaur and your opponent has chosen "
                        "Charmander"<<endl;
                
                do
                {
                    for(int turn=1; bul[1]>1 && cha[1]>1; turn++)
                    {
                        //Turn # Displayed
                        cout<<"\nTurn #"<<turn<<endl;
                        cout<<endl;
                        //Setting up random seed generator for opponent 
                        //to choose a move
                        oppmove=(rand()%2)+5;                       
                        
                        cout<<"What will "<<moves[0]<<" do?\n"
                            "#1: "<<moves[4]<<"\n#2: "<<moves[3]<<endl;
                            cin>>move;
                            move+=3;
                            
                            if(oppmove==5)
                            { 
                                X=1.5, Y=2;
                                cout<<"\n"<<moves[1]<<" used "<<moves[5]<<endl;
                                cout<<"It is super effective!"<<endl;
                            }
                            if(oppmove==6)
                            {
                                X=1, Y=1;
                                cout<<"\n"<<moves[1]<<" used "<<moves[3]<<endl;
                            }
                        
                        //Damage calculation
                            DMG=((2*cha[0])/5+2)*(cha[2])*(cha[oppmove])
                            /(bul[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            bul[1]=bul[1]-DMG;
                    
                            if(bul[1]<1)
                                cout<<moves[0]<<" fainted! You lose!"<<endl;
                            
                            else
                                cout<<moves[0]<<" HP: "
                                        <<floor((bul[1]/bulHP)*PRCNT)<<"%"<<endl;
                            
                        //Choosing a move
                            if(move==4){
                                X=1.5, Y=.5;
                                cout<<"\n"<<moves[0]<<" used "<<moves[4]<<endl;
                                cout<<"It is not very effective..."<<endl;
                            }
                            if(move==5){
                                X=1, Y=1;
                                cout<<"\n"<<moves[0]<<" used "<<moves[3]<<endl;
                            }
                            
                            DMG=((2*bul[0])/5+2)*(bul[2])*(bul[move])
                                /(cha[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            cha[1]=cha[1]-DMG;
                    
                            if(cha[1]<1)
                                cout<<moves[1]<<" fainted! You won!"<<endl;
                            
                            else
                                cout<<moves[1]<<" HP: "<<floor(
                                        cha[1]/chaHP*PRCNT)
                                <<"%"<<endl;
                         
                        }
                }while(bul[1]>1 && cha[1]>1);
                break;
        
            case 2:
                cout<<"You've chosen Charmander and your opponent has chosen "
                        "Squirtle"<<endl;
                
                do
                {
                    for(int turn=1; cha[1]>1 && squ[1]>1; turn++)
                    {
                        //Turn # Displayed
                        cout<<"\nTurn #"<<turn<<endl;
                        cout<<endl;
                        //Setting up random seed generator for opponent 
                        //to choose a move
                        oppmove=(rand()%2)+5;                       
                        
                        cout<<"What will "<<moves[1]<<" do?\n"
                            "#1: "<<moves[5]<<"\n#2: "<<moves[3]<<endl;
                            cin>>move;
                            move+=3;
                            
                            if(oppmove==5)
                            { 
                                X=1.5, Y=2;
                                cout<<"\n"<<moves[2]<<" used "<<moves[6]<<endl;
                                cout<<"It is super effective!"<<endl;
                            }
                            if(oppmove==6)
                            {
                                X=1, Y=1;
                                cout<<"\n"<<moves[2]<<" used "<<moves[3]<<endl;
                            }
                        
                        //Damage calculation
                            DMG=((2*squ[0])/5+2)*(squ[2])*(squ[oppmove])
                            /(cha[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            cha[1]=cha[1]-DMG;
                    
                            if(cha[1]<1){
                                cout<<moves[1]<<" fainted! You lose!"<<endl;
                                
                            }
                            else
                                cout<<moves[1]<<" HP: "<<floor(
                                        cha[1]/chaHP*PRCNT)
                                <<"%"<<endl;
                           
                        //Choosing a move  
                            if(move==4){
                                X=1.5, Y=.5;
                                cout<<"\n"<<moves[1]<<" used "<<moves[6]<<endl;
                                cout<<"It is not very effective..."<<endl;
                            }
                            if(move==5){
                                X=1, Y=1;
                                cout<<"\n"<<moves[1]<<" used "<<moves[3]<<endl;
                            }
                            
                            DMG=((2*bul[0])/5+2)*(bul[2])*(bul[move])
                                /(cha[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            squ[1]=squ[1]-DMG;
                    
                            if(squ[1]<1)
                                cout<<moves[2]<<" fainted! You won!"<<endl;
                            else
                                cout<<moves[2]<<" HP: "<<floor(
                                        squ[1]/squHP*PRCNT)
                                <<"%"<<endl;

                        }
                }while(bul[1]>1 && cha[1]>1);
                break;
                        
            case 3:
                cout<<"You've chosen Squirtle and your opponent has chosen "
                        "Blubasaur"<<endl;
                do
                {
                    for(int turn=1; squ[1]>1 && bul[1]>1; turn++)
                    {
                        //Turn # Displayed
                        cout<<"\nTurn #"<<turn<<endl;
                        cout<<endl;
                        //Setting up random seed generator for opponent 
                        //to choose a move
                        oppmove=(rand()%2)+5;                       
                        
                        cout<<"What will "<<moves[2]<<" do?\n"
                            "#1: "<<moves[6]<<"\n#2: "<<moves[3]<<endl;
                            cin>>move;
                            move+=3;
                            
                            if(oppmove==5)
                            { 
                                X=1.5, Y=2;
                                cout<<"\n"<<moves[0]<<" used "<<moves[4]<<endl;
                                cout<<"It is super effective!"<<endl;
                            }
                            if(oppmove==6)
                            {
                                X=1, Y=1;
                                cout<<"\n"<<moves[0]<<" used "<<moves[3]<<endl;
                            }
                        
                        //Damage calculation
                            DMG=((2*bul[0])/5+2)*(bul[2])*(bul[oppmove])
                            /(squ[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            squ[1]=squ[1]-DMG;
                    
                            if(squ[1]<1){
                                cout<<moves[2]<<" fainted! You lose!"<<endl;
                                
                            }
                            else
                                cout<<moves[2]<<" HP: "<<floor(
                                        squ[1]/squHP*PRCNT)
                                <<"%"<<endl;
                            
                        //Choosing a move
                            if(move==4){
                                X=1.5, Y=.5;
                                cout<<"\n"<<moves[2]<<" used "<<moves[6]<<endl;
                                cout<<"It is not very effective..."<<endl;
                            }
                            if(move==5){
                                X=1, Y=1;
                                cout<<"\n"<<moves[2]<<" used "<<moves[3]<<endl;
                            }
                            
                            DMG=((2*squ[0])/5+2)*(squ[2])*(squ[move])
                                /(bul[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            bul[1]=bul[1]-DMG;
                        
                            if(bul[1]<1)
                                cout<<moves[0]<<" fainted! You won!"<<endl;
                            else
                                cout<<moves[0]<<" HP: "<<floor(
                                        bul[1]/bulHP*PRCNT)
                                <<"%"<<endl;
 
                        }
                }while(bul[1]>1 && cha[1]>1);
                break;
                        
            case 4:
                cout<<"You ran away!"<<endl;
                
        }    
                             
        cout<<"\nContinue?"<<endl;
        cin>>ans;
    }while(ans=='y'||ans=='Y');
  
    return 0;
}

void info(){
    cout<<"Bulbasaur     Charmander       Squirtle      HP=Health Points"<<endl;
    cout<<"Grass Type    Fire Type      Water Type      ATK=Attack"<<endl;
    cout<<"Level:  5     Level:  5       Level:  5      DEF=Defense"<<endl;
    cout<<"   HP: 45        HP: 39          HP: 44      SPD=Speed"<<endl;
    cout<<"  ATK: 57       ATK: 56         ATK: 49               "<<endl;
    cout<<"  DEF: 56       DEF: 46         DEF: 64               "<<endl;
    cout<<"  SPD: 45       SPD: 65         SPD: 43               "<<endl;
}

void intro(int pokemon){
    cout<<"\nChoose a number to select your Pokemon"<<endl;
    cout<<"#1: Bulbasaur    #2: Charmander    #3: Squirtle"<<endl;
    cout<<"                                   #4 to exit"<<endl;
    cin>>pokemon;
}

float dmgCalc(){
    DMG=((2*cha[0])/5+2)*(cha[2])*(cha[oppmove])
                            /(bul[3])/50+(2)*(Y)*(X)*(Z)/255;
                    
                            bul[1]=bul[1]-DMG;
}



