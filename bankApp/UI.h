#pragma once
#ifndef _UI_H
#define _UI_H
#include "customer.h"
#include "Transaction.h"



class UI : public Customer, public Transaction
{
public:

	UI();

	void showMenu();
	void chooseOption();

};



#endif