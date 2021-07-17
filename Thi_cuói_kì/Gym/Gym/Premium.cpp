#include "Premium.h"

Premium::Premium() : Customer(),PhiCB(1000),PhiLH(0)
{
	type = Type::PREMIUM;
}

void Premium::Input()
{
	cout << "-----------------------------Khach Premium-------------------------\n";
	Customer::Input();
	cout << "co xai PT khong YES(1):NO(0) ?";
	cin >> PT;
	while (PT != 1 && PT != 0) {

		cout << " Nhap lai ";
		cin >> PT;
	}
	cout << "co xai Xong hoi khong YES(1):NO(0) ?";
	cin >> Xonghoi;
	while (Xonghoi != 1 && Xonghoi != 0) {

		cout << " Nhap lai  ";
		cin >> Xonghoi;
	}
}

void Premium::Output()
{

	Customer::Output();
	if (PT)
		cout << "co ho tro PT\n";
	if (Xonghoi)
		cout << "co dung xong hoi\n";
	cout << "Tong tien: ";
	cout << Premium::GetMoney() << " Nghin dong\n";

}

int Premium::GetMoney()
{
	Money = 1000;
	return Money*Time_use;
}
