#include <bits/stdc++.h>
#include "function.h"
using namespace std;
string opr;
void error(int num) {
	SetConsoleTextAttribute(handle,FOREGROUND_RED | FOREGROUND_INTENSITY);
	if(num == 1000) cout << "error 1000:Divisor cannot be zero!" << endl;
	else if(num == 1001) cout << "error 1001:Cannot find this symbol!" << endl; 
	else if(num == 2000) cout << "error 2000:Cannot find this program!" << endl;
	else if(num == 3000) cout << "error 3000:Cannot find this command!" << endl; 
	SetConsoleTextAttribute(handle,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
int main(int argc,char* args[]) {
	SetConsoleTextAttribute(handle,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "EScript(REPL) Version 1.1(JOS " << args[1] << "." << args[2] << ")" << endl;
	while(true) {
		cout << "ES> ";
		cin >> opr;
		if(opr == "opr") {
			long long a,b;
			char fh;
			cin >> a >> fh >> b;
			if(fh == '*') {
				cout << "result:" << a * b << endl;
			} else if(fh == '/') {
				if(b == 0) error(1000);
				else cout << "result:" << a / b << endl;
			} else if(fh == '+') cout << "result:" << a + b << endl;
			else if(fh == '-') cout << "result:" << a - b << endl;
			else if(fh == '%') cout << "result:" << a % b << endl;
			else error(1001);
		} else if(opr == "exec") {
			char program[300];
			cin.getline(program,300);
			int signal = system(program);
			if(signal == 1) error(2000);
			else cout << "Execute successfully!"<< endl;
		} else if(opr == "msg") {
			char msg[1000];
			cin >> msg;
			SetConsoleTextAttribute(handle,FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << msg << endl;
			SetConsoleTextAttribute(handle,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		} else if(opr == "msg_box") {
			char title[20],msg[1000];
			cin >> title >> msg;
			MessageBox(NULL,msg,title,MB_OK);
		} else {
			error(3000);
		}
	}
	return 0;
}
