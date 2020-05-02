// CH_6_PC_11.cpp : Lowest Score Drop

#include <iostream>
#include<iomanip>

using namespace std;

void getScore(double&);
void calAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);


int main()
{
	double scr1, scr2, scr3, scr4, scr5;
	
	getScore(scr1);
	getScore(scr2);
	getScore(scr3);
	getScore(scr4);
	getScore(scr5);

	calAverage(scr1, scr2, scr3, scr4, scr5);



	cout << endl << endl;
	cin.get();
	cin.clear();
	cin.ignore();
}




void getScore(double& score) {

	cout << "Enter The Score   :   ";
	cin >> score;
	cout << endl;

}


void calAverage(double a, double b, double c, double d, double e) {

	double sum, avg;
	double lowest = findLowest(a, b, c, d, e);

	sum = a + b + c + d + e - lowest;
	avg = sum / 4;

	cout << endl << "=========================" << endl;
	cout << "\nThe Lowest Score   :   " << lowest;
	cout << "\nThe Average is     :   " << avg;
}


double findLowest(double a, double b, double c, double d, double e) {

	double lowest;
	if (a < b && a < c && a < d && a < e) {
		lowest = a;
	}
	else if (b < c && b < d && b < e) {
		lowest = b;
	}
	else if (c < d && c < e) {
		lowest = c;
	}
	else if (d < e) {
		lowest = d;
	}
	else {
		lowest = e;
	}

	return lowest;

}
