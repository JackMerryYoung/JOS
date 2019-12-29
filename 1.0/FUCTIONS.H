#pragma once
#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
/*实现开始界面绘画*/
void draw_start()
{
	cout << "      ■   ■■     ■■■\n";
	cout << "      ■ ■    ■ ■\n";
	cout << "      ■ ■    ■   ■■\n";
	cout << "■    ■ ■    ■       ■\n";
	cout << "  ■■     ■■   ■■■\n";
}
/*实现菜单绘画*/
void draw_menu()
{
	cout << "1.关机" << endl;
	cout << "2.JSell" << endl;
}
bool closeJOS()
{
	int yn = MessageBox(NULL,"是否关机","提示",MB_YESNO);
	if(yn == IDYES) {
		for(int i = 0; i < 3; i ++) {
			cout << "关机中";
			for(int i = 0; i < 3; i ++) {
				cout << ".";
				Sleep(1000);
			}
			system("cls");//清屏
		}
		MessageBox(NULL,"关机已成功","提示",MB_OK);
		return true;
	} else {
		MessageBox(NULL,"关机已取消","提示",MB_OK);
		return false;
	}
}
void EScript() {
	system("start EScript 1 0");
}
