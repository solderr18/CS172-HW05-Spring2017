#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;


class Account {
private:
	int id;
	double balance;
	string name;
	static double annualInterestRate;
	vector<Transaction> transactions;
public:
	Account() {
		id = 0;
		balance = 0;
		name = "(:";
	}
	Account(string n, int iD, double blnce) {
		name = n;
		id = iD;
		balance = blnce;
	}
	string getName() { return name; }


	int getID() { return id; }
	void setID(int i) { id = i; }
	double getBalance() { return balance; }
	void setBalance(double b) { balance = b; }
	static double getAnnualInterestRate() { return annualInterestRate; }
//	void setAnnualInterestRate(double a) { annualInterestRate = a; }

	double getMonthlyInterestRate() { return annualInterestRate / 12; }

	void withdraw(double amount) {
		balance -= amount;
		Transaction t('W', amount, balance, "withdraw");
		transactions.push_back(t);
	} //add if <0 stuff l8r
	void deposit(double amount) { 
		balance += amount; 
		Transaction t('D', amount, balance, "deposit");
		transactions.push_back(t);
	}
	vector<Transaction> getTransactions(){
		return transactions;
	}

};


#endif