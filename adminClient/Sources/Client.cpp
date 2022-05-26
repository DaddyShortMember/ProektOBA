#include <iostream>
#include "Client.h"

using namespace std;

Client::Client(){
	this->NIF = "0";
	this->name = "noName";
	this->numAc = 0;
	this->totalBal = 0;
	this->accounts = {};
}

Client::Client(char* NIF, char* name, int numAc, Account accounts[]){
	this->NIF = NIF;
	this->name = name;
	this->numAc = numAc;
	this->totalBal = 0;
	this->accounts = {};
}

Client::~Client(){
	delete this;
}

char* Client::getNIF(){
	return NIF;
}

char* Client::getName(){
	return name;
}

void Client::setName(char* name){
	this->name = name;
}

int Client::getNumAc(){
	return numAc;
}
void Client::setNumAc(int numAc){
	 this->numAc = numAc;
}

float Client::getTotalBal(){
	 return totalBal;
}

void Client::setTotalBal(){
	for (int i = 0; i < 4; i++) {
		totalBal+=this->accounts[i].getBalance();
	}
}

Account* Client::getAccounts(){
	return accounts;
}

void Client::addAccount(Account ac){
	for (int i = 0; i < 4; i++) {
		if(this->accounts[i].getType() == "none"){
			this->accounts[i] = ac;
			break;
		}
	}
	cout << "client already has that type of account" << endl;
}

void Client::closeAccount(){
	for (int i = 0; i < 4; i++) {
		cout << i << ": " << "Type: " << this->accounts[i].getType() << ", Balance: " << this->accounts[i].getBalance() << endl;
	}
	cout << "What account do you wish to close?" << endl;
	int option = getchar();
	if((option == 0 || option == 1 || option == 2 || option == 3) && this->accounts[option].getType() != "none"){
		this->numAc-=1;
		this->accounts[option].setType("none");
		this->accounts[option].setBalance(0);
		cout << "Account closed" << endl;
		break;
	}
	cout << "Either the input you introduced was incorrect or that account doesn't exist" << endl;
}
