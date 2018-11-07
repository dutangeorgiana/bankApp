#include "Employee.h"
#include <conio.h>
#include <string.h>

#pragma warning(disable:4996)

Employee::Employee(const char *name, int id, const char *email, int phoneno)
{
	this->name = new char[strlen(name) + 1];
	this->email = new char[strlen(email) + 1];
	this->id = id;
	this->phoneno = phoneno;
	strcpy(this->name, name);
	strcpy(this->email, email);

}

Employee::Employee()
{

}

Employee::~Employee()
{

}

void Employee::setName(char *name)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
char *Employee::getName()
{
	return name;
}
void Employee::setId(int id)
{
	this->id = id;
}
int Employee::GetId()
{
	return id;
}
void Employee::setEmail(char *email)
{
	this->email = new char[strlen(email) + 1];
	strcpy(this->email, email);
}
char *Employee::getEmail()
{
	return email;
}
void Employee::setPhoneNo(int phoneno)
{
	this->phoneno = phoneno;
}
int Employee::setPhoneNo()
{
	return phoneno;
}



