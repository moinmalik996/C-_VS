#include <iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    ifstream teams, winners;
    teams.open("Teams.txt");
    winners.open("WorldWinners.txt");

    string team, winner;
    int win_counts = 0;

    for(int i = 0; i < 35; i++)
    {
        teams >> team;
        cout<<"Teams-"<<i+1<<" : "<<team<<endl;
    }

    cout<<endl<<endl<<"Enter Team Name  :  ";
    cin>>winner;

    for(int i = 0; i < 35; i++)
    {
        string temp;
        winners >> temp;

        if(temp == winner){
            win_counts++;
        }
    }
    
    cout<<endl<<endl<<"The Team Has Won "<<win_counts<<" times"<<endl<<endl;



    return 0;
    

}