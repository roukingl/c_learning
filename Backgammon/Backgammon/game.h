#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3//��
#define COL 3//��

//��ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char DecideBoard(char board[ROW][COL], int row, int col);