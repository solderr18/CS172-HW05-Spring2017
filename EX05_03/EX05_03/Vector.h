#ifndef VECTOR_H
#define VECTOR_H
using namespace std;

template <typename T>

class Vector {
private:
	T* data;
	int numberOfElements;
	int capacity;
public:
	Vector<T>() {
		data = NULL;
		numberOfElements = 0;
		capacity = 1;
	}

	Vector<T>(int s) {
		numberOfElements = s;
		capacity = s;
		data = new T[capacity];
		for (int i = 0; i < numberOfElements; i++) {
			data[i] = 2; //filled with default value 2
		}
	}

	Vector<T>(int s, T value) {
		numberOfElements = s;
		capacity = s;
		data = new T[capacity];
		for (int i = 0; i < s; i++) {
			data[i] = value; //filled w specified value
		}
	}

	void push_back(T element) {
		if (numberOfElements >= capacity) {
			capacity *= 2;
			int * test = new int[capacity];
			for (int i = 0; i < numberOfElements; i++)
				test[i] = data[i];
			data = test;
		}
		data[numberOfElements] = element;
		numberOfElements++;
	}

	void pop_back() {
		numberOfElements--;
	}

	int size() { return numberOfElements; }
	T at(int index) const {
		return data[index];
	}

	bool empty() const {
		return (numberOfElements == 0);
	}

	void clear() {
		size = 0;
	}
	
	void swap(Vector & v) {
		T * temp = data;
		data = v.data;
		v.data = temp;
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
#endif VECTOR_H