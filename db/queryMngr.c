#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqlite3.h"

sqlite3 *db;
sqlite3_stmt *stmt;


void respondLoan(char[] NIF, double amount, char response){
	sqlite3_open("bankdata.s3db",&db);
	if(response = 'y'){
		char squery1[]= "insert into bLoans (lNIF,dateGrant,loanAmount) values (?, date('now'), ?)";
		sqlite3_prepare_v2(db, squery1, strlen(squery1) + 1, &stmt, NULL);
		sqlite3_bind_text(stmt,1,NIF,7,SQLITE_STATIC);
		sqlite3_bind_double(stmt,3,NIF,7,SQLITE_STATIC);
		sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		sqlite3_close(db);
	}else{
		char squery1[]= "delete from bLRequests where NIF = ?";
		sqlite3_prepare_v2(db, squery1, strlen(squery1) + 1, &stmt, NULL);
		sqlite3_bind_text(stmt,1,NIF,7,SQLITE_STATIC);
		sqlite3_step(stmt);
		sqlite3_finalize(stmt);
		sqlite3_close(db);
	}
}
void respondNewAcc(char[] NIF, char response){
	
}
void respondDeleteAcc(char[] NIF, char response){
	
}
