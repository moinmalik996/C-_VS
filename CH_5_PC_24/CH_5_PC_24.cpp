// CH_5_PC_24.cpp : Using Files- Numeric Analysis

#include <iostream>
#include<fstream>

using namespace std;


int main()
{
	int number,
		num_count=0,
		sum = 0;

	double avg;

	ifstream mynumbers;
	mynumbers.open("numbers.txt");

	if (mynumbers) {

		while (mynumbers >> number)
		{
			num_count++;
			cout << number << "\n";
			sum += number;
		}

		avg = sum / num_count;
		cout << endl << "The Sum Of Numbers      :   " << sum;
		cout << endl << "The Average Of Numbers  :   " << avg;


	}
	else {
		cout << "Error Opening File.";
	}
}


