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
#include <cmath>    // Ceil Function
#include <cstdlib>  // Exit Function
#include <vector>   // Vector Function

using namespace std;

//Global Constant for Arrays... Is this OK? Functions that have SIZE/STATS 
//will not work if those constants are not above the functions... Or am I 
//doing something wrong?
const int SIZE=3;   //pkmndat (Bulbasaur, Charmander, Squirtle)
const int STATS=7;  //(LVL, HP, ATK, DEF, SPD, and two moves each Pokemon

//Functions
void readFil(int pkmndat[][STATS]); //Fill up pokemon data from the file
void dmgCalc(float DMG, float oppDMG, int pkmndat[][STATS], int result, 
        int oppRslt, int LVL, int HP, int ATK, int DEF, int SPD, int oppLVL,
        int oppHP, int oppATK, int oppDEF, int oppSPD); //Damage Calculation
int chose(int urPkmn);      //Function to pick a Pokemon
int opChose(int oppPkmn);   //Function for opponent to pick a Pokemon
void pkmnInf();             //Basic information about the game
void faint(int HP, int oppHP, int pkmndat[][STATS]);    //Output win or loss
int turn(int HP, int oppHP);//Count the turns played

int main(int argc, char** argv) {
    const int SIZE=3;
    const int STATS=7;
    int pkmndat[SIZE][STATS];
    float DMG, oppDMG, Y, X, Z;            //Pokemon's formula for battle damage
    int urPkmn, oppPkmn, result, oppRslt;  //Determining which Pokemon are picked
    int LVL, HP, ATK, DEF, SPD;
    int oppLVL, oppHP, oppATK, oppDEF, oppSPD;
    ifstream inFile;                       //Open up pkmndat.txt 
    char ans, end;                         //For whether to continue or not
    int turn;
                    
    
    srand(static_cast<unsigned int>(time(0)));  //Setting up random seed generator
    
    readFil(pkmndat);   //Putting variables into the program from the file
    
    pkmnInf();          //Outputting introduction for the users
    
    do                  //do-while to see if user wants to continue or not
    {
    result = chose(urPkmn);
    if(result==1){          //bulbasaur's stats are being fed into this program
        LVL=pkmndat[0][0];
        HP=pkmndat[0][1];
        ATK=pkmndat[0][2];
        DEF=pkmndat[0][3];
        SPD=pkmndat[0][4];
    }
    if(result==2){          //charmander's stats are being fed into this program
        LVL=pkmndat[1][0];
        HP=pkmndat[1][1];
        ATK=pkmndat[1][2];
        DEF=pkmndat[1][3];
        SPD=pkmndat[1][4];
    }
    if(result==3){          //squirtle's stats are being fed into this program
        LVL=pkmndat[2][0];
        HP=pkmndat[2][1];
        ATK=pkmndat[2][2];
        DEF=pkmndat[2][3];
        SPD=pkmndat[2][4];
    }
    
    oppRslt = opChose(oppPkmn);
    if(oppRslt==1){        //Feed stats into the program on whichever the 
                           //opponent picked
        oppLVL=pkmndat[0][0];
        oppHP=pkmndat[0][1];
        oppATK=pkmndat[0][2];
        oppDEF=pkmndat[0][3];
        oppSPD=pkmndat[0][4];
    }
    if(oppRslt==2){
        oppLVL=pkmndat[1][0];
        oppHP=pkmndat[1][1];        
        oppATK=pkmndat[1][2];
        oppDEF=pkmndat[1][3];
        oppSPD=pkmndat[1][4];
    }
    if(oppRslt==3){
        oppLVL=pkmndat[2][0];
        oppHP=pkmndat[2][1];
        oppATK=pkmndat[2][2];
        oppDEF=pkmndat[2][3];
        oppSPD=pkmndat[2][4];
    }
    
    //Calling damage function to begin the battle
    dmgCalc(DMG, oppDMG, pkmndat, result, oppRslt, LVL, HP, ATK, DEF, SPD, 
            oppLVL, oppHP, oppATK, oppDEF, oppSPD);
    
    //This refers to do-while up there, doing this will also reset the damages
    cout<<"Continue?"<<endl;
    cin>>ans;
    }while(ans=='y'||ans=='Y');
    return 0;
}

