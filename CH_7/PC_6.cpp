#include <iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
    const int months = 3;
    const int days = 30;
    int rainy = 0, cloudy = 0, sunny = 0; 
    int total_r, total_c, total_s;

    char weather[months][days];

    ifstream inputfile;
    inputfile.open("RainorShine.txt");


    // Getting Data from file
    for (int i = 0; i < months; i++)
    {
        /* code */
        for (int j = 0; j < days; j++)
        {
            /* code */
            inputfile >> weather[i][j];
        }
        
    }

    inputfile.close();

    total_c = 0;
    total_r = 0;
    total_s = 0;

    for (int i = 0; i < months; i++)
    {

        rainy  = 0;
        cloudy = 0;
        sunny  = 0;

        for (int j = 0; j < days; j++)
        {
            /* code */
            switch (weather[i][j])
            {
            case 'R':
                rainy++;
                total_r++;
                break;
            case 'C':
                cloudy++;
                total_c++;
            case 'S':
                sunny++;
                total_s++;
            default:
                break;
            }
            

        }

        cout<<endl<<endl<<"For Month-"<<i+1<<" : ";
        cout<<endl<<"-------------------"<<endl;
        cout<<"No. Of Rainy Days   :  "<<rainy<<endl;
        cout<<"No. Of Cloudy Days  :  "<<cloudy<<endl;
        cout<<"No. Of Sunny Days   :  "<<sunny<<endl;
        
    }

    cout<<endl<<"Total of 3 Months  :  ";
    cout<<endl<<"----------------------"<<endl;
    cout<<"No. Of Rainy Days   :  "<<total_r<<endl;
    cout<<"No. Of Cloudy Days  :  "<<total_c<<endl;
    cout<<"No. Of Sunny Days   :  "<<total_s<<endl;
    
    
    

}