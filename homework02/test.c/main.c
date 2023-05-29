#define _YUHAN_C_WINDOW_USER

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _YUHAN_C_WINDOW_USER
#include <windows.h>
#endif

void printDelay(const char* text, int delay)
{
    int i = 0;
    while (text[i] != '\0') {
        printf("%c", text[i]);
        fflush(stdout); // Flush output buffer to display immediately
        Sleep(delay);
        i++;
    }
}

void printCharacterLine(const char* character, int length, int delay)
{
    int i;
    for (i = 0; i < length; i++) {
        printf("%s", character);
        Sleep(delay);
    }
    printf("\n");
}

void printCharacterSquare(const char* character, int size, int delay)
{
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("%s", character);
            } else {
                printf(" ");
            }
        }
        printf("\n");
        Sleep(delay);
    }
}

int main(void)
{
    clock_t SJTstart;
    SJTstart = clock();

    int i = 0;

    while (i < 30)
    {
        system("cls");

        COORD pos = { 0,0 };
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

        int j = 0;
        while (j < i)
        {
            printf("#");
            j = j + 1;
        }
        Sleep(100);
        i = i + 1;
    }

    printDelay("\n\n", 500);
    printCharacterSquare("■", 17, 500);
    printDelay("\n\n게임 ", 500);
    printCharacterSquare("■", 17, 500);
    printCharacterLine("■               ■", 17, 500);
    printCharacterLine("■   스  타  트   ■", 17, 500);
    printCharacterLine("■               ■", 17, 500);
    printCharacterSquare("■", 17, 500);
    printCharacterLine("■      !      ■", 17, 500);
    printCharacterSquare("■", 17, 500);

    clock_t SJTend;
    SJTend = clock();

    printf("\n%d안낭하세요 \n", (int)(SJTend - SJTstart));

    return 0;
}
