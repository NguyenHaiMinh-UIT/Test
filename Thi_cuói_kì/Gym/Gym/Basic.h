#pragma once
#include <iostream>
#include "Customer.h"
using namespace std;
class Basic : public Customer{
private:
	int PhiCB;
	int PhiLH;
	int PT;
	int Lop;
public:
	Basic();
	void Input();
	void Output();
	int GetMoney();
};