#include "Non_member.h"

Non_member::Non_member() /*: Customer(), PhiCB(200), PT(0)*/
{
	type = Type::NON_MEMBER;
	/*loai = 2;*/
}

void Non_member::Input()
{
	cout << "--------Khach Non_member-------------\n";
	Customer::Input();
	cout << "co xai PT khong YES(1):NO(0) ?";
	cin >> PT;
	while (PT != 1 && PT != 0) {
		
		cout << " Nhap lai  ";
		cin >> PT;
	}
}

void Non_member::Output()
{
	Customer::Output();
	if (PT == 1)
		cout << "Dang ky PT\n";
	cout << "Tong tien:";
	cout << Non_member::GetMoney();
	cout << endl;
}

int Non_member::GetMoney()
{
	 Money = PhiCB + PT*200;
	 return Money*Time_use;
	//return PhiCB + PT * 200;
}
