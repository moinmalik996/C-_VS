// CH_6_PC_10.cpp : Future Value

#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;

double futureValue(double, double, int);

int main()
{
	double present, future, monthly_interest_rate;
	int months;

	cout << "Enter Present Value           :   ";
	cin >> present;
	
	cout << "Enter Monthly Interest Rate   :   ";
	cin >> monthly_interest_rate;

	cout << "Enter No. Of Months           :   ";
	cin >> months;

	future = futureValue(present, monthly_interest_rate, months);

	cout << endl << endl;
	cout << "=====================================" << endl;
	cout << "The Future Value Will Be    :   " << future;


	cout << endl << endl;
}



double futureValue(double present_value, double monthly_interest, int no_of_months) {

	double future_value,interest_value;
	interest_value = monthly_interest / 100;
	future_value = (present_value) * (pow((1 + interest_value), (no_of_months)));
	return future_value;
}

