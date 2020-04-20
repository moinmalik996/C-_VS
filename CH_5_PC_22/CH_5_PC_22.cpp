// CH_5_PC_22.cpp :  Square DIsplay

#include <iostream>

using namespace std;

int main()
{
    int length;

    cout << "Enter The Length Of The Square   :   ";
    cin >> length;

    if (length <= 15 && length > 0) {

        cout << endl << endl;

        for (int i = 1; i <= length; i++)
        {
            for (int i = 0; i < length; i++)
            {
                cout << "X";
            }

            cout << endl;
        }
    }
    else {
        cout << endl << endl << "You have Entered Invalid Number";
    }



    cout << endl << endl;
}

