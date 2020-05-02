// CH_6_PC_12.cpp : Star Search
#include <iostream>
#include<iomanip>

using namespace std;


//function prototypes
void getJudgeData(int&);
void calcScore(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int findHighest(int, int, int, int, int);


int main()
{
	int scr1, scr2, scr3, scr4, scr5;

	getJudgeData(scr1);
	getJudgeData(scr2);
	getJudgeData(scr3);
	getJudgeData(scr4);
	getJudgeData(scr5);


	calcScore(scr1, scr2, scr3, scr4, scr5);

	
	cout << endl << endl;
	cin.get();
	cin.clear();
	cin.ignore();
}


//*******************************
//								*
//		Function Definitions    *
//								*
//*******************************



void getJudgeData(int& score) {

	cout << "Enter The Score   :   ";
	cin >> score;

	while (score < 0 || score > 10)
	{
		cout << "Enter The Score  :   ";
		cin >> score;
	}
}

int findLowest(int a, int b, int c, int d, int e) {

	int lowest;

	if (a < b && a < c && a < d && a < e)
		lowest = a;
	else if (b < c && b < d && b < e)
		lowest = b;
	else if (c < d && c < e)
		lowest = c;
	else if (d < e)
		lowest = d;
	else
		lowest = e;

	return lowest;

}


int findHighest(int a, int b, int c, int d, int e) {

	int highest;

	if (a > b && a > c && a > d && a > e)
		highest = a;
	else if (b > c && b > d && b > e)
		highest = b;
	else if (c > d && c > e)
		highest = c;
	else if (d > e)
		highest = d;
	else highest = e;

	return highest;
}


void calcScore(int a, int b, int c, int d, int e) {

	int lowest = findLowest(a, b, c, d, e);
	int highest = findHighest(a, b, c, d, e);
	int drop = lowest + highest;

	int sum = a + b + c + d + e - drop;
	double avg = sum / 3;

	cout << endl << "==============================";
	cout << endl << "The Lowest Score is     :    " << lowest;
	cout << endl << "The Highest Score is    :    " << highest;
	cout << endl << "The Average Score is    :    " << avg;

}