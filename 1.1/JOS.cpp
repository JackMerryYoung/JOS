#include "function.h"
using namespace std;

int main() 
{
	draw_start();
	cout << "Welcome to JOS!";
	getch();
	system("cls");
	while(true) 
	{
		while(true) 
		{
			draw_menu();
			int opr = getch();
			if(opr == '1') 
			{
				system("cls");
				bool close_open = closeJOS();
				if(close_open == true) 
					return 0;
			}
			if(opr == '2') 
			{
				system("cls");
				EScript(); 
			}
		}

		system("cls");
	}
	
	return 0;
}
