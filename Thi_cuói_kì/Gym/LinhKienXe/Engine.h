#pragma once
#include <iostream>
#include <string>
#include "Motor_bike.h"
using namespace std;

class Engine : public Motor{
private:
	string ID;
	int type;
	int price;
	string manufact;
	int money;
public:
	Engine();
	void Input();
	void Output();
	void Get_price();
};