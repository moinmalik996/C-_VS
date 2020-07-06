// Lottery Application
#include <iostream>
#include<iomanip>

using namespace std;


int main()
{
    int lottery[5], user[5];
    int matching = 0;

    cout<<endl<<endl;

    for (int i = 0; i < 5; i++)
    {
        int temp = rand() % 10 + 1;
        lottery[i] = temp;
    }

    for( int i = 0; i < 5; i++)
    {
        cout<<"Enter Number-"<<i+1<<" : ";
        cin>>user[i];

        if(lottery[i] == user[i])
            matching++;
    }

    
    cout<<endl<<endl<<"Lottery Numbers  :  ";
    for(int i = 0; i < 5; i++)
    {
        cout<<lottery[i]<<"\t";
    }

    cout<<endl<<endl<<"User Numbers     :  ";
    for(int i = 0; i < 5; i++)
    {
        cout<<user[i]<<"\t";
    }

    if(matching == 5){
        cout<<endl<<"\nCongratulations. You have Won the Ticket"<<endl<<endl;
    } else {
        cout<<endl<<"\nYou only have "<<matching<<" matching Numbers."<<endl<<endl;
    }
}