void readFil(int pkmndat[][STATS]){
    ifstream inFile;
    inFile.open("pkmndat.txt");
    
	for(int i=0; i<SIZE; i++)    //This loops on the rows.
	{
		for(int j=0; j<STATS; j++) //This loops on the columns
		{
			inFile >> pkmndat[i][j]; //Stream variables into the 2D array
		}
	}
    inFile.close();
}

int chose(int urPkmn){
    
    cout<<"\nChoose a Pokemon to battle!"<<endl;
    cout<<"#1: Bulbasaur    #2: Charmander    #3: Squirtle"<<endl;
    cin>>urPkmn;
    if(urPkmn==1)                   //cout Pokemon based on what user just picked
        cout<<"You chose Bulbasaur"<<endl;
    if(urPkmn==2)
        cout<<"You chose Charmander"<<endl;
    if(urPkmn==3)
        cout<<"You chose Squirtle"<<endl;
    
    return urPkmn;
}

int opChose(int oppPkmn){
    cout<<"Opponent choosing a Pokemon..."<<endl;
    
    oppPkmn=(rand()%3)+1;   //I use this random number generator to allow 
                            //the opponent to choose a Pokemon randomly

    if(oppPkmn==1)
        cout<<"Opponent chose Bulbasaur"<<endl;
    if(oppPkmn==2)
        cout<<"Opponent chose Charmander"<<endl;
    if(oppPkmn==3)
        cout<<"Opponent chose Squirtle"<<endl;
    
    
    return oppPkmn;
}

