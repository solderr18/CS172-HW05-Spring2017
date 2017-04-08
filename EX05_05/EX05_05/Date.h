#ifndef DATE_H
#define DATE_H


class Date {
private:
	int year, month, day;
public:
	Date() {}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
};


#endif 