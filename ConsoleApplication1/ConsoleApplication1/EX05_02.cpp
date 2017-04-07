///ex05_02 EXERCISE 12.4 IS SORTED?
///SARAH OLDERR
#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isSorted(const T list[], int size) { //Sorted == goes lower to greater
	bool flag = true;
	for (int i = 0; i < size; i++) {
		if (list[i] > list[i - 1])
			flag = false;
	}
	return flag;
}

int main() {
	//INT TEST
	int listINT1[] = { 0, 1, 2, 3, 4 };
	int listINT2[] = { 0, 2, 1, 3, 4 };
	bool intTestINT1 = isSorted(listINT1, 5);
	bool intTestINT2 = isSorted(listINT2, 5);
	//DOUBLE TEST
	int listDOUBLE1[] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
	int listDOUBLE2[] = { 0.5, 2.5, 1.5, 3.5, 4.5 };
	bool intTestDOUBLE1 = isSorted(listDOUBLE1, 5);
	bool intTestDOUBLE2 = isSorted(listDOUBLE2, 5);
	//STRING TEST
	string listSTRING1[] = { "ab", "bc", "cd", "ef", "fg" };
	string listSTRING2[] = { "ab", "cd", "bc", "ef", "fg" };
	bool listTestSTRING1 = isSorted(listSTRING1, 5);
	bool listTestSTRING2 = isSorted(listSTRING2, 5);

	return 0;
}
//should add cout statements