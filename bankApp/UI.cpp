#include "UI.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>


UI::UI()
{


}

void UI::showMenu()

{
	cout << "Choose one of the following options:\n";
	cout << "1.Bank\n";
	cout << "2.Customer\n";
	cout << "3.Account\n";
	cout << "4.Transaction\n";

}
void  UI::chooseOption()
{

	showMenu();
	int choice = _getch();



	switch (choice)
	{
	case '1':
		cout << "You have selected :Bank option. Select one of the options:\n";

		break;

	case '2':
		cout << "You have selected :Customer option. Select one of the options:\n";
		cout << "1.addCustomer\n";
		cout << "2.removeCustomer\n";
		cout << "3.searchCustomer\n";
		customerOption();
		break;
	case '3':
		cout << "You have selected :Account option. Select one of the options:\n";
		cout << "1.checkAccount\n";
		cout << "2.updateAccount\n";
		cout << "3.createAccount\n";
		//accountOption();
		break;
	case '4':
		cout << "You have selected :Transaction option. Select one of the options:\n";
		cout << "1.Withdrawal\n";
		cout << "2.Deposit\n";
		transactionOption();

		break;
		//case'5':
		//showMenu();
		//break;

	default:
		cout << "ERROR!You have selected an invalid choice.";

	}




}
