#ifndef GAME_H
#define GAME_H
#include <stdio.h>

typedef struct {
    int level;
    int health;
    int power;
} Player;

void showMainMenu();
void showGameMenu(int balance, int power);
void welcomeAnimation();
void gameDescription();
void gameExit();
void sowSeeds(int* balance, int* power);
void goToBattle(int power);
void increasePower(int* balance, int* power);

#endif
