#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ROW 5
#define COL 5

#define ROWS ROW+2
#define COLS COL+2

#define COUNT 5

void initboard(char board[ROWS][COLS],int rows,int cols,char s);
void displayboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col, int count);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count);
void CountMind(char mine[ROWS][COLS], char show[ROWS][COLS], int* flag, int x, int y);
void AntoSeed(char mine[ROWS][COLS], char show[ROWS][COLS], int* flag, int x, int y); 