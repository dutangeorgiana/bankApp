#include "customer.h"
#include "string.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Bank.h"
#include <vector>

#pragma warning(disable:4996)
#define BUFFER_SIZE 1000

using namespace std;

Customer::Customer()
{


}
Customer::Customer(string name, string firstname,string adress, int phoneno, int accountno,float amount)
{
	this->name = name;
	this->adress = adress;
	this->phoneno = phoneno;
	this->accountno = accountno;
	this->amount = amount;

}
void Customer::setName(string name)
{
	this->name = name;

}
string Customer::getName()
{
	return name;
}
void Customer::setFirstName(string firstname)
{
	this->firstname = firstname;

}
string Customer::getFirstName()
{
	return firstname;
}
void Customer::addCustomerName(string name)
{
	/*string buffer;
	cin >> buffer;
	ofstream file("user.txt");
	if (!file.is_open())
	{
		cout << "could not open file";
		return ;
	}
	file.open("user.txt", ios::app);
	{
		file << buffer;
		file.close();
	}*/

	//string buffer;
	//cin >> buffer;
	ofstream file;
	file.open("customer.txt", ios::app);
	file << "name:";
	file << name<<endl;
	file.close();


}
void Customer::addCustomerFirstName(string firstName)
{
	ofstream file;
	file.open("customer.txt", ios::app);
	file << "first name:";
	file << firstName << endl;
	file.close();
}

void Customer::addCustomerAdress(string adress)
{
	ofstream file;
	file.open("customer.txt", ios::app);
	file << "adress:";
	file << adress << endl;
	file.close();

}
void Customer::addCustomerPhoneNo(string phoneNumber)
{
	ofstream file;
	file.open("customer.txt", ios::app);
	file << "phone number:";
	file << phoneNumber << endl;
	file.close();
}
void Customer::addCustomerAccountNo(string accountNumber)
{
	ofstream file;
	file.open("customer.txt", ios::app);
	file << "account number:";
	file << accountNumber << endl;
	file.close();

}
void Customer::addCustomerAmount(string amount)
{
	ofstream file;
	file.open("customer.txt", ios::app);
	file << "amount:";
	file << amount << endl;
	file.close();

}


bool Customer::removeCustomer(const string name)
{
	vector<string>bufferKeep;
	string buffer;
	string nameDB;
	ifstream file1("customer.txt");
	ofstream file2("temp.txt");

	int i = 0;

	if (!file1.is_open() || !file2.is_open())
	{
		cout << "could not open file";
		return false;
	}

	while (!file1.eof())
	{
		getline(file1, buffer);

		if (buffer.find("name:") != std::string::npos)
			nameDB = buffer.substr(5);

		if (name.compare(nameDB) == 0)
		{
			for(int i=0;i<5;i++)
			getline(file1, buffer);
		
		}

		if (name.compare(nameDB) != 0)
			for(int i = 0; i< bufferKeep.size(); i++)
			bufferKeep.push_back(buffer);
		file2 << bufferKeep[i] << endl;
		i++;
			continue;
		return true;

	}
	remove("customer.txt");
	rename("temp.txt", "customer.txt");



	return false;
}
	
	/*char *bufferName = new char[128];
	printf("customer name:");
	scanf("%[^\n]%*c", bufferName);
	FILE *f1 = fopen("customer.txt", "r");
	FILE *f2 = fopen("delete.txt", "w");
	if (!f1 || !f2)
	{
		printf("could not open file");
		return;
	}
	char buffer[128] = { 0 };
	char*pch;
	char *pch1;
	char bufferKeep[50][128] = { 0 };
	int i = 0;
	while (!feof(f1))
	{

		fgets(buffer, 128, f1);
		if (buffer[strlen(buffer) - 1] == '\n')
			buffer[strlen(buffer) - 1] = '\0';
		pch = strstr(buffer, ":");
		pch1 = strtok(pch, ":");
		if ((pch1 != NULL) && strcmp(pch1, bufferName) == 0)
		{
			for (int i = 0; i < 3; i++)
			{
				fgets(buffer, 128, f1);
			}
		}
		else
			strcpy(bufferKeep[i], buffer);
		fprintf(f2, "%s\n", bufferKeep[i]);
		i++;
	}

	remove("customer.txt");
	rename("delete.txt", "customer.txt");
}*/

bool Customer::searchCustomer(const string name, infoCustomer &info)
{

	string buffer;
	string nameDB;
	string amountDB;
	ifstream file("customer.txt");
	if (!file.is_open())
	{
		cout << "could not open file";
		return false;
	}

	while (!file.eof())
	{
		getline(file, buffer);

		if (buffer.find("name:") != std::string::npos)
			 nameDB = buffer.substr(5);
		if (name.compare(nameDB) == 0)
		
			getline(file, info.firstname);// first name
			getline(file, info.adress);//phone number
			getline(file, info.phoneno);// adress
			getline(file, info.accountno);// account
			getline(file, buffer);// 
			info.amount = std::stof(buffer.substr(buffer.find(":") + 1));//amount
		

		if (name.compare(nameDB) != 0)
			continue;
		return true;
		
	}

	return false;
}




void Customer::accountOption()
{
	Customer customer;

	int x = _getch();
	if (x == 0)
		x = _getch();
	if (x == '1')
	{
		cout << "You have selected to check account of a client:\n";
		//customerAccount.checkAccount();
		_getch();

	}
	if (x == '2')
	{
		cout << "You have selected to update account of a customer.\n";

	}
	if (x == '3')
	{
		cout << "You have selected to create an  account of a customer.\n";

		cout << "name:";
		//customer.addCustomerName();
		cout << "first name:";
		//customer.addCustomerFirstName();
		cout << "adress:";
//		customer.addCustomerAdress();
		cout << "PhoneNo:";
//		customer.addCustomerPhoneNo();
		cout << "Account number:\n";
		customer.addCustomerAccount();
		cout << "Amount:\n";
//		customer.addCustomerAmount();

		_getch();

	}
}


void Customer::customerOption()
{
	Customer customer;

	int x = _getch();
	if (x == 0)
		x = _getch();

	//system("PAUSE");

	if (x == '1')
	{
		cout << "you have selected to add a new client:\n";
		cout << "name:";
//		customer.addCustomerName();
		cout << "first name:";
//		customer.addCustomerFirstName();
		cout << "adress:";
//		customer.addCustomerAdress();
		cout << "PhoneNo:";
		//customer.addCustomerPhoneNo();
		//cout<<"Account number:";
		//customer.addCustomerAccount();
		//cout<<"Amount:";
		//customer.addCustomerAmount();
		_getch();

	}

	if (x == '2')
	{
		printf("remove a client: ");
		//customer.removeCustomer();
	}
	if (x == '3')
	{
		printf("You have selected to search a customer.\n");
		//customer.searchCustomer();
	}

}





