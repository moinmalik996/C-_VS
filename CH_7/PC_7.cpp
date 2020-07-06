#include <iostream>
#include<iomanip>
#include<fstream>
#include<string>

int highest(int[], int);
int lowest(int[], int);
double total(int[], int);

using namespace std;

int main()
{
    string file_name;
    const int size = 100;
    int array[size] = {};
    ifstream inputfile;

    //cout<<"Enter File Name WIth Extension  :  ";
    //cin>>file_name;

    inputfile.open("numbers.txt");

    if(!inputfile){
        cout<<endl<<"Error in Opening File";
    }

    int counter = 0;
    while ( (inputfile >> array[counter]) && counter < size )
        
    

    inputfile.close();
    
    int high = highest(array, size);
    int low = lowest(array, size);
    double total_main = total(array, size);
    double avg = total_main/size;

    cout<<endl<<"The Lowest Number  :  "<<low;
    cout<<endl<<"The Highest Number :  "<<high;
    cout<<endl<<"The Total          :  "<<total_main;
    cout<<endl<<"The Average        :  "<<avg;



}



int highest(int arr[], int size){

    int highest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > highest)
            highest = arr[i];
    }

    return highest;
    
}

int lowest(int arr[], int size){
    
    int lowest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < lowest)
            lowest = arr[i];
    }

    return lowest;
    
}

double total(int arr[], int size){
    
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    return total;
    
}