// CH_6_PC_4.cpp : Safest Driving Area
//

#include <iostream>
#include<iomanip>
#include<string>

using namespace std;


//functions prototyping
int getNumAccidents(string);
void findLowest(int, int, int, int, int);


int main()
{
	int north, south, east, west, central;

	north = getNumAccidents("North");
	south = getNumAccidents("South");
	 east = getNumAccidents("East");
	 west = getNumAccidents("West");
  central = getNumAccidents("Central");

	findLowest(north,south,east,west,central);

	cin.get();
	cin.ignore();
	cin.clear();

}


//function Defining
int getNumAccidents(string city_name) {

	int no_of_accidents;
	cout << "Enter No. Of Accidents For "<<setw(8)<< city_name<< "   :   ";
	cin >> no_of_accidents;

	while (no_of_accidents < 0)
	{
		int no_of_accidents;
		cout << "Enter No. Of Accidents For " << setw(8) << city_name << "   :   ";
		cin >> no_of_accidents;
	}


	return no_of_accidents;
}

void findLowest(int A, int B, int C, int D, int E) {

	int lowest;
	string area;

	if (A < B && A < C && A < D && A < E) {
		lowest = A;
		area = "North";
	}
	else if (B < C && B < D && B < E) {
		lowest = B;
		area = "South";
	}
	else if (C < D && C < E) {
		lowest = C;
		area = "East";
	}
	else if ( D < E) {
		lowest = D;
		area = "West";
	}
	else {
		lowest = E;
		area = "Central";
	}

	cout << endl << "======================";
	cout << endl << "Lowest No. Of Accidents   :   " << lowest;
	cout << endl << "The Area Is               :   " << area;

}