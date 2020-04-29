// CH_6_PC_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<string>

using namespace std;


//functions prototyping
double getSales(string);
void findHighest(double, double, double, double);


int main()
{
	double NE, SE, NW, SW;

	NE = getSales("NorthEast");
	SE = getSales("SouthEast");
	NW = getSales("NorthWest");
	SW = getSales("SouthWest");

	findHighest(NE, SE, NW, SW);

	cin.get();
	cin.ignore();
	cin.clear();

}


//function Defining
double getSales(string city_name) {

	double sales_figure;
	cout << "Enter Sales Figure For " << city_name << "   :   ";
	cin >> sales_figure;

	while (sales_figure < 0)
	{
		cout << endl;
		cout << "Enter Sales Figure For " << city_name << "   :   ";
		cin >> sales_figure;
	}
	return sales_figure;
}

void findHighest(double A, double B, double C, double D) {

	double greatest;
	string city;

	if (A > B && A > C && A > D) {
		greatest = A;
		city = "NorthEast";
	}
	else if (B > C && B > D) {
		greatest = B;
		city = "SouthEast";
	}
	else if (C > D) {
		greatest = C;
		city = "NorthWest";
	}
	else {
		greatest = D;
		city = "SouthWest";
	}

	cout << endl << "======================";
	cout << endl << "The Highest Sales Figures Area   :   " << greatest;
	cout << endl << "The City Is                      :   " << city;

}
