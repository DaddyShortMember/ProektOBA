#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include "Client.h"
#include "Account.h"

class Operations{

public:
	bool sendMoney();
	void requestPayment();
	void reviewRequests();
	void reviewExpenses();
	void reviewIncome();
};

#endif /* OPERATIONS_H_ */
