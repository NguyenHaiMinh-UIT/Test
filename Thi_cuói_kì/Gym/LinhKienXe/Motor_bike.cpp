#include "Motor_bike.h"

Motor::Motor() : ID(" "), type(0), price(0),manufact(" ")
{

}

void Motor::Input()
{
	cout << "Nhap ma dong co: ";
	cin.ignore();
	getline(cin, ID);
	cout << "Nhap hang san xuat: ";
	getline(cin, manufact);
}
