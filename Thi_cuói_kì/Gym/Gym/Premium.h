#pragma once
#include "Customer.h"
#include <iostream>
using namespace std;

class Premium : public Customer
{
private:
	int PhiCB;
	int PhiLH;
	bool PT;
	bool Xonghoi;
public:
	Premium();
	void Input();
	void Output();
	int GetMoney();
};