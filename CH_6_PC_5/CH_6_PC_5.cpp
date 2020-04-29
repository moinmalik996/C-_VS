// CH_6_PC_5.cpp : Falling Distance
//

#include <iostream>
#include<iomanip>

using namespace std;

double fallingDistance(int);

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << "The Distance in " << setw(2) << i << "s   :   " << setprecision(4) << setw(5)
			 << fallingDistance(i)<<" m" << endl;
	}
}


double fallingDistance(int time) {

	double distance;

	distance = 0.5 * 9.8 * time * time;

	return distance;

}