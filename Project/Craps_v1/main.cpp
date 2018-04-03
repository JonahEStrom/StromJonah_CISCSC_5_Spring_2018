//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char die1,die2;//Dice face values = [1,6]
    int w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;
    int l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;//count of dice throws
    int games;
    
    //Initialize
    games=100000;
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    
    //Check the statistics
    for(int game=1;game<=toss;game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        if(sum==7)w7++;
        else if(sum==1)w11++;
        else if(sum==2)12++;
        else if(sum==3)13++;
        else if(sum==12)112++;
        else{
            bool rollagn;
            do{
                rollagn=true;
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sum=die1+die2;
                if(sumAgn==7){
                    rollAgn=false;
                    if(sum==4)14++;
                    if(sum==5)15++;    
                    if(sum==6)15++;
                    if(sum==7)15++;
                    if(sum==8)15++;
                    if(sum==9)15++;
                    if(sum==10)15++;
                }else if(sumAgn==sum){
                    rollAgn=false;
                    switch(sum){
                        case 4:w4++;break;
                        case 5:w5++;break;
                        case 6:w6++;break;
                        case 7:w7++;break;
                        case 8:w8++;break;
                        case 9:w9++;break;
                        case 10:w10++;break;
                    }
                }
        }while(rollAgn);
        }
        switch(sum){
            case 2:w2++;break;
            case 3:w3++;break;
            case 4:w4++;break;
            case 5:w5++;break;
            case 6:w6++;break;
            case 7:w7++;break;
            case 8:w8++;break;
            case 9:w9++;break;
            case 10:w10++;break;
            case 11:w11++;break;
            case 12:w12++;break;
            default:cout<<"Logic Error"<<endl;
                    }while(rollagn);
        }
    }
    
    //Output the results
    cout<<"Number of craps games played = "<<toss<<endl;
    cout<<"Result Table"<<endl;
    cout<<"Throw       Wins     Loses"<<endl;
    cout<<"  2  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  3  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  4  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  5  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  6  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  7  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  8  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<"  9  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<" 10  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<" 11  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    cout<<" 12  "<<setw(10)<<w2<<setw(10)<<12<<endl;
    int wins=w2+w3+w4+w5+w6+w7+w8+w9+w10+w11+w12;
    int loss=l2+l3+l4+l5+l6+l7+l8+l9+l10+l11+l12;
    cout<<" Sum "<<setw(10)
            <<wins<<setw(10)
            <<loss<<setw(10)<<endl;
    //Exit program!
    return 0;
