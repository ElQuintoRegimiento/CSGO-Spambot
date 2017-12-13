#pragma once
#include <iostream>
#include <string>
#include <Windows.h>


void Keycomb()
{
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.time = 0;
	ip.ki.wVk = 0;
	ip.ki.dwExtraInfo = 0;


	ip.ki.dwFlags = KEYEVENTF_SCANCODE;
	ip.ki.wScan = 0x2C;                  //Y-Key

	SendInput(1, &ip, sizeof(INPUT));

	Sleep(25);

	ip.ki.wVk = 'Y';
	ip.ki.dwFlags = 0; 
	SendInput(1, &ip, sizeof(INPUT));


	ip.ki.wVk = 'Y';
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));

	Sleep(25);

	ip.ki.wVk = VK_BACK;
	ip.ki.dwFlags = 0;
	SendInput(1, &ip, sizeof(INPUT));


	ip.ki.wVk = VK_BACK;
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));

	Sleep(25);

	ip.ki.wVk = VK_CONTROL;
	ip.ki.dwFlags = 0; 
	SendInput(1, &ip, sizeof(INPUT));


	ip.ki.wVk = 'V';
	ip.ki.dwFlags = 0; 
	SendInput(1, &ip, sizeof(INPUT));


	ip.ki.wVk = 'V';
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));

	ip.ki.wVk = VK_CONTROL;
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));

	Sleep(25);

	ip.type = INPUT_KEYBOARD;
	ip.ki.time = 0;
	ip.ki.wVk = 0;
	ip.ki.dwExtraInfo = 0;

	ip.ki.dwFlags = KEYEVENTF_SCANCODE;
	ip.ki.wScan = 0x1C;                  //Enter-Key

	SendInput(1, &ip, sizeof(INPUT));

	Sleep(25);

	ip.ki.wVk = VK_MENU;
	ip.ki.dwFlags = 0; 
	SendInput(1, &ip, sizeof(INPUT));

	ip.ki.wVk = VK_MENU;
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}


void ToClipboard(const std::string &s)
{
	OpenClipboard(0);
	EmptyClipboard();
	HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, s.size());
	if (!hg) {
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg), s.c_str(), s.size());
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT, hg);
	CloseClipboard();
	GlobalFree(hg);
}