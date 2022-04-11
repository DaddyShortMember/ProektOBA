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

void submitResponse(){
	for()
}

void updateList(){
	
}
