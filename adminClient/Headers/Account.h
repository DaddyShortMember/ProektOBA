#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account{
	char* NIF;
	char* ESBN;
	char* type;
	float balance;

public:
	Account(char* NIF);
	Account(char* NIF, char* type, float balance);
	~Account();

	const char* getNIF();
	const float getBalance();
	void setBalance(float balance);
	const char* getType();
	void setType(char *type);
};

#endif /* ACCOUNT_H_ */
