#include <iostream>
#include<iomanip>
#include<vector>

using namespace std;

bool PinTest(vector<int>, vector<int>, int);

int main()
{
    int size = 7;

    vector<int> pin_1 { 2, 5, 8, 5, 4, 0, 6 };
    vector<int> pin_2 { 7, 8, 8, 3, 4, 6, 0 };
    vector<int> pin_3 { 7, 8, 8, 3, 4, 6, 0 };

    if(PinTest(pin_1, pin_2, size))
        cout<<endl<<"Pin_1 & Pin_2 Are Same.";
    else
        cout<<endl<<"Pin_1 & Pin_2 Are Not Same.";

    cout<<endl;

    if(PinTest(pin_1, pin_3, size))
        cout<<endl<<"Pin_1 & Pin_3 Are Same.";
    else
        cout<<endl<<"Pin_1 & Pin_3 Are Not Same.";

    cout<<endl;

    if(PinTest(pin_2, pin_3, size))
        cout<<endl<<"Pin_2 & Pin_3 Are Same.";
    else
        cout<<endl<<"Pin_2 & Pin_3 Are Not Same.";


    cout<<endl<<endl;



    return 0;

}


bool PinTest(vector<int> vect_1, vector<int> vect_2, int size) {

    for(int i  = 0;i < size; i++)
    {
        if(vect_1[i] != vect_2[i])
        {
            return false;
        }
    }

    return true;

}