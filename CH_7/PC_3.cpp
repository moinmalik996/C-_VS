#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    const int array_size = 5;
    int total = 0;
    string salsa_type[array_size] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jars_sold[array_size];

    for (int i = 0; i < array_size; i++)
    {
        /* code */
        cout<<"Enter Jars Sold for "<<salsa_type[i]<<"  :  ";
        cin>>jars_sold[i];

        if( jars_sold < 0){
            cout<<endl<<"You Entered Negative Value.";
            cout<<"Enter Jars Sold for "<<salsa_type[i]<<"  :  ";
            cin>>jars_sold[i];
        }
    }

    string lowest_salsa = salsa_type[0];
    int lowest_sold = jars_sold[0];
    string highest_salsa = salsa_type[0];
    int highest_sold = jars_sold[0];

    cout<<endl<<endl<<"Salsa  Type  :\t"<<"Jars Sold"<<endl;
    cout<<"---------------------------------"<<endl;

    for (int i = 0; i < array_size; i++)
    {

        cout<<salsa_type[i]<<"\t\t\t"<<jars_sold[i]<<endl;
        /* code */
        if ( jars_sold[i] > highest_sold){

            highest_sold = jars_sold[i];
            highest_salsa = salsa_type[i];

        } else if ( jars_sold[0] < lowest_sold){

            lowest_sold = jars_sold[0];
            lowest_salsa = salsa_type[i];

        }

        total += jars_sold[i];

    }

    cout<<endl<<"Total Jars Sold  :  "<<total;
    cout<<endl<<"Highest Sold Product  :  "<<highest_salsa;
    cout<<endl<<"Lowest Sold Product   :  "<<lowest_salsa;
    
    
    return 0;

}