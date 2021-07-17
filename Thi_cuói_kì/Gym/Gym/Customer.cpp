#include "Customer.h"

Customer::Customer() : Name(" "), ID(" "), Time_use(0)
{
	type = Type::None;
	/*loai = -1;*/
}

void Customer::Input()
{
	cin.ignore();
	cout << " Nhap ten: ";
	getline(cin, Name);
	cout << "So chung minh nhan dan: ";
	cin.ignore();
	getline(cin, ID);
	cout << "Thoi gian dang ky (theo thang): ";
	cin >> Time_use;
	cout << "------------------------------------------\n";

}

void Customer::Output()
{
	cout << "Ho va ten: " << Name << "\tID: " << ID << "\tThoi gian dang ky: " << Time_use <<" thang" << endl;

}

Type Customer::Get_type() const
{
	return type;
}

int Customer::GetMoney()
{

	return Money*Time_use;
}
