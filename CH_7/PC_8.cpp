#include <iostream>
#include<iomanip>

using namespace std;

const int col = 3;
const int row = 3;

bool is_LoShu(int [][col], int);

int main()
{

    int my_array[row][col];


    for (int i = 0; i < row; i++){

        for (int j =0; j < col; j++){
            cout<<"Enter Elements in array  :  ";
            cin>>my_array[i][j];
        }
    }


    if ( is_LoShu(my_array, row) ){

        cout<<endl<<endl<<"The Suare is Magic Lo Shu Square.";

    } else {

        cout<<endl<<endl<<"The Suare is Not Magic Lo Shu Square.";
        
    }


    return 0;
}




bool is_LoShu(int arr[][col], int row){

    // Make a Reference Sum
    int total_ref = 0;
    for (int i = 0; i < row; i++)
    {
        total_ref += arr[i][0];
    }

    int sum = 0;

    // Check Rows Sum with Reference SUM
    for (int i = 0; i < row; i++)
    {
        sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if (sum != total_ref){
            return false;
        }
        
    }

    // Check Columns Sum with Reference SUM
    for (int i = 0; i < col; i++)
    {
        sum = 0;

        for (int j = 0; j < row; j++)
        {
            sum += arr[i][j];
        }

        if (sum != total_ref){
            return false;
        }
        
    }


    // Checking for 1st Diagonal
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }

    if (sum != total_ref){
        return false;
    }


    // Checking for 2nd Diagonal
    sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum += arr[2-i][i];
    }

    if (sum != total_ref){
        return false;
    }
    
    return true;
    

}