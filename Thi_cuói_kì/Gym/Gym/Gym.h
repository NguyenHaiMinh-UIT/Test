#pragma once
//#include "Customer.h"
#include "Basic.h"
#include "Non_member.h"
#include "Premium.h"
#include <iostream>
#include <string>
using namespace std;

class Gym {
private:

	Customer** dskh;	
	int slkh;
public:
	Gym();
	~Gym();
	void Input();
	void Output();
	void Potential_client();
};