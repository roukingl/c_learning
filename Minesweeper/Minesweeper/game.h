#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MAX_MINE 10

//��ʼ��
void Initboard(char board[ROWS][COLS], int rows, int cols, char n);

//��ӡ
void DelayBoard(char board[ROWS][COLS], int row, int col);

//������
void LayoutBoard(char board[ROWS][COLS], int row, int col);

//�Ų���
void CheckBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//չ��һƬû���׵ĵط�
void UpShow(char mine[ROWS][COLS], char[ROWS][COLS], int x, int y, int* win);