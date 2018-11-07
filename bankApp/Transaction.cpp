#include "Transaction.h"
#include "string.h"
#include <conio.h>
#include "Bank.h"

#pragma warning(disable:4996)

Transaction::Transaction()
{

}
Transaction::Transaction(float amount, float withdrawal, float deposit)
{
	this->amount = amount;
	this->withdrawal = withdrawal;
	this->deposit = deposit;

}
void Transaction::transactionOption()
{
	Transaction account;

	int x = _getch();
	if (x == 0)
		x = _getch();
	if (x == '1')
	{
		printf("You have selected withdrawal:\n");
		account.withdrawalTransaction();

		_getch();

	}
	if (x == '2')
	{
		printf("You have selected deposit\n");

	}

	_getch();

}
int Transaction::withdrawalTransaction()
{

	int res = searchAmount();
	if (res == 0)
	{

	}
	else
	{
		printf("Error Customer does not exist in data base");
	}

	return 0;

}
int Transaction::depositTransaction()
{
	return 0;
}

/*void updateAccount()
{


}*/
int Transaction::searchAmount()
{
	{
		char *bufferName = new char[128];
		printf("customer name:");
		scanf("%[^\n]%*c", bufferName);
		char buffer[512] = { 0 };

		char bufferClientInfo[50][128] = { 0 };
		char*pch;
		char *pch1;
		int i = 0;
		int temp;


		FILE *f = fopen("customer.txt", "r");
		if (!f)
		{
			printf("could not open file");
			return -1;
		}

		while (!feof(f))
		{

			fgets(buffer, 512, f);
			if (buffer[strlen(buffer) - 1] == '\n')
				buffer[strlen(buffer) - 1] = '\0';
			pch = strstr(buffer, ":");
			pch1 = strtok(pch, ":");
			if ((pch1 != NULL) && strcmp(pch1, bufferName) == 0)
			{
				for (int i = 0; i < 5; i++)
				{

					fgets(buffer, 512, f);
					if (buffer[strlen(buffer) - 1] == '\n')
						buffer[strlen(buffer) - 1] = '\0';
					printf("%s\n", buffer);

					char*bufferAmount = strstr(buffer, "amount");
					if (bufferAmount != NULL)
					{

						char *bufferAmount1;
						bufferAmount1 = strstr(bufferAmount, ":");
						char *bufferAmount2;
						bufferAmount2 = strtok(bufferAmount1, ":");
						if (bufferAmount2 != NULL)
						{
							temp = atoi(bufferAmount2);
							printf("amount =%d", temp);
						}
					}

				}
			}

			else
			{
				printf("Your record is not in data base\n");
				break;
			}

		}
		return 0;
	}
}
