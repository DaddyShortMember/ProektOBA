#ifndef REVIEWER_H_
#define REVIEWER_H_

typedef struct{
	char* type;
	float balance;
}Account;

typedef struct{
	char* NIF;
	int numAc;
	float totalBal;
	Account* accounts;
	char* typeReq;
}Client;

typedef struct{
	int clientNum;
	Client* clients;
}List;

List* getList();
void submitResponse(Client);
void updateList();

#endif
