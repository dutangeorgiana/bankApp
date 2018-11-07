#pragma once
#ifndef _ACCOUNT_H
#define _ACCOUNT_H



class Account
{

public:
	int accountno;
	float amount;
	Account();
	Account(int accountno, float amount);
	//~Account();
	//void checkAccount();
	void createAccount();
	void updateAccount();
	void addCustomerAccount();
	void addCustomerAmount();




};





#endif