void dmgCalc(float DMG, float oppDMG, int pkmndat[][STATS], int result, 
        int oppRslt, int LVL, int HP, int ATK, int DEF, int SPD, int oppLVL,
        int oppHP, int oppATK, int oppDEF, int oppSPD){
    
    float X, Y, Z;
    int urMove, oppMove;
    string moves[3][2]={{"Tackle", "Vine Whip"}, {"Scratch", "Ember"}, {"Tackle",
    "Bubble Beam"}};    //Saving up names of moves, it is easier that way
    string names[3]={"Bulbasaur", "Charmander", "Squirtle"}; //same here
    int urPkmn, oppPkmn, POW, oppPOW; //All moves have 35 points of damage
    vector<int> index(1, 0); //Use it to store and count turns
    
    
    do  //do-while that will loop until either or both Pokemon fainted 
        //(HP going below 0)
    {
    Z=(rand()%39)+217;      //This is random assigned variable to randomize 
                            //the damage slightly
    oppMove=(rand()%2)+1;   //This is used to determine what move 
                            //the opponent will use
    oppPOW=35;
    POW=35;
    
    turn(HP, oppHP);        //Calling turn function to feed into vector's container
    cout<<"\nTurn: "<<index.size()<<endl;//reads out how many elements in vector
                                         //which turns into a turn counter
    
    //Output proper moves for Pokemon the user picked
    switch(result)
    {
        case 1:
            
            cout<<"\nMake a move"<<endl;
            cout<<"#1: Tackle   #2: Vine Whip"<<endl;
            cout<<"Press '3' to end the program"<<endl;

            cin>>urMove;
            if(urMove==3){
                exit(0);    //This is to exit the program completely
            }
            while(urMove != 1 && urMove != 2)
            {
                //Input validation, must be either 1 or 2
                cout<<"Try again"<<endl;
                cin>>urMove;
            }
            break;
        
            
        case 2:
        
            cout<<"\nMake a move"<<endl;
            cout<<"#1: Scratch  #2: Ember"<<endl;
            cout<<"Press '3' to end the program"<<endl;
            cin>>urMove;
            if(urMove==3){
                exit(0);
            }
            while(urMove != 1 && urMove != 2)
            {
                cout<<"Try again"<<endl;
                cin>>urMove;
            }
            break;
        
            
        case 3:
        
            cout<<"\nMake a move"<<endl;
            cout<<"#1: Tackle   #2: Bubble Beam"<<endl;
            cout<<"Press '3' to end the program"<<endl;
            cin>>urMove;
            if(urMove==3){
                exit(0);
            }
            while(urMove != 1 && urMove != 2)
            {
                cout<<"Try again"<<endl;
                cin>>urMove;
            }
            break;
        
    }
    
    //This is used to output what Pokemon and what move both the user and 
    //the opponent are going to use
    if(result==1){
        cout<<names[0]<<" used "<<endl;
        if(urMove==1){
            urMove-=1;  //Subtracting by one so the number will match 
                        //the array at the next line
            cout<<moves[0][urMove]<<endl;
        }
        if(urMove==2){
            urMove-=1;
            cout<<moves[0][urMove]<<endl;
        }
    }
    
    if(result==2){
        cout<<names[1]<<" used "<<endl;
        if(urMove==1){
            urMove-=1;
            cout<<moves[1][urMove]<<endl;
        }
        if(urMove==2){
            urMove-=1;
            cout<<moves[1][urMove]<<endl;
        }
    }
    
    if(result==3){
        cout<<names[2]<<" used "<<endl;
        if(urMove==1){
            urMove-=1;
            cout<<moves[2][urMove]<<endl;
        }
        if(urMove==2){
            urMove-=1;
            cout<<moves[2][urMove]<<endl;
        }
    }
    
    if(oppRslt==1){
        cout<<names[0]<<" used "<<endl;
        if(oppMove==1){
            oppMove-=1;
            cout<<moves[0][oppMove]<<endl;
        }
        if(oppMove==2){
            oppMove-=1;
            cout<<moves[0][oppMove]<<endl;
        }
    }
    
    if(oppRslt==2){
        cout<<names[1]<<" used "<<endl;
        if(oppMove==1){
            oppMove-=1;
            cout<<moves[1][oppMove]<<endl;
        }
        if(oppMove==2){
            oppMove-=1;
            cout<<moves[1][oppMove]<<endl;
        }
    }
    
    if(oppRslt==3){
        cout<<names[2]<<" used "<<endl;
        if(oppMove==1){
            oppMove-=1;
            cout<<moves[2][oppMove]<<endl;
        }
        if(oppMove==2){
            oppMove-=1;
            cout<<moves[2][oppMove]<<endl;
        }
    } 
    
    //This is used to calculate the special variables in the damage formula
    //X is same-type move effectiveness (if pokemon's type matches to 
    //the move it used, then it will do 1.5 damage
    //Y is type effectiveness, if the move is super effective on 
    //the opponent's pokemon, then it will do double damage. 
    //Halve the damage for vice versa
    if(result==1 && urMove==0){
        if(oppRslt==1){
            X=1, Y=1;
        }
        if(oppRslt==2){
            X=1, Y=1;
        }
        if(oppRslt==3){
            X=1, Y=1;
        }
    }
    
    if(result==1 && urMove==1){
        if(oppRslt==1){
            X=1.5, Y=1;    
        }
        if(oppRslt==2){
            X=1.5, Y=.5;
            cout<<"It is not effective..."<<endl;
        }
        if(oppRslt==3){
            X=1.5, Y=2;
            cout<<"It is super effective!"<<endl;
        }
    }
    
    if(result==2 && urMove==0){
        if(oppRslt==1){
            X=1, Y=1;
        }
        if(oppRslt==2){
            X=1, Y=1;
        }
        if(oppRslt==3){
            X=1, Y=1;
        }
    }
    
    if(result==2 && urMove==1){
        if(oppRslt==1){
            X=1.5, Y=2;
            cout<<"It is super effective!"<<endl;
        }
        if(oppRslt==2){
            X=1.5, Y=1;
        }
        if(oppRslt==3){
            X=1.5, Y=.5;
            cout<<"It is not effective..."<<endl;
        }
    }
    
    if(result==3 && urMove==0){
        if(oppRslt==1){
            X=1, Y=1;
        }
        if(oppRslt==2){
            X=1, Y=1;
        }
        if(oppRslt==3){
            X=1, Y=1;
        }
    }
    
    if(result==3 && urMove==1){
        if(oppRslt==1){
            X=1.5, Y=.5;
            cout<<"It is not effective..."<<endl;
        }
        if(oppRslt==2){
            X=1.5, Y=2;
            cout<<"It is super effective!"<<endl;
        }
        if(oppRslt==3){
            X=1.5, Y=1;
        }
    }
    
    if(oppRslt==1 && oppMove==0){
        if(result==1){
            X=1, Y=1;
        }
        if(result==2){
            X=1, Y=1;
        }
        if(result==3){
            X=1, Y=1;
        }
    }
    
    if(oppRslt==1 && oppMove==1){
        if(result==1){
            X=1.5, Y=1;    
        }
        if(result==2){
            X=1.5, Y=.5;
            cout<<"It is not effective..."<<endl;
        }
        if(result==3){
            X=1.5, Y=2;
            cout<<"It is super effective!"<<endl;
        }
    }
    
    if(oppRslt==2 && oppMove==0){
        if(result==1){
            X=1, Y=1;
        }
        if(result==2){
            X=1, Y=1;
        }
        if(result==3){
            X=1, Y=1;
        }
    }
    
    if(oppRslt==2 && oppMove==1){
        if(result==1){
            X=1.5, Y=2;
            cout<<"It is super effective!"<<endl;
        }
        if(result==2){
            X=1.5, Y=1;
        }
        if(result==3){
            X=1.5, Y=.5;
            cout<<"It is not effective..."<<endl;
        }
    }
    
    if(oppRslt==3 && oppMove==0){
        if(result==1){
            X=1, Y=1;
        }
        if(result==2){
            X=1, Y=1;
        }
        if(result==3){
            X=1, Y=1;
        }
    }
    
    if(oppRslt==3 && oppMove==1){
        if(result==1){
            X=1.5, Y=.5;
            cout<<"It is not effective..."<<endl;
        }
        if(result==2){
            X=1.5, Y=2;
            cout<<"It is super effective!"<<endl;
        }
        if(result==3){
            X=1.5, Y=1;
        }
    }
    
    //The battle damage formula
    DMG=((2*LVL)
            /5+2)*(ATK)*(POW)
            /(oppDEF)/50+(2)*(X)*(Y)*(Z)/255;
    
    //Calculate for opponent HP after the attack
    oppHP=oppHP-DMG;
    
    cout<<"\nYour Attack did "<<ceil(DMG)<<" points of damage";
    cout<<"\nYour opponent Pokemon's HP is "<<ceil(oppHP)<<endl;
    
    
    //Calculate for your HP after the attack
    oppDMG=((2*oppLVL)
            /5+2)*(oppATK)*(oppPOW)
            /(DEF)/50+(2)*(X)*(Y)*(Z)/255;
    
    HP=HP-oppDMG;
    
    //Stores how many times the user make a move
    index.push_back(urMove);
    
    
    cout<<"\nOpponent's Attack did "<<ceil(oppDMG)<<" points of damage";
    cout<<"\nYour Pokemon's HP is "<<ceil(HP)<<endl;
    
    faint(HP, oppHP, pkmndat);
    
}while(HP>1 && oppHP>1);
  
}

