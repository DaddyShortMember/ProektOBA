#include <stdio.h>
#include <stdlib.h>


List* getList(){
	
    //sql stuff
    int clQ = /*cantidad en BD (solicitudes de CLIENTES)*/;
    List* lis = (List*) malloc(sizeof(clQ)+sizeof(Client*)*clQ); 
    lis->clientNum = clQ;
    Client tempClient;
    Account tempAc;
    for(int i = 0; i < clQ; i++){
        tempClient->NIF = (char*) /*BD*/;
        tempClient->numAc = (int) /*BD*/;
        tempClient->totalBal = (float) /*BD*/;
        tempClient->typeReq = (char*) /*BD*/;
        for(int i = 0; i < tempClient->numAc){
            tempAc->type = (char*) /*BD*/;
            tempAc->balance = (float) /*BD*/;
            tempClient->accounts[i] = /*BD*/
        }
        lis->clients[i] = tempClient;
    }
    return lis;
}

Client reviewClient(List* lis, int sel){
	printf("NIF: %s\n
	"Total balance: %f\n
	"Numero de cuentas: %d\n
	"Tipo de cuenta solicitada: %s\n
	"Cuentas activas:\n",lis->clients[sel]->NIF, lis->clients[sel]->totalBal, lis->clients[sel]->numAc, lis->clients[sel]->typeReq);
    for(int i; i < max; i++){
		printf("	·%s; Balance: %f\n", lis->clients[sel]->accounts[i]->type, lis->clients[sel]->accounts[i]->balance);
    }
    submitResponse(lis->clients[sel]);
}

void submitResponse(Client c){
	printf("Aceptar solicitud? (S/N)");
	char choice;
	scanf(%c, &choice);
}

void updateList(){
	
}
