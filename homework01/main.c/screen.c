#include <stdio.h>
#include "screen.h"
#include <string.h>

int clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;
    int j = 0;
    while (j < height)
    {
        while (i < width + 1)
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '#';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
    return 0;
}

int writeStringToBuffer(const char* string, char* screenBuf, int width, int x, int y)
{
    int i = 0;
    while (string[i] != '\0')
    {
        screenBuf[(y * (width + 1)) + x + i] = string[i];
        i++;
    }
    return 0;
}

int setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* title = "1. 게임 시작하기\n 2. 게임 설명 \n3. 게임 종료";
    int x = (width / 2) - (strlen(title) / 2);
    int y = height / 2;

    return writeStringToBuffer(title, screenBuf, width, x, y);
}

int setGameOverToScreenBuffer(char* screenBuf, int width, int height)
{
    const char* gameOverText = "게임 종료";
    int x = (width / 2) - (strlen(gameOverText) / 2);
    int y = height / 2;

    return writeStringToBuffer(gameOverText, screenBuf, width, x, y);
}
