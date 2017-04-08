#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "Date.h"
#include <string>
using namespace std;

class Transaction {
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction(char t, double a, double b, string d) {
		type = t;
		amount = a;
		balance = b;
		description = d;
	}
	double getAmount() { return amount; }
	string getDescription() { return description; }
};

#endif TRANSACTION_H