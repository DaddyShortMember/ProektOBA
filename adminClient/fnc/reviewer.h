#ifndef REVIEWER_H_
#define REVIEWER_H_

typedef struct{
	char* name;
	char* sur;
	char* NIF;
}Client;

typedef struct{
	int clientNum;
	Client* clients;
}List;

List* getList();
void submitResponse();
void updateList();

#endif
