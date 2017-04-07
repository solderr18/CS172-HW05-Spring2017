///ex05_01 12.2 LINEAR SEARCH
///SARAH OLDERR
#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i])
			return i;
	}
	return -1;
}

int main() {
	//test given in text for INTEGERS
	int listINT[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	int i1 = linearSearch(listINT, 3, 8); // Returns 1
	int j1 = linearSearch(listINT, -4, 8); // Returns -1
	int k1 = linearSearch(listINT, -3, 8); //Returns 5
	//TESTING FOR DOUBLE
	double listDOUBLE[] = { 1.5, 4.5, 4.5, 2.5, 5.5, -3.5, 6.5, 2.5 };
	int i2 = linearSearch(listDOUBLE, 3.5, 8); // Returns 1
	int j2 = linearSearch(listDOUBLE, -4.5, 8); // Returns -1
	int k2 = linearSearch(listDOUBLE, -3.5, 8); //Returns 5
	//TESTING FOR STRING
	string listSTRING[] = { "a", "ab", "abc", "abcd", "abcde" };
	int i3 = linearSearch(listSTRING, string("a"), 5); //Returns 1
	int j3 = linearSearch(listSTRING, string("efg"), 5); //Returns -1
	int k3 = linearSearch(listSTRING, string("abcde"), 5); //Returns 5

	return 0;
}
//should add cout statements