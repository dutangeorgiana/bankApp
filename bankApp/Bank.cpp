#include "Bank.h"
#include "string.h"
#include "Employee.h"

#pragma warning(disable:4996)

Bank::Bank()
{

}

Bank::Bank(string subsidiary, string town, string adress, int phoneno)
{
	this->subsidiary = subsidiary;
	this->town = town;
	this->adress = adress;
	this->phoneno = phoneno;

}