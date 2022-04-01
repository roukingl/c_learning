#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//��ʼ������
void ChushihuaBroad(char broad[ROWS][COLS], int rows, int cols, char tui);

//��ӡ����
void DisplayBroad(char broad[ROW][COL], int row, int col);

//������
void InitBroad(char broad[ROW][COL], int row ,int col);

//�Ų���
void PaichaBroad(char lei[ROW][COL],char show[ROW][COL], int row, int col);
