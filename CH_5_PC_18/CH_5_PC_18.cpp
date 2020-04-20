// CH_5_PC_18.cpp : Population Bar Chart 

#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream myfile;
	myfile.open("people.txt");

	int people, year=1900, people_unit;

	cout << "Population Bar Graph" << endl;
	cout << "--------------------" << endl << endl;

	if (myfile) {

		while (myfile >> people)
		{
			cout << year<<"   ";

			people_unit = people / 1000;

			for (int i = 1; i <= people_unit; i++)
			{
				cout << "*";
			}

			year += 20;
			cout << endl;
		}


	}
	else
	{
		cout << endl << "Error Opening File";
	}


	cout << endl << endl;
}

