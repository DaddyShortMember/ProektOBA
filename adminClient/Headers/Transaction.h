#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include "Client.h"
#include "Account.h"

class Transaction{
	Account acOut;
	float ammount;
	Account acIn;
public:
	Transaction();
	Transaction(Account in, float ammount, Account out);
};

#endif /* TRANSACTION_H_ */
