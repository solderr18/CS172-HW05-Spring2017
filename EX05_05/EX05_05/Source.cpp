#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
using namespace std;


int main() {
	Account a("George", 1122, 1000);
//	a.setAnnualInterestRate(0.015); //set to 1.5 percent
	a.deposit(30);
	a.deposit(40);
	a.deposit(50);
	a.withdraw(5);
	a.withdraw(4);
	a.withdraw(2);

	cout << a.getName() << endl;
	cout << "Interest rate" << a.getAnnualInterestRate() << endl;
	cout << "Balance: " << a.getBalance() << endl;
	vector<Transaction> t = a.getTransactions();
	for (int i = 0; i < t.size(); i++) {
		cout << t[i].getDescription() << "	" << t[i].getAmount() << endl;
	}

	return 0;
}