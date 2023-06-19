#include "GameObjects.h"
#include <stdio.h>

#define MAP_SIZE_X 26
#define MAP_SIZE_Y 9

/*
* 지도 구성
* '#'(0) : 못가는곳 
* ' '(1) : 가는곳 
*/
int Map[MAP_SIZE_X][MAP_SIZE_Y];

void Map_Init(void)
{
	int x = 0;
	int y = 0;
	while (y < MAP_SIZE_Y)
	{
		while (x < MAP_SIZE_X)
		{
			Map[x][y] = 0;
			x = x + 1;
		}
		x = 0;
		y = y + 1;
	}

	Map[1][1] = 1;
	Map[2][1] = 1;
	Map[2][2] = 1;
	Map[2][3] = 1;
	Map[2][4] = 1;
	Map[2][5] = 1;
	Map[3][5] = 1;
	Map[4][5] = 1;
	Map[5][5] = 1;
	Map[6][5] = 1;
	Map[7][5] = 1;

}

void Map_Draw(void)
{
	int x = 0;
	int y = 0;
	while (y < MAP_SIZE_Y)
	{
		while (x < MAP_SIZE_X)
		{
			if (Map[x][y] == 0)
				printf("#");
			else if (Map[x][y] == 1)
				printf(" ");
			x = x + 1;
		}
		printf("\n");
		x = 0;
		y = y + 1;
	}
}


void ES_Smile_Draw(void)
{
	printf("\033[33m");	/*글자 노란색 변경 RGB(011b = 3)*/
	printf("(^_^  )");
	printf("\033[0m");  /*색상 초기화*/
}
void ES_Angry_Draw(void)
{
	printf("\033[33m");	
	printf("(-_-  )");
	printf("\033[0m");  
}
void ES_Angry2_Draw(void)
{
	printf("\033[33m");	
	printf("(-_- \033[34m+\033[33m)"); /*중간 글자 빨간색 변경 RGB(100b = 4) */
	printf("\033[0m");  
}

void GameOverText_Draw(void)
{
	printf("\033[41m");	/*배경 파란색 변경 RGB(001b = 1)*/
	printf("감사할 줄 알았냐?");
	printf("\033[0m");	/*색상 초기화*/
}