void faint(int HP, int oppHP, int pkmndat[][STATS]){
    if(HP<1){
        cout<<"You lose!"<<endl;
        
    }
    else if(oppHP<1){
        cout<<"You win!"<<endl;
        
    }
    else if(HP<1 && oppHP<1){
        cout<<"It is a draw!"<<endl;
    }
}

int turn(int HP, int oppHP){
    if(HP>1 && oppHP>1){
       int i=0;
       i++;
       return i;
    }
}

void pkmnInf(){
    cout<<setw(10)<<endl;
    cout<<setw(10)<<"        Welcome to Pokemon, trainer!                     "<<endl;
    cout<<setw(10)<<"                                                         "<<endl;
    cout<<setw(10)<<"Bulbasaur     Charmander       Squirtle  HP=Health Points"<<endl;
    cout<<setw(10)<<"Grass Type    Fire Type      Water Type        ATK=Attack"<<endl;
    cout<<setw(10)<<"Level:  5     Level:  5       Level:  5       DEF=Defense"<<endl;
    cout<<setw(10)<<"   HP: 45        HP: 39          HP: 44         SPD=Speed"<<endl;
    cout<<setw(10)<<"  ATK: 57       ATK: 56         ATK: 49                  "<<endl;
    cout<<setw(10)<<"  DEF: 56       DEF: 46         DEF: 64                  "<<endl;
    cout<<setw(10)<<"  SPD: 45       SPD: 65         SPD: 43                  "<<endl;
    cout<<setw(10)<<"                                                         "<<endl;
    cout<<setw(10)<<"         Types Effectivenesses:                          "<<endl;
    cout<<setw(10)<<"        Grass Type > Water Type                          "<<endl;
    cout<<setw(10)<<"            ^ Fire Type  v                               "<<endl; 
}

