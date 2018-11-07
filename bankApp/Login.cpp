#include "Login.h"


Login::Login()
{

}
Login::Login(string user, string password)

{
	this->user = user;
	this->password = password;


}


Login::~Login()
{
	//delete[]user;
	//delete[]password;

}

void Login::setUser(string user)
{
	this->user = user;

}
string Login::getUser()
{
	return user;
}
void Login::setPassword(string password)
{
	this->password = password;

}
string Login::getPassword()
{
	return password;
}

void Login::GetUser(string user)
{
	//cout << "user:";
	cin >> user;

}

void Login::GetPassword()
{
	cout << "password:";
	cin >> password;
}

bool Login::ValidUser(const string& userName, const string& password)
{
	string buffer;
	//GetUser(user);

	ifstream file("user.txt");
	if (!file.is_open())
	{
		cout << "could not open file";
		return false;
	}
	
	while (!file.eof())
	{
		getline(file, buffer);

		if (buffer.find("user:") == std::string::npos)
			continue;

		std::string userFromBD = buffer.substr(5);
		if (userName != userFromBD)
			continue;

		getline(file, buffer);
		std::string passwordFromBD = buffer.substr(9);
		if (password != passwordFromBD)
			continue;

			   
		return true;


		/*
		size_t pos1 = buffer.find("user:");
		size_t pos2 = buffer.find(user);
		size_t pos3 = buffer.find("password:");
		size_t pos4 = buffer.find(password);

		if ((pos1 != std::string::npos) && (pos2 != std::string::npos) && (pos1 != std::string::npos) && (pos1 != std::string::npos))
		{
			getline(file, buffer);
			cout << buffer << endl;
		}

		else
		{
			cout << "Error.User not found";
			return false;
		}
		*/

	}

	return false;

}




