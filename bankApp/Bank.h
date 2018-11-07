#pragma once
# ifndef _BANK_H
#define _BANK_H
#include "Login.h"
#include "Employee.h"
#include "UI.h"
#include "Transaction.h"




class Bank : public Login, public UI, public Employee
{
public:
	string subsidiary;
	string town;
	string adress;
	int phoneno;

	Bank();
	Bank(string subsidiary, string town, string adress, int phoneno);

};





#endif