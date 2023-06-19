#include "GameCore.h"

int main(void)
{	
	isGameRunning = 1;

	/*초기화시 실행*/
	BeginGame();

	while (isGameRunning)
	{
		UpdateGame();		
	}

	/*종료 전 실행*/
	EndGame();
	
	return 0;
}

