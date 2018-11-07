#pragma once
#ifndef _TRANSACTION_H
#define _TRANSACTION_H


#include "customer.h"


class Transaction
{
public:

	float amount;
	float withdrawal;
	float deposit;

	Transaction(float amount, float withdrawal, float deposit);
	Transaction();
	//~Transaction();
	int withdrawalTransaction();
	int depositTransaction();
	int searchAmount();
	//void updateAccount();
	void transactionOption();




};





#endif
