#include <stdio.h>
#include <stdlib.h>
#include "screen.h"

int main() {
  
    char screenBuf[35 * 12 + 1];
    int width = 34;
    int height = 12;
    int isGamePlaying = 1;

    char input[10];

    while (isGamePlaying)
    {
        clearBuffer(screenBuf, width, height);

        setTitleToScreenBuffer(screenBuf, width, height); 

        system("cls");
        printf("%s\ninput>", screenBuf);
        scanf("%s", input);

        if (input[0] == 'q') 
           isGamePlaying = 0; 
    }

    return 0;
}