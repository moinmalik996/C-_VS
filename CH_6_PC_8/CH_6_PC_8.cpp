// CH_6_PC_8.cpp : Coin Toss
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

string coinToss();

int main()
{
	int no_of_tosses;

	cout << "Enter No. Of Tosses    :    ";
	cin >> no_of_tosses;

	for (int i = 1; i <= no_of_tosses; i++)
	{
		cout << endl << "You Have Tossed and Get    :   " << coinToss();
	}


	cin.get();
	cin.clear();
	cin.ignore();
}


string coinToss() {

	string choice;
	int random = rand() % 2 + 1;

	if (random == 1) {
		choice = "Heads";
	}
	else
	{
		choice = "Tails";
	}

	return choice;
}