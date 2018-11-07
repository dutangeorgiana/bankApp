#pragma once
#ifndef _LOGIN_H
#define _LOGIN_H

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>


#pragma warning(disable:4996)


using namespace std;

class Login
{
public:

	string user;
	string password;

public:
	Login();
	Login(string user, string password);
	~Login();
	void setUser(string user);
	string  getUser();
	void setPassword(string password);
	string getPassword();
	void GetUser(string user);
	void GetPassword();
	bool ValidUser(const string& userName, const string& password);
	//void CheckPassword();
};

#endif