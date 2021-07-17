#pragma once
#include <iostream>
#include <string>
using namespace  std;
 
class Motor {
protected:
	string ID;
	int price;
	int type;
	string manufact;
public:
	Motor();
	virtual void Input();
	virtual void Output();
	virtual int GetMoney();

};