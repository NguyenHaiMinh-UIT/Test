#include"Basic.h"

Basic::Basic() : Customer(), PhiCB(500), PhiLH(100), PT(100), Lop(0)
{
	type = Type::BASIC;
	/*loai = 1;*/
}

void Basic::Input()
{
	cout << "--------------------Khach Basic----------------------\n";
	Customer::Input();
	cout << "Nhap vao so lop dang ki ";
	cin >> Lop;
	cout << "co xai PT khong YES(1):NO(0) ?";
	cin >> PT;
	while (PT != 1 && PT != 0) {

		cout << " Nhap lai  ";
		cin >> PT;
	}
}

void Basic::Output()
{
	Customer::Output();
	if (PT == 1)
		cout << "Dang ky PT\n";
	cout << "Tong tien:";
	cout << Basic::GetMoney();
	cout << endl;
}

int Basic::GetMoney()
{
	Money = PhiCB + PhiLH * Lop + PT * 100;
	return Money*Time_use;
}
