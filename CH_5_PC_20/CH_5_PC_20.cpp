// CH_5_PC_20.cpp : Random Number Guessing Game

#include <iostream>

using namespace std;

int main()
{
	int random = rand() % 10 + 1;

	int num;

	do
	{
		cout << "Guess The Number between ( 1 - 10 )   :   ";
		cin >> num;

		if (num > random)
			cout << endl << "Too High. Try Again !";
		else if (num < random)
			cout << endl << "Too Low. Try Again !";
		else
			break;

		cout << endl << endl;


	} while (num != random);



	cout << endl << "Congratulations  ! You Have Guessed The Number.";


	cout << endl << endl;

}
