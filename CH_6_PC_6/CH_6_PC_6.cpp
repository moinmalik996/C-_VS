// CH_6_PC_6.cpp : Kinetic Energy

#include <iostream>
#include<iomanip>

using namespace std;

double getMass();
double getVelocity();
double kineticEnergy(double, double);

int main()
{
	double mass, velocity;

	mass = getMass();
	velocity = getVelocity();

	cout << endl << "========================";
	cout << endl << "The Kinetic Energy is  :  " << kineticEnergy(mass, velocity);


	cout << endl << endl;
	cin.get();
	cin.ignore();
	cin.clear();
}




double getMass() {

	double mass;
	cout << "Enter The Mass in (  Kg  )        :   ";
	cin >> mass;
	return mass;
}

double getVelocity() {

	double velocity;
	cout << "Enter The Velocity in (  mps  )   :   ";
	cin >> velocity;
	return velocity;
}

double kineticEnergy(double mass, double velocity) {
	
	double ke = 0.5 * mass * velocity * velocity;
	return ke;

}