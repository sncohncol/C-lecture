<<<<<<< HEAD
﻿#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



int frame0()
{
	printf("loading : #");
	return 0;
}

int frame1()
{
	printf("loading : ####");
	return 0;
}

int frame2()
{
	printf("loading : ########");
	return 0;
}

int frame3()
{
	printf("loading : #############");
	return 0;
}

int frame4()
{
	printf("Complete");
	return 0;
}



int main()
{
	clock_t deltaTimeStart = clock(NULL);
	
	int i = 0;
	
	while (i < 1)
	{
		COORD pos = { 0,0 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		frame0();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame1();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame2();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame3();
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		Sleep(1000);
		frame4();
		i = i + 1;
	}
	clock_t deltaTimeEnd = clock(NULL);

	printf("\n걸린 시간 : %d", deltaTimeEnd - deltaTimeStart);
=======
#define _YUHAN_C_WINDOW_USER

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _YUHAN_C_WINDOW_USER
#include <windows.h>
#endif

#ifdef _YUHAN_C_MAC_USER
#include <unistd.h>
#endif

int main(void)
{
	clock_t SJTstart;
	SJTstart = clock();

	int i = 0;

	while (i< 30)
	{		
		/*system("cls");*/

		COORD pos = { 0,0 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		
		printf("�����̰� %d��° ������ ȭ�� ���� �����ߴ�....\n", i+1, (int)SJTstart);
				
		printf("�������� �г� : ");
		
		int j = 0;
		while (j < i)
		{
			printf("#");
			j = j + 1;
		}		
		Sleep(100);
		i = i + 1;		
	}

	clock_t SJTend;
	SJTend = clock();

	printf("%dms��ŭ ȭ�� �´µ� ��ġ�� �ʰ� �ִ�...\n", (int)(SJTend - SJTstart));
	
	
	/*char input[10];
	scanf_s("%d", input, 10);*/
>>>>>>> 2327e950bf6215e72def592d37e8fb643ac646f4

	return 0;
}