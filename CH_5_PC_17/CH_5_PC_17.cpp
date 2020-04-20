// CH_5_PC_17.cpp : Sales Bar Chart

#include <iostream>

using namespace std;



int main()
{
    int store = 5, today_sales, sales_unit;

	for (int i = 1; i <= store; i++) {

		cout << endl << "Enter Sales For Store-" << i << "   :   ";
		cin >> today_sales;

		sales_unit = today_sales / 100;

		cout << "For Store-" << i << "  :  ";

		for (int j = 1; j <= sales_unit; j++)
		{
			cout << "*";
		}

		cout << endl;
		

	}

}

