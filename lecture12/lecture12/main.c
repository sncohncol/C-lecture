#define _YUHAN_C_WINDOW_USER

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _YUHAN_C_WINDOW_USER
#include <windows.h>
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

	return 0;
}