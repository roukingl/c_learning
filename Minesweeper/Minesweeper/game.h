#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MAX_MINE 10

//初始化
void Initboard(char board[ROWS][COLS], int rows, int cols, char n);

//打印
void DelayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void LayoutBoard(char board[ROWS][COLS], int row, int col);

//排查雷
void CheckBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//展开一片没有雷的地方
void UpShow(char mine[ROWS][COLS], char[ROWS][COLS], int x, int y, int* win);