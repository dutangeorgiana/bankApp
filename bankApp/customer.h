#pragma once
#ifndef _CUSTOMER_H
#define _CUSTOMER_H


#include <string>
#include "Account.h"


using namespace std;

struct infoCustomer
{
	string firstname;
	string adress;
	string phoneno;
	string accountno;
	float amount;
};

class Customer : public Account
{
public:
	string name;
	string firstname;
	string adress;
	int phoneno;
	int accountno;
	float amount;

	Customer();
	Customer(string name, string firstname,string adress, int phoneno, int accountno,float amount);

	//~Customer();
	void addCustomerName(string name);
	void addCustomerFirstName(string firstName);
	void addCustomerAdress(string adress);
	void addCustomerPhoneNo(string phoneNumber);
	void addCustomerAccountNo(string accountNumber);
	void addCustomerAmount(string amount);
	//void removeCustomer(char *buffer);
	void removeClient(char * str, const char * toRemove);
	bool removeCustomer(const string name );
	bool searchCustomer(string name, infoCustomer &info);
	void customerOption();
	void accountOption();
	void setName(string name);
	string  getName();
	void setFirstName(string firstname);
	string  getFirstName();
	
	
};





#endif

