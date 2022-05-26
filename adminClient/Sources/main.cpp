#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Client.h"
#include "Account.h"

using namespace std;

#include "Resources/sqlite3.h"

vector<char*> pClients;
sqlite3 *db;
sqlite3_stmt *stmt;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main() {
	char* err;

	sqlite3_open("bankdata.s3db",&db);
	int rc = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS algolancer(x1 INT, x2 INT, name varchar(100));", NULL, NULL, &err);

	system("Color 0A");
	cout << "  /$$$$$$  /$$$$$$$   /$$$$$$ "
			" /$$__  $$| $$__  $$ /$$__  $$"
			"| $$  \ $$| $$  \ $$| $$  \ $$"
			"| $$  | $$| $$$$$$$ | $$$$$$$$"
			"| $$  | $$| $$__  $$| $$__  $$"
			"| $$  | $$| $$  \ $$| $$  | $$"
			"|  $$$$$$/| $$$$$$$/| $$  | $$"
			" \______/ |_______/ |__/  |__/ \n\n\n" << endl;
	system("Color 07");
	void managerMenu();
	return 0;
}

void managerMenu(){

	char *zErrMsg = 0;
	int rc;
	char *sql;

	if(rc){
		cout << "Can't open database: %s\n" << endl;
	}
	while(1){
		cout << "1. Manage registration requests"
				"2. Manage existing clients"
				"3. Exit"
				"Choose an operation" << endl;
		int option = getchar();
		if(option == 1){
			sql = "SELECT * FROM bARequest";
			rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
			pClients = {};
			/*
			for (int i = 0; i < /{SQL} number of potential clients in BD/; i++) {
				pClients.push_back(/*{SQL} Clients individually/);
				pClients[i].
			}
			*/

		} else if(option == 2){

		} else if(option == 3){
			//sqlite3_close(db);
			break;
		}
	}
}
