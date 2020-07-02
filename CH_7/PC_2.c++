#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int array_size = 12;
    double my_array[array_size], 
        largest = 0, 
        smallest= 0, 
        total = 0, 
        avg = 0;

    for (int i = 0; i < array_size; i++)
    {
        /* code */
        cout<<"Enter Rainfall for month-"<<i+1<<"  :  ";
        cin>>my_array[i];
    }

    largest = my_array[0];
    smallest = my_array[0];

    cout<<endl<<endl<<"--------------------"<<endl;
    for (int i = 0; i < array_size; i++)
    {

        cout<<"The Rainfall for Month-"<<i+1<<"  :  "<<my_array[i]<<endl;

        /* code */
        if( my_array[i] > largest)
            largest = my_array[i];
        else if ( my_array[i] < smallest)
            smallest = my_array[i];

        total += my_array[i]; 

    }

    avg = total / array_size;
    cout<<endl<<"The Largest Rainfall is  :  "<<largest;
    cout<<endl<<"The Smallest Ranfall is  :  "<<smallest;
    cout<<endl<<"The total  Rainfall  is  :  "<<total;
    cout<<endl<<"The Average Rainfall is  :  "<<avg;

    
    
    

}