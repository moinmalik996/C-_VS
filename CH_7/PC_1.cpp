#include<iostream>
#include<iomanip>

using namespace std;

int main(){


    const int array_size = 10;
    int num[array_size];


    for (int i = 0; i < array_size; i++)
    {
        cout<<"Enter Value of Item-"<<i+1<<"  :  ";
        cin>>num[i];
    }


    cout<<endl<<endl<<"Items in Array  :  "<<endl;

    for (int i = 0; i < array_size; i++)
    {
        cout<<num[i];
        cout<<endl; 
    }


    


return 0;

}