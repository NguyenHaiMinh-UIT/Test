#include "Engine.h"

Engine::Engine() : ID(" "),type(0),price(0),manufact(" "),money(0)
{

}

void Engine::Input()
{
	cout << "Chon dong co (1-dong co A, 2-dong co B, 3-dong co C): ";
	cin >> type;
	cout << "Nhap ma dong co: ";
	cin.ignore();
	getline(cin, ID);
	cout << "Nhap hang san xuat: ";
	getline(cin, manufact);
}
