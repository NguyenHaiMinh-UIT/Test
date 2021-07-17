#pragma once
#include <iostream>

#include <string>
//#include "Basic.h"
//#include "Non_member.h"
//#include "Premium.h"
using namespace std;
enum Type { None, PREMIUM, BASIC, NON_MEMBER };
class Customer {
protected:
	string Name;
	string ID;
	int Time_use;
	int Money;
	Type type;
public:
	Customer();
	//~Customer();
	virtual void Input();
	virtual void Output();
	Type Get_type() const;
	virtual int GetMoney();
};