#include<iostream>
#include<iomanip>

using namespace std;

int main(){


    const int array_size = 10;
    int num[array_size];
    int greatest, smallest;


    for (int i = 0; i < array_size; i++)
    {
        cout<<"Enter Value of Item-"<<i+1<<"  :  ";
        cin>>num[i];
    }


    greatest = num[0];
    smallest = num[0];


    for (int i = 0; i < array_size; i++)
    {
        if(num[i] > greatest) {
            greatest = num[i];
        } else if (num[i] < smallest) {
            smallest = num[i];
        }
    }

    cout<<"\n\nGreatest  =  "<<greatest<<endl;
    cout<<"Smallest  =  "<<smallest;


    


return 0;

}