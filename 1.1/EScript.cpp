#include <bits/stdc++.h>
#include "function.h"
using namespace std;

string opr;

void error(int num) 
{
	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_INTENSITY);
	if(num == 1000) cout << "ERROR 1000: DIVISOR CANNOT BE ZERO!" << endl;
	else if(num == 1001) cout << "ERROR 1001: CANNOT FIND THIS SYMBOL!" << endl; 
	else if(num == 2000) cout << "ERROR 2000: THE PROGRAM DOES NOT EXIST OR HAD RUNTIME ERROR!" << endl;
	else if(num == 2000) cout << "ERROR 3001: TITLE OR MESSAGE IS TOO LONG!" << endl;
	else if(num == 10000) cout << "ERROR 10000: CANNOT find this command!" << endl; 
	SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}

int main(int argc, char* args[]) 
{
	SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "EScript(REPL) Version 1.1(JOS " << args[1] << "." << args[2] << ")" << endl;
	while(true)
	{
		cout << "ES> ";
		cin >> opr;
		if(opr == "opr") 
		{
			long long a,b;
			char fh;
			cin >> a >> fh >> b;
			if(fh == '*') 
				cout << "result: " << a * b << endl;
			else if(fh == '/') 
			{
				if(b == 0) 
					error(1000);
				else 
					cout << "result: " << a / b << endl;
			} 
			else if(fh == '+') 
				cout << "result: " << a + b << endl;
			else if(fh == '-') 
				cout << "result: " << a - b << endl;
			else if(fh == '%') 
				cout << "result: " << a % b << endl;
			else error(1001);
		} 
		else if(opr == "exec") 
		{
			char program[300];
			cin.getline(program, 300);
			int signal = system(program);
			if(signal == 1) 
				error(2000);
			else 
				cout << "Execute successfully!"<< endl;
		} 
		else if(opr == "msg") 
		{
			char *msg;
			cin >> msg;
			SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << msg << endl;
			SetConsoleTextAttribute(handle, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		} 
		else if(opr == "msg_box") 
		{
			char *title, *msg;
			cin >> title >> msg;
			if(strlen(title) > 1024 || strlen(msg) > 2048) error(3001);
			else MessageBoxW(NULL, c_style_string_to_LPWSTR(msg), c_style_string_to_LPWSTR(title), MB_OK);
		} 
		else
			error(10000);
	}
	return 0;
}
