#include "GameCore.h"

int main(void)
{	
	isGameRunning = 1;

	/*�ʱ�ȭ�� ����*/
	BeginGame();

	while (isGameRunning)
	{
		UpdateGame();		
	}

	/*���� �� ����*/
	EndGame();
	
	return 0;
}

