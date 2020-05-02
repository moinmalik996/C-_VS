// CH_6_PC_14.cpp : 

#include <iostream>
#include<iomanip>

using namespace std;

void giveOrder(int&, int&, char&);
void orderData(int, int, char, int Shipping_charges_unit);

int main()
{
	int spoolStock, spool_ordered;
	char choice;

	giveOrder(spool_ordered, spoolStock, choice);
	
	orderData(spoolStock, spool_ordered, choice, 10);

	cout << endl << endl;
	cin.get();
	cin.clear();
	cin.ignore();
}



void giveOrder(int& ordered_spool, int& spool_stock, char& special_shipping) {

	cout << "Enter The Stock Of Spoons                     :   ";
	cin >> spool_stock;
	
	cout << "Enter The Spoons Ordered                      :   ";
	cin >> ordered_spool;

	while (spool_stock < 0 && ordered_spool < 1)
	{
		cout << "Enter The Stock Of Spools                 :   ";
		cin >> spool_stock;

		cout << "Enter The Spools Ordered                  :   ";
		cin >> ordered_spool;
	}

	cout << "Want Special Shipping / Handling [ Y / N ]    :    ";
	cin >> special_shipping;

}


void orderData(int spoolStock, int spoolOrdered, char Shipping, int Shipping_charges_unit=10) {

	int special_charges = 0;
	int special_charges_unit = 10;
	int total_charges;
	int shipping_charges;
	int order_Charges;
	int ready_to_ship;
	int backorder = 0;
	int order_charges_unit = 100;

	if (spoolOrdered > spoolStock) {

		ready_to_ship = spoolStock;
		backorder = spoolOrdered - spoolStock;
	}
	else
	{
		ready_to_ship = spoolOrdered;
	}

	if (Shipping == 'Y') {

		special_charges = spoolOrdered * special_charges_unit;
	} 


	shipping_charges = spoolOrdered * Shipping_charges_unit;
	order_Charges = ready_to_ship * order_charges_unit;
	total_charges = shipping_charges + order_Charges + special_charges;


	cout << endl;
	cout << "***************************************" << endl;
	cout << "You Ordered Spools         :   " << spoolOrdered<<"     *" << endl;
	cout << "Spools In The STock        :   " << spoolStock << "     *" << endl;
	cout << "Spools Ready To Ship       :   " << ready_to_ship << "     *" <<endl;
	cout << "BackOrder Spools           :   " << backorder << "     *" << endl;
	cout << "***************************************" << endl;

	cout << "===================================" << endl;
	cout << "Your Order CHarges         :   " << order_Charges << endl;
	cout << "Shipping Charges           :   " << shipping_charges << endl;
	cout << "Your Total Charges         :   " << total_charges << endl;

}




