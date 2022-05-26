#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(char* owner){
	this->owner = owner;
	this->balance = 0;
	this->type = "none";
}

Account::Account(char* owner, char* type, float balannce){
	this->owner = owner;
	this->type = type;
	this->balance = balance;
}

Account::~Account(){
	delete this;
}

const float Account::getBalance(){
	return balance;
}

void Account::setBalance(float balance){
	this->balance = balance;
}

const char* Account::getType(){
	return type;
}

void Account::setType(char* type){
	this->type = type;
}
