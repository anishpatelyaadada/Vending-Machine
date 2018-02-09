#include<iostream>
#include<fstream>
#include<string>
#include"Inventory.h"
#include"Money.h"

using namespace std;
Money report;
Inventory InventoryReport;
void menuFunction(int &, double &);
void totalMoney();
void EnterCoin(double &);
void returnChange(double &);
void displayReturnChange();
double checkValidCoin(double &);

int main() {

	int selection=0, turnMachineOn;
	int decreaseQuantitByOne = 1;
	double enterAmount, totalAmount = 0, returnAmount = 0;
	double price;
	int toBuyMore;
	
	do {
		cout << "Enter 1 - To turn Machine ON.\n";
		cin >> turnMachineOn;

		if (turnMachineOn == 1) {
			do {
				toBuyMore = 0;
				InventoryReport.setDefaultInventory();
				menuFunction(selection, price);
				// coke
				if (selection == 1) {
					InventoryReport.setCokeInventory(decreaseQuantitByOne);
					do {
						cout << "Insert Coin / Bill = $";
						cin >> enterAmount;
						checkValidCoin(enterAmount);
						EnterCoin(enterAmount);
						totalAmount += enterAmount;
					} while (totalAmount <= price);
					returnAmount = totalAmount - price;
					returnChange(returnAmount);
				}// Doritos
				else if (selection == 2) {
					InventoryReport.setDoritosInventory(decreaseQuantitByOne);
					do {
						cout << "Insert Coin / Bill = $";
						cin >> enterAmount;
						checkValidCoin(enterAmount);
						EnterCoin(enterAmount);
						totalAmount += enterAmount;
					} while (totalAmount <= price);
					returnAmount = totalAmount - price;
					returnChange(returnAmount);
				}// snickers
				else if (selection == 3) {
					InventoryReport.setSnickersInventory(decreaseQuantitByOne);
					do {
						cout << "Insert Coin / Bill = $";
						cin >> enterAmount;
						checkValidCoin(enterAmount);
						EnterCoin(enterAmount);
						totalAmount += enterAmount;
					} while (totalAmount <= price);
					returnAmount = totalAmount - price;
					returnChange(returnAmount);
				}//chex mix
				else if (selection == 4)
				{
					InventoryReport.setChexMixInventory(decreaseQuantitByOne);
					do {
						cout << "Insert Coin / Bill = $";
						cin >> enterAmount;
						checkValidCoin(enterAmount);
						EnterCoin(enterAmount);
						totalAmount += enterAmount;
					} while (totalAmount <= price);
					returnAmount = totalAmount - price;
					returnChange(returnAmount);
				}//pepsi
				else if (selection == 5) {
					InventoryReport.setPepsiInventory(decreaseQuantitByOne);
					do {
						cout << "Insert Coin / Bill = $";
						cin >> enterAmount;
						checkValidCoin(enterAmount);
						EnterCoin(enterAmount);
						totalAmount += enterAmount;
					} while (totalAmount <= price);
					returnAmount = totalAmount - price;
					returnChange(returnAmount);
				}
				displayReturnChange();
				report.setReturnCoinDefault();
				returnAmount = 0;
				totalAmount = 0;

				cout << "Do you want to purchase anything else (press 1 - yes and 0 - no) = ";
				cin >> toBuyMore;
				cout << endl;
			} while (toBuyMore == 1);
			
			totalMoney();
			cout << endl;
			cout << "Do you want to turn off the machine again enter 1- yes and 2 - no = ";
			cin >> turnMachineOn;

			if (turnMachineOn == 1)break;

		}
		else
		{
			cout << "Inapproprite selection to turn Machine ON. Try again. Thank you!\n\n";
			cout << "Do you want to try to start machine again enter 1- yes and 2 - no = ";
			cin >> turnMachineOn;
		}
	} while (turnMachineOn == 1);
	system("pause");
	return 0;
}

// check if inserted coin is valid or not
double checkValidCoin(double &money) {

	if (money != 0.25 && money != 0.1 && money != 0.05 && money != 1 && money != 5)
	{
		cout << "Invalid! Insert Valid Coin / Bill Again = $";
		cin >> money;
	}
	return money;
}

