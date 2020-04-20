// CH_5_PC_20.cpp : Random Number Guessing Game

#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	int num;
	int num1;
	int random = rand() % 10 + 1;
	ofstream myfile;
	ifstream myfile1;

	myfile.open("numbers.txt");
	

	if (myfile) {

		do
		{
			cout << "Guess The Number between ( 1 - 10 )   :   ";
			cin >> num;

			myfile << num << endl;

			if (num > random)
				cout << endl << "Too High. Try Again !";
			else if (num < random)
				cout << endl << "Too Low. Try Again !";
			else
				break;

			cout << endl << endl;


		} while (num != random);

	}


	cout << endl << "Congratulations  ! You Have Guessed The Number.\n";
	cout << endl << "Numbers You Entered  !\n";

	myfile1.open("numbers.txt");
	while (myfile1 >> num1)
	{
		cout << num1 << endl;
	}



	cout << endl << endl;

}
