#include <stdio.h>


List* getList(){
	//sql stuff
	int clQ; /*<- cantidad en BD (CLIENTES)*/
	List* lis = (List*) malloc(sizeof(clQ)+sizeof(Client*)*clQ); 
	lis->clientNum = clQ;
	for(int i = 0; i < clQ; i++){
		lis->clients[i] = /*clientes de la BD*/;
	}
	return lis;
}

void submitResponse(){
	
}

void updateList(){
	
}
