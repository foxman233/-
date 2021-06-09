#pragma once
#include<stdio.h>

# ifndef __game_H__
# define __game_H__

constexpr auto ROW = 3;
constexpr auto COL = 3;

void Initboard(char Board[ROW][COL], int row, int col);
void Display(char Board[ROW][COL], int row, int col);


#endif