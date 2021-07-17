#pragma once
#include <iostream>
#include "Customer.h"
using namespace std;
class Non_member : public Customer 
{
private: 
	int PhiCB = 200;
	int PT;
public:
	Non_member();
	//~Non_member();
	void Input();
	void Output();
	int GetMoney();
};