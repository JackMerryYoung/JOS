#include <bits/stdc++.h>
using namespace std;
string opr;
int main(int argc,char* args[]) {
	cout << "EScript Version 1.0(JOS " << args[1] << "." << args[2] << ")" << endl;
	while(true){
		cout << "ES> ";
		cin >> opr;
		if(opr == "exec"){
			char program[300];
			cin >> program;
			system(program);
		}
	}
	return 0;
}
