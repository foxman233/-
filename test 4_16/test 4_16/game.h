#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>



# ifndef __game_H__
# define __game_H__

constexpr auto ROW = 10;
constexpr auto COL = 10;
void chushi(char board[ROW][COL], int row, int col);
void Disboard(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
void wanjia(char board[ROW][COL],int row,int col);
void computer(char board[ROW][COL],int row,int col);


#endif
