#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

int main() {
	Vector<int> v1(5,3);
	v1.push_back(5);
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << endl;
	}
	cout << endl;
	v1.pop_back();
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << endl;
	}
	cout << boolalpha << v1.empty() << endl;

	Vector<string> v2(5, "hi");
	for (int i = 0; i < v2.size(); i++) {
		cout << v2.at(i) << endl;
	}
	Vector<string> v3(5, "hello");
	v2.swap(v3);
	for (int i = 0; i < v2.size(); i++) {
		cout << v2.at(i) << endl;
	}
	return 0;
}