// deduct the return amount from the total amount in the machine
void returnChange(double &money) {
	double returnAmount = 0;
	double value = 0;
	if (money >= 0.25 && money <= 0.99) {
		value = 0.25;
		report.setReturnQuater(value);
		returnAmount = money - 0.25;
		//cout << "Return amount = $" << 0.25 << endl;
		returnChange(returnAmount);
	}
	else if (money >= 0.10 && money <= 0.24) {
		value = 0.10;
		report.setReturnDime(value);
		returnAmount = money - 0.1;
		//cout << "Return amount = $" << 0.10 << endl;
		returnChange(returnAmount);

	}
	else if ((money <= 0.05 && money >= 0.01) || (money >= 0.05 && money <= 0.09)) {
		value = 0.05;
		report.setReturnNickle(value);
		returnAmount = money - 0.05;
		//cout << "Return amount = $" << 0.05 << endl;
		returnChange(returnAmount);

	}
	else if (money >= 1 && money <= 4.99) {
		value = 1;
		report.setReturnOneDollar(value);
		returnAmount = money - 1;
		//cout << "Return amount = $" << 1 << endl;
		returnChange(returnAmount);

	}
	else if (money >= 5) {
		value = 5;
		report.setReturnFiveDollar(value);
		returnAmount = money - 5;
		//cout << "Return amount = $" << 5 << endl;
		returnChange(returnAmount);
	}
}

// display the return change by its type
void displayReturnChange() {
	cout << "\nReturn Change.\n";
	cout << "Quaters = $" << report.getReturnQuater() << endl;
	cout << "Dimes = $" << report.getReturnDime() << endl;
	cout << "Nickles = $" << report.getReturnNickle() << endl;
	cout << "One Dollar = $" << report.getReturnOneDollar() << endl;
	cout << "Five Dollar = $" << report.getReturnFiveDollar() << endl << endl;
 }

// enter the coin to machine and set it
void EnterCoin(double &money) {

	if (money == 0.25) {
		report.setQuater(money);
	}
	if (money == 0.10) {
		report.setDime(money);
	}
	if(money == 0.05)	{
		report.setNickle(money);
	}
	if (money == 1)	{
		report.setOneDollar(money);
	}
	if (money == 5) {
		report.setFiveDollar(money);
	}
}

// display the total amount of money in the machine
void totalMoney() {
	cout << "Total Amount In Machine.\n";
	cout << "Quater = $" << report.getQuater() - report.getReturnQuater() << ", Total Quater = $" << report.getTotalQuater()<< endl;
	cout << "Dime = $" << report.getDime() - report.getReturnDime() << ", Total Dime = $" << report.getTotalDime() << endl;
	cout << "Nickle = $" << report.getNickle() - report.getReturnNickle() << ", Total Nickle = $" << report.getTotalNickle()  << endl;
	cout << "One Dollar = $" << report.getOneDollar() - report.getReturnOneDollar() << ", Total One Dollar = $" << report.getTotalOneDollar() << endl;
	cout << "Five Dollar = $" << report.getFiveDollar() - report.getReturnFiveDollar() << ", Total Five Dollar = $" << report.getTotalFiveDollar() << endl;
}

// diplsay the list of menu on calling
void menuFunction(int &selection, double &price) {

	cout << "Here is the list of Product in the Vending Machine.\n";
	cout << "1. Coke - $0.95\n";
	cout << "2. Doritos - $0.75\n";
	cout << "3. Snickers - $0.55\n";
	cout << "4. Chex Mix - $0.60\n";
	cout << "5. Pepsi - $0.90\n";

	cout << "Enter you selection = ";
	cin >> selection;
	switch (selection)
	{
	case 1:
		price = 0.95;
		break;
	case 2:
		price = 0.75;
		break;
	case 3:
		price = 0.55;
		break;
	case 4:
		price = 0.60;
		break;
	case 5:
		price = 0.90;
		break;
	default:
		cout << "wrong selection, please try again. Thank you!\n";
		break;
	}
}