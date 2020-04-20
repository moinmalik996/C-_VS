// CH_5_PC_16.cpp : Savings Account Balance

#include <iostream>

using namespace std;

int main()
{

    int no_of_months;
    double starting_balance, amount_deposited, annual_interest_rate, amount_withdraw,
        total_interest_earned = 0,
        current_balance = 0,
        monthly_interest_rate = 0,
        monthly_interest_amount = 0,
        total_amount_deposited = 0,
        total_amount_withdraw = 0;

    cout << "Enter Starting Balance   :   ";
    cin >> starting_balance;

    cout << endl << "Enter The Anual Interest Rate   :   ";
    cin >> annual_interest_rate;

    cout << endl << "Enter No. Of Months   :   ";
    cin >> no_of_months;

    current_balance = starting_balance;
    monthly_interest_rate = annual_interest_rate / 12;


    for (int i = 1; i <= no_of_months; i++)
    {

        cout << endl << "For Month-" << i;
        cout << endl << "\nEnter Deposited Amount   :   ";
        cin >> amount_deposited;

        if (amount_deposited >= 0) {

            current_balance += amount_deposited;
            total_amount_deposited += amount_deposited;

            cout << "Enter Withdrawal Amount   :   ";
            cin >> amount_withdraw;

            if (amount_withdraw >= 0) {

                current_balance -= amount_withdraw;
                total_amount_withdraw += amount_withdraw;
                monthly_interest_amount = current_balance * (monthly_interest_rate / 100);
                total_interest_earned += monthly_interest_amount;
                current_balance += monthly_interest_amount;

                if (current_balance < 0) {
                    break;
                }

            }


        }
    }

    if (current_balance > 0) {

        cout << endl << "\nSavings Account Statistics";
        cout << endl << "----------------------------";

        cout << endl << endl << "The Current Balance           :   " << current_balance;
        cout << endl << endl << "Total Amount Deposited        :   " << total_amount_deposited;
        cout << endl << endl << "Total Amount Of Withdrawals   :   " << total_amount_withdraw;
        cout << endl << endl << "Total Interest Earned         :   " << total_interest_earned;


    }
    else {
        cout << "\n\nYour Acount Has Been Closed.";
    }




    cout << endl << endl;
    cin.get();
    cin.clear();
    cin.ignore();

}
