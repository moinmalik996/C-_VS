// CH_5_PC_25.cpp : Using Files - Student LineUp

#include <iostream>
#include<fstream>

using namespace std;


int main()
{
    ifstream mynames;
    mynames.open("names.txt");

    string name;
    string top_name = "AAAAAAAAA", least_name = "ZZZZZZZZZZ";

    while (mynames >> name)  // Checking Loop
    {
        mynames >> name;  // Giving Value To Name

        if (name < top_name) {

            least_name = name;

        }
        else if (name > least_name) {

            top_name = name;
        }
        else
        {
            top_name = least_name = name;
        }

    }

        cout << endl << endl << "Front Student   :   " << least_name;
        cout << endl << endl << "Last Student    :   " << top_name;

   


        cout << endl << endl;

}