///ex05_03 EXERSIZE 12.8 IMPLEMENT VECTOR CLASS
///SARAH OLDERR
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>

class Vector {
private:
	T* data;
	int size;
	int capacity;
public:
	Vector<T>() {
		data = NULL;
		size = 0;
		capacity = 1;
	}
	Vector<T>(int s) {
		size = s;
		do { //doubling fxn from hw04
			data = new T[capacity * 2];
		} while (size > capacity);
		for (int i = 0; i < size; i++) {
			data[i] = 2; //filled with default value 2
		}
	}
	Vector<T>(int s, T value) {
		for (int i = 0; i < s; i++) {
			data[i] = value; //filled w specified value
		}
	}
	void push_back(T element) {
		size++;
		data[size] = element;
	}
};


/*
UML DIAGRAM
+ vector<elementType>()
+vector<elementType>(size : int)
+vector<elementType>(size:int, defaultValue: elementType)
+push_back(element: elementType): void
+pop_back(): void
+size(): unsigned const
+at(index:int) : elementType const
+empty(): bool const
+clear(): void
+swap(v2: vector): void
*/