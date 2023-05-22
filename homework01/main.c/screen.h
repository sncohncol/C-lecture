#ifndef SCREEN_H
#define SCREEN_H

int clearBuffer(char* screenBuf, int width, int height);
int writeStringToBuffer(const char* string, char* screenBuf, int width, int x, int y);
int setTitleToScreenBuffer(char* screenBuf, int width, int height);
int writeStringToBuffer(const char* string, char* screenBuf, int width, int x, int y);

#endif
