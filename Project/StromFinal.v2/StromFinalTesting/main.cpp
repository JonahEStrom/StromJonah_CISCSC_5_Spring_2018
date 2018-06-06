/* 
 * File:   StromFinal.cpp
 * Author: Jonah Strom
 *
 * Created on June 1, 2018, 2:25 PM
 */

#include <iomanip>  // cout/cin
#include <iostream> // cout/cin
#include <string>   // string
#include <fstream>  // read in files
#include <ctime>    // Random Number Generator
#include <cmath>

using namespace std;
//Global Constant for Arrays
const int SIZE=3;
const int STATS=7;
//Functions
int readFil(int pkmndat[][STATS]);
int dmgCalc(int DMG, int pkmndat[][STATS]);

int main(int argc, char** argv) {
    int pkmndat[SIZE][STATS];
    int DMG, Y, X, Z;
    ifstream inFile;
    
    readFil(pkmndat);
    
    cout<<pkmndat[0][1]<<endl;
    
    dmgCalc(DMG, pkmndat);
    
    
    
    return 0;
}

int readFil(int pkmndat[][STATS]){
    ifstream inFile;
    inFile.open("pkmndat.txt");
    
	for(int i=0; i<SIZE; i++)    //This loops on the rows.
	{
		for(int j=0; j<STATS; j++) //This loops on the columns
		{
			inFile >> pkmndat[i][j]; 
		}
	}
    
        for(int i=0; i<SIZE; i++)    //This loops on the rows.
	{
		for(int j=0; j<STATS; j++) //This loops on the columns
		{
			cout << pkmndat[i][j]  << "  ";
		}
		cout << endl;
	}
    inFile.close();
}

int dmgCalc(int DMG, int pkmndat[][STATS]){
    int X, Y, Z;
    int urMove, oppMove, urPoke, oppPoke;
    int level, attack, power, defense;
    
    cout<<"Pick a Pokemon"<<endl;
    cin>>urPoke;
    
    cout<<"Make a move"<<endl;
    cin>>urMove;
    
    if(urPoke==1){
        level=pkmndat[0][0];
        attack=pkmndat[0][2];
        cout<<level<<endl;
        cout<<attack<<endl;
    }
    if(oppPoke==1){
        level=pkmndat[0][0];
        defense=pkmndat[0][2];
    }
    if(urMove==1){
        power=pkmndat[0][6];
        cout<<power<<endl;
    }
    if(urMove==2){
        power=pkmndat[0][5];
    }
    
    /*level=5;
    attack=57;
    power=35;
    defense=46;
    X=1;
    Y=1;
    Z=217;
    */
    
    DMG=((2*level)
            /5+2)*(attack)*(power)
            /(defense)/50+(2)*(X)*(Y)*(Z)/255;
   
}