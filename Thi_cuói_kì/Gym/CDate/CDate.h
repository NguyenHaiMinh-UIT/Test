#pragma once
#include <iostream>
using namespace std;
class CDate {
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;
public:
	CDate();
	bool isValid();
	friend istream& operator >> (istream& is, CDate a);
	friend ostream& operator << (ostream& os, const CDate a);

	CDate &operator ++ ();
	CDate operator ++(int);


};