#include <stdio.h>
#include <string.h>
#include "screen.h"

int printHorizontalLine(int length) {
    int i = 0;
    while (i < length) {
        printf("■");
        i++;
    }
    printf("\n");
    printf("■\n");
    return 0;
}

int printInnerBox(char* lines[], int numLines) {
    int i = 0;
    while (i < numLines) {
        printf("■ %s", lines[i]);
        int lineLength = strlen(lines[i]) + 3;
        int j = 0;
        while (j < 35 - lineLength) {
            printf(" ");
            j++;
        }
        printf("■\n");
        printf("■\n");
        i++;
    }
    return 0;
}