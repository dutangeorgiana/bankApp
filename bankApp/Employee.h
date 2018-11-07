#pragma once
#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H


#include "customer.h"
#include "Account.h"

class Employee : public Customer
{
private:
	char *name;
	int id;
	char *email;
	int phoneno;

public:
	Employee(const char *name, int id, const char *email, int phoneno);
	Employee();
	~Employee();
	void setName(char *name);
	char * getName();
	void setId(int id);
	int GetId();
	void setEmail(char *email);
	char * getEmail();
	void setPhoneNo(int id);
	int setPhoneNo();

};


#endif

