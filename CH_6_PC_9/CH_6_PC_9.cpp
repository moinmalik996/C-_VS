// CH_6_PC_9.cpp : Present Value
#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;

double presentValue(double, double, int);

int main()
{
	double future, interest_rate, present_value;
	int years;

	cout << "Enter The Future Value     :   ";
	cin >> future;

	cout << "Enter The Interest Rate    :   ";
	cin >> interest_rate;

	cout << "Enter No. Of Years         :   ";
	cin >> years;

	present_value = presentValue(future, interest_rate, years);

	cout << endl << endl;
	cout << "===================================" << endl;
	cout << "The Present Value Will Be   :   " << setprecision(6) << present_value;



	cout << endl << endl;
}




double presentValue(double f_value, double interest_rate, int no_of_years) {

	double present;
	present = (f_value) / (pow((1 + interest_rate), (no_of_years)));
	return present;
}





