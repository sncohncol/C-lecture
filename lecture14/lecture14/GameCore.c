#include "GameCore.h"
#include "ConsoleUtil.h"
#include "screen.h"
#include "GameObjects.h"

int gameState;

void BeginGame(void)
{
	gameState = 0;

	SetCursorVisible(0);
	Map_Init();
}
void UpdateGame(void)
{
	if (gameState == 0)
	{
		SetCursorPosition(0, 0);
		PrintTitle();
		SetCursorPosition(9, 2);
		ES_Smile_Draw();
		SetCursorPosition(0, 10);

		char gameInput = '0';	/*ASCII*/
		gameInput = getch();

		if (gameInput == '1') { gameState = 1; }
		if (gameInput == '2') { gameState = 2; }
	}
	else if (gameState == 1)
	{
		SetCursorPosition(0, 0);
		PrintMainGame();
		SetCursorPosition(9, 2);
		ES_Angry_Draw();
		sleep(1000);
		SetCursorPosition(9, 2);
		ES_Angry2_Draw();
		sleep(1000);
		SetCursorPosition(0, 0);
		Map_Draw();
		sleep(5000);
		SetCursorPosition(0, 10);


		isGameRunning = 0;
	}
	else if (gameState == 2)
	{
		isGameRunning = 0;
	}
}
void EndGame(void)
{
	SetCursorPosition(0, 0);
	PrintGameEnd();
	sleep(1000);
	SetCursorPosition(4, 6);
	GameOverText_Draw();
	sleep(1000);
	SetCursorPosition(0, 10);

	exit(1);
}


