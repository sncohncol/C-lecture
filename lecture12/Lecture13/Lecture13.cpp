#include <stdio.h>
#include <Windows.h>

int main()
{
	COORD Cur = { 0,0 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;0m");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;32m송영진");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;35m          장석희");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;31m       ♡       ");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;32m송영진    \033[0;35m장석희");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;32m송영진 \033[0;31m♡ \033[0;35m장석희");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;32m송영진 \033[0;31m♥ \033[0;35m장석희");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;32m송영진 \033[0;31m♡ \033[0;35m장석희");
	Sleep(300);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("\033[0;32m송영진 \033[0;31m♥ \033[0;35m장석희");
	printf("\033[0;0m\n\n");
	return 0;
}