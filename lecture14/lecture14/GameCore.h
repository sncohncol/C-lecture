#pragma once

/* 게임 상태 변수
 * 0 : 타이틀 화면
 * 1 : 메인게임
 * 2 : 게임종료
 */
int isGameRunning;

void BeginGame(void);
void UpdateGame(void);
void EndGame(void);