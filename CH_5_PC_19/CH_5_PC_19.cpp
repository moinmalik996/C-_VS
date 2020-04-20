// CH_5_PC_19.cpp : Budget Analysis

#include <iostream>

using namespace std;

int main()
{
    int monthly_budget;

    double expense, total_expenses = 0;

    cout << "Enter Total Budget Of The Month   :   ";
    cin >> monthly_budget;

    do
    {

        cout << endl << "Enter 0 to Make Total of Expenses.";
        cout << endl << "Enter Expenses   :   ";
        cin >> expense;

        total_expenses += expense;

    } while (expense != 0);

    if (total_expenses > monthly_budget) {

        cout << endl << endl << "You are Over Budget.";
    }
    else
    {
        cout << endl << endl << "You are Under Budget.";      
    }

    cout << endl << "Your Monthly Budget     :   " << monthly_budget;
    cout << endl << "Your Monthly Expenses   :   " << total_expenses;


    cout << endl << endl;

}