// CH_6_PC_1.cpp : Markup
#include <iostream>

using namespace std;

//Function Headers
double calculateRetail(double, double);

int main()
{
    double wholesale_cost, retail_price;

    cout << "Enter The Cost Of The Item   :   ";
    cin >> wholesale_cost;

    cout << endl << "Enter The Retail Percentage   :   ";
    cin >> retail_price;

    //Function Call
    cout << endl << endl << "The Total Price Of The Item Is    :    " << calculateRetail(wholesale_cost, retail_price);

    cout << endl << endl;
    return 0;
}

//Function Definition
double calculateRetail(double cost, double retail) {

    double total_price = 0;

    if (cost > 0 && retail > 0) {

        total_price = cost + (cost / 100) * retail;

    }
    else {
        cout << endl << endl << "You Entered Invalid Cost or Retail.";
    }

    return total_price;
}
