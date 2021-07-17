#include "Gym.h"
//#include "Customer.h"
//#include "Basic.h"
//#include "Non_member.h"
//#include "Premium.h"
Gym::Gym() : slkh(0), dskh(NULL)
{

}

Gym::~Gym()
{
	if (dskh == NULL)
		delete[] dskh;
}

void Gym::Input()
{
	cout << "Nhap so luong khach hang:";
	cin >> slkh;
	dskh = new Customer * [slkh];
	for (int i = 0; i < slkh; i++)
	{
		cout << "Nhap loai khach hang (1),(2),(3): ";
		int loai;
		cin >> loai;
		while (loai != 1 && loai != 2 && loai != 3)
		{
			cout << "Moi nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
		{
			dskh[i] = new Premium;
			dskh[i]->Input();
		}
		else if (loai == 2)
		{
			dskh[i] = new Basic;
			dskh[i]->Input();
		}
		else if (loai == 3)
		{
			dskh[i] = new Non_member;
			dskh[i]->Input();
		}
	}
}

void Gym::Output()
{
	for (int i = 0; i < slkh; i++)
	{
		//if (dskh[i]->Get_type() == Type::PREMIUM)
		//	dskh[i]->Output();
		//else if (dskh[i]->Get_type() == Type::BASIC)
		//	dskh[i]->Output();
		//else if (dskh[i]->Get_type() == Type::NON_MEMBER)
		//	dskh[i]->Output();
		dskh[i]->Output();
	}
}

void Gym::Potential_client()
{
	int max = -1;
	for (int i = 0; i < slkh; i++)
	{
		if (dskh[i]->GetMoney() > max)
			max = dskh[i]->GetMoney();
	}
	for (int i = 0; i < slkh; i++)
	{
		if (dskh[i]->GetMoney() == max)
			dskh[i]->Output();
	}
}
