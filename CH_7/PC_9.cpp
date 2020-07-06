#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int size = 7;
    long int empID[size] = {5658845, 4520125, 7895122, 
                            9777541, 8451277, 1302850,
                            7580489};

    int hours[size];
    int payRate[size];
    int wages[size];

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<endl<<"For Employee-"<<i+1<<" : "<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Enter Hours     :  ";
        cin>>hours[i];
        cout<<"Enter Pay Rate  :  ";
        cin>>payRate[i];

        wages[i] = hours[i] * payRate[i];
    }

    cout<<endl<<"\tStatistics";
    cout<<endl<<"\t----------"<<endl<<endl;


    for (int i =0; i < size; i++)
    {
        cout<<"Employee-"<<i+1<<"  :  "<<wages[i]<<endl;
    }
    

    return 0;

}