#ifndef CLIENT_H_
#define CLIENT_H_

#include "Account.h"

class Client{
	char* NIF;
	char* name;
	char* surname;
	int numAc;
	float totalBal;
	Account accounts[4];

public:
	Client();
	Client(char* NIF, char* name, int numAc, Account accounts[]);
	~Client();

	char* getNIF();
	char* getName();
	void setName(char* name);
	int getNumAc();
	void setNumAc(int numAc);
	float getTotalBal();
	void setTotalBal();
	Account* getAccounts();
	void addAccount(Account ac);
	void closeAccount();
};

#endif /* CLIENT_H_ */
