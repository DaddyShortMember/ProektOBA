#ifndef REVIEWER_H_
#define REVIEWER_H_

typedef struct{
	char* type;
	float balance;
}Account;

typedef struct{
	char* NIF;
	float totalBal;
	int numAc;
	Account* accounts;
	char* typeReq;
}Client;

typedef struct{
	int clientNum;
	Client* clients;
}List;

List* getList();
Client reviewClient(List* lis, int sel);
void submitResponse(Client);
void updateList();

#endif
