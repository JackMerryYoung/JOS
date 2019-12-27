#include "menu.h"
using namespace std;
/*JOS main*/
int main() {
	draw_start();
	cout << "欢迎来到JOS!";
	getch();
	system("cls");
	while(true) {
		while(true) {
			draw_menu();
			int opr = getch();
			if(opr == '1') {
				system("cls");//清屏
				bool close_open = closeJOS();
				if(close_open == true) return 0;
			}
			if(opr == '2') {
				system("cls");//清屏
				EScript(); 
			}
		}
		system("cls");
	}
	return 0;
}
