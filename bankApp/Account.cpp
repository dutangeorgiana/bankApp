#include <stdio.h>
#include <string.h>
#include "Bank.h"
#include "Account.h"
#include <conio.h>
#include <fstream>
#include <iostream>


#pragma warning(disable:4996)

Account::Account(int accountno, float amount)
{
	this->accountno = accountno;
	this->amount = amount;


}

Account::Account()
{

}
//void Account::checkAccount()
//{
//	string bufferName;
//	cout << "customer name:";
//	cin >> bufferName;
//
//	ifstream file("customer.txt");
//	if (!file.is_open())
//	{
//		cout << "could not open file";
//		return;
//	}
//	string buffer;
//	while (!file.eof())
//	{
//		getline(file, buffer);
//
//		size_t pos1 = buffer.find("name:");
//		size_t pos2 = buffer.find(bufferName);
//
//		if ((pos1 != std::string::npos) && (pos2 != std::string::npos))
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				getline(file, buffer);
//				cout << buffer;
//			}
//		}
//
//		else
//			cout << "Your record is not in data base\n";
//		break;
//
//	}
//
//
//}
void Account::createAccount()
{
	void addCustomerAccount();
	void addCustomerAmount();

}

void Account::addCustomerAccount()
{
	string buffer;
	cin >> buffer;
	ofstream file("customer.txt");
	if (!file.is_open())
	{
		cout << "could not open file";
		return;
	}
	file.open("customer.txt", ios::app);
	file << "account number: %s";
	file << buffer;
	file.close();


}
void Account::addCustomerAmount()
{
	string buffer;
	cin >> buffer;
	ofstream file("customer.txt");
	if (!file.is_open())
	{
		cout << "could not open file";
		return;
	}
	file.open("customer.txt", ios::app);
	file << "account number: %s";
	file << buffer;
	file.close();

}

/*void Account::updateAccount()
{



}*/







