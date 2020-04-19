// PC_15.cpp : 

#include <iostream>

using namespace std;

int main()
{
    int emp_no, employees_count = 0;
    double gross_pay, state_tax, federal_tax, FICA_holdings;

    double total_gross_pay = 0,
        total_state_tax = 0,
        total_federal_tax = 0,
        total_fica_holdings = 0,
        sum_of_taxes = 0;


    cout << "Enter Data For Employees" << endl;
    cout << "------------------------" << endl << endl;



    do
    {

        cout << "Enter Employ No.   :   ";
        cin >> emp_no;

        if (emp_no > 0) {

            cout << endl << "Enter Gross Pay   :   ";
            cin >> gross_pay;

            if (gross_pay > 0) {

                cout << endl << "Enter Statae Tax   :   ";
                cin >> state_tax;

                if (state_tax > 0 && state_tax < gross_pay) {

                    cout << endl << "Enter Federal Tax   :   ";
                    cin >> federal_tax;

                    if (federal_tax > 0 && federal_tax < gross_pay) {

                        cout << endl << "Enter FICA Holdings   :   ";
                        cin >> FICA_holdings;

                        sum_of_taxes = state_tax + federal_tax + FICA_holdings;
                        
                        if (sum_of_taxes < gross_pay) {

                            total_gross_pay += gross_pay;
                            total_state_tax += state_tax;
                            total_federal_tax += federal_tax;
                            total_fica_holdings += FICA_holdings;
                            employees_count++;

                        }
                        else {
                            cout << endl << "Re-Enter The Data For This Employee." << endl;
                        }


                    }
                    else
                    {
                        cout << endl << "You Entered Invalid Federal Tax.";
                        break;
                    }
                }
                else
                {
                    cout << endl << "You Entered Invalid State Tax.";
                    break;
                }
            }
            else
            {
                cout << endl << "You Entered Invalid Gross Pay.";
                break;
            }
        } 
        else if (emp_no == 0) {

            cout << endl << "\nYou Have The Following Statistics";
            cout << endl << "---------------------------------"<<endl;
            break;
        }
        else
        {
            cout << endl << "You Have Quited The Program";
            break;
        }

    } while (emp_no > 0);


    cout << endl << "\nTotal No. Of Employees   :   " << employees_count;
    cout << endl << "Total Gross Pay          :   " << total_gross_pay;
    cout << endl << "Total State Tax          :   " << total_state_tax;
    cout << endl << "Total Federal Tax        :   " << total_federal_tax;
    cout << endl << "Total FICA Holdings      :   " << total_fica_holdings;

    cout << endl << endl;





    cin.get();
    cin.clear();
    cin.ignore();

}


