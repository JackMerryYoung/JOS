#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
extern HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
void draw_start()
{
	SetConsoleTextAttribute(handle,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "      ■   ■■     ■■■" << endl;
	cout << "      ■ ■    ■ ■      " << endl;
	cout << "      ■ ■    ■   ■■  " << endl;
	cout << "■    ■ ■    ■       ■" << endl;
	cout << "  ■■     ■■   ■■■  " << endl;
	SetConsoleTextAttribute(handle,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
void draw_menu()
{
	cout << "------------------------------------" << endl;
	cout << "|           JOS main menu          |" << endl;
	cout << "------------------------------------" << endl;
	cout << "|             1.shutdown           |" << endl;
	cout << "------------------------------------" << endl;
	cout << "|           2.EScript(REPL)        |" << endl;
	cout << "------------------------------------" << endl;
}
bool closeJOS()
{
	int yn = MessageBox(NULL,TEXT("Shutdown?"),TEXT("Prompt"),MB_YESNO);
	if(yn == IDYES) {
		for(int i = 0; i < 3; i ++) {
			cout << "shutdown";
			for(int i = 0; i < 3; i ++) {
				cout << ".";
				Sleep(1000);
			}
			system("cls");
		}
		MessageBox(NULL,TEXT("Successfully!"),TEXT("Prompt"),MB_OK);
		return true;
	} else {
		MessageBox(NULL,TEXT("Canceled"),TEXT("Prompt"),MB_OK);
		return false;
	}
}
void EScript() {
	system("start EScript 1 1");
}
