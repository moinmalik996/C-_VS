// Student Line Up

#include <iostream>
#include<string>

using namespace std;

void main()
{
    int students;

    string name;
    string top_name = "AAAAAAAAA", least_name = "ZZZZZZZZZZ";

    cout << "Enter The Name OF The Students  :  ";
    cin >> students;

    if (students > 1 && students < 25) {

        for (int i = 1; i <= students; i++)
        {
            cout << endl << "Enter Name Of Student-" << i << "  :  ";
            cin >> name;

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

    }




    cin.get();
    cin.clear();
    cin.ignore();

}


