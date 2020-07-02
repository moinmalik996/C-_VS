#include <iostream>
#include<iomanip>

using namespace std;

void array_func(int [], int&, int&);

int main()
{
    int array_size = 10;
    int my_array[array_size] = {12, 34, 5, 45, 24, 7, 0, 67, 8, 3};
    int num = 7;

    array_func(my_array,array_size, num);

}



void array_func(int array[], int& size, int& num){

    cout<<endl<<"Number greater than "<<num<<" are  :  "<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(array[i] > num) {
            cout<<array[i]<<endl;
        }
    }
    

}