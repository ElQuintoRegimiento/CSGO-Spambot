#include <iostream>
#include <string>
#include <Windows.h>
#include "Functions.h"
#include "Quotes.h"

using namespace std;

int main()
{
	int RandomNumber;

	cout << "\n";
	system("Color 5");
	cout << " Counter Strike: Global Offensive Spambot";
	Sleep(100);
	cout << "\n";
	Sleep(100);
	cout << " By EQR\n";
	Sleep(100);
	cout << "\n";
	Sleep(100);
	cout << " Kifferking           F1";
	Sleep(100);
	cout << "\n";
	Sleep(100);
	cout << " Karl Marx            F2";
	Sleep(100);
	cout << "\n";
	Sleep(100);
	cout << " Afk-Script           F11";
	Sleep(100);
	cout << "\n";
	Sleep(100);
	cout << "\n";
	Sleep(100);
	cout << "\n";
	Sleep(100);


	while (1)
	{
		if (GetAsyncKeyState(VK_F1))
		{
			Quotes.Kifferking(0);
		}

		if (GetAsyncKeyState(VK_F2))
		{
			Quotes.KarlMarx(0);
		}

		if (GetKeyState(VK_F11))
		{
			AfkScript();
		}

		cout << "\r";
		cout << " Kifferking Quotes Send = ";
		cout << Quotes.Erhöhung;
		cout << "  Karl Marx Quotes Send = ";
		cout << Quotes.Erhöhung2;

		Sleep(250);
	}
}		
