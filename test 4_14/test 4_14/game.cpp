#include"game.h"

void Initboard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void Display(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");

			}
			printf("\n");
		}


		/*printf(" %c | %c | %c \n", Board[i][0], Board[i][1], Board[i][2]);
		if(i < row-1)
		printf("---|---|---\n");*/
	}

}
void player(char board[ROW][COL], int row, int col)
{
	int i = 0;//行
	int n = 0;//列
	printf("玩家下:>\n");
	while (1)
	{
		printf("请输入要下的坐标:>\n");
		scanf_s("%d%d", &i, &n);
		if (i >= 1 && i <= row && n >= 1 && n <= col)
		{
			if (' ' == board[i - 1][n - 1])
			{
				board[i - 1][n - 1] = '*';
				break;
			}

			else
			{
				printf("该坐标已占用，请重新输入\n");
			
			}
		}
		else
			printf("该坐标不合法，请重新输入\n");
	}
}

void computer(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	printf("电脑下\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			break;
		}
	}

}

char iswin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][1] != ' ')
		return board[x][1];
	}
	for (y = 0; y < col; y++)
	{
		if (board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[0][y] != ' ')
		return board[0][y];
	}
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')||(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' '))
	return board[1][1]; 
	int sum = 1;
	for(x = 0;x < row;x++)
	{
		for (y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
				return 'c';
		}
	}
	if (sum)
		return 'q';
}