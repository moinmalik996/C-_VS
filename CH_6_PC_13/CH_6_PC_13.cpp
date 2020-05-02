// CH_6_PC_13.cpp : Days Out
#include <iostream>
#include<iomanip>

using namespace std;

int employees();
int daysout(int);
double avg_days_absent(int, int);

int main()
{
	int no_of_employees = employees();
	int days_out = daysout(no_of_employees);
	double avg = avg_days_absent(no_of_employees, days_out);

	cout << endl << endl;
	cout << "============================================" << endl;
	cout << "The Total No. Of Employees			       :   " << no_of_employees << endl;
	cout << "The Total No. Of Days Out			       :   " << days_out << endl;
	cout << "The Average Days Out Per Employees        :   " << avg;



	cout << endl << endl;
	cin.get();
	cin.ignore();
	cin.clear();

}



int employees() {

	int no_of_employees;

	cout << "Enter No. Of Employees   :   ";
	cin >> no_of_employees;

	while (no_of_employees < 0)
	{
		cout << endl << "Error";
		cout << "Enter No. Of Employees   :   ";
		cin >> no_of_employees;
	}

	return no_of_employees;

}

int daysout(int employees) {

	int days_out;
	int total_days = 0;;
	for (int i = 1; i <= employees; i++)
	{
		cout << endl << "Enter No. Of Days Out For Employee-" << i << "   :   ";
		cin >> days_out;

		total_days += days_out;
	}

	return total_days;
}

double avg_days_absent(int employees, int daysout) {

	double avg = daysout / employees;
	return avg;

}
