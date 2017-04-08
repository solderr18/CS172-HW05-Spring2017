#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

template <typename T>
void shuffle(vector<T>& v) {
	srand(time(NULL));
	int place;
	for (int i = 0; i < v.size(); i++) {
		T temp = v[i];
		place = rand() % v.size();
		v[i] = v[place];
		v[place] = temp;
	}
}

int main() {

	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	shuffle(v);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	return 0;
}