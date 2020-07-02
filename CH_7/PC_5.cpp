#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int monkeys = 3;
    const int days = 5;
    double my_array[monkeys][days];
    double avg_per_day = 0;
    double total;  
    

    for (int i = 0; i < monkeys; i++)
    {
        cout<<"Enter Food Eaten For Monkey-"<<i+1<<"  :"<<endl;
        cout<<"----------------------------------"<<endl<<endl;
        /* code */
        for (int j = 0; j < days; j++)
        {
            /* code */
            cout<<"For Day-"<<j+1<<"  :  ";
            cin>>my_array[i][j];
        }
        
    }

    int least = my_array[0][0];
    int greatest = my_array[0][0];

    for (int i = 0; i < monkeys; i++)
    {
        /* code */
        for (int j = 0; j < days; j++)
        {
            /* code */
            if (my_array[i][j] > greatest)
                greatest = my_array[i][j];

            else if (my_array[i][j] < least)
                least = my_array[i][j];
        }
        
    }
    

    for (int i = 0; i < days; i++)
    {
        cout<<endl;
        total = 0;
        /* code */
        for (int j = 0; j < monkeys; j++)
        {
            /* code */
            total += my_array[j][i];
        }

        avg_per_day = total / monkeys;

        cout<<fixed<<showpoint<<setprecision(1)<<"Average Food Eaten For Day-"<<i+1<<"  :  "<<avg_per_day;
        
    }

    cout<<endl<<"The Greatest food Eaten During Week is  :  "<<greatest;
    cout<<endl<<"The Least Food Eaten During Week is     :  "<<least;
    
    

}