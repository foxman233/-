#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

# ifndef __game_H__
# define __game_H__

constexpr auto ROW = 3;
constexpr auto COL = 3;

void Initboard(char Board[ROW][COL], int row, int col);
void Display(char Board[ROW][COL], int row, int col);
void player(char board[ROW][COL], int row, int col);
void computer(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);


//'q'��ƽ��
//'c'������Ϸ
//'*'���Ӯ
//'#'����Ӯ

#endif
