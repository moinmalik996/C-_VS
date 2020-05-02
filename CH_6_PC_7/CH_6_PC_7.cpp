// CH_6_PC_7.cpp : Celcius Farenheit Temprature
//

#include <iostream>
#include<iomanip>

using namespace std;

double celcius(double);

int main()
{
	for (double i = 1; i <= 20; i++)
	{
		cout << "Farenheit   :   " << setw(2) << i << "   Celcius  :  " << celcius(i) << endl;
	}

}



double celcius(double farenheit) {

	double celcius1;
	celcius1 = (5 / 9) * (farenheit - 32);
	return celcius1;
}
