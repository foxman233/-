#include"game.h"
void chushi(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int n = 0;
	for (i = 0;i < row;i++)
	{
		for (n = 0;n < col;n++)
		{
			board[i][n] = ' ';
		}
	}

}
void Disboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int n = 0;
	for (i = 0; i < row; i++)
	{
		for (n = 0; n < col; n++)
		{
			printf(" %c ", board[i][n]);
			if(n < col - 1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (n = 0;n < col;n++)
			{
				printf("---");
				if (n < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}


}

char iswin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)//һ��һ�м��
	{
		for (y = 0; y <= col - 5; y++)
		{
			if (board[x][y] == board[x][y + 1] && board[x][y + 1] == board[x][y + 2] && board[x][y + 2] == board[x][y + 3] && board[x][y + 3] == board[x][y + 4] && board[x][y] != ' ')
				return board[x][y];


		}
	}
	for (y = 0; y < col; y++)//һ��һ�м��
	{
		for (x = 0; x <= row - 5; x++)
		{
			if (board[x][y] == board[x + 1][y] && board[x + 1][y] == board[x + 2][y] && board[x + 2][y] == board[x + 3][y] && board[x + 3][y] == board[x + 4][y] && board[x][y] != ' ')
				return board[x][y];
		}
	}

	for (x = 0; x <= row - 5; x++)//б����
	{
		for (y = 0; y <= col - 5; y++)
		{
			if (board[x][y + 4] == board[x + 1][y + 3] && board[x + 1][y + 3] == board[x + 2][y + 2] && board[x + 2][y + 2] == board[x + 3][y + 1] && board[x + 3][y + 1] == board[x + 4][y] && board[x + 4][y] != ' ')
			return board[x][y + 4];
		}
	}
	
	for (x = row - 5;x >= 0;x--)//��б����
	{
		for (y = 0;y <= col - 5;y++)
		{
			if (board[x][y] == board[x + 1][y + 1] && board[x + 1][y + 1] == board[x + 2][y + 2] && board[x + 2][y + 2] == board[x + 3][y + 3] && board[x + 3][y + 3] == board[x + 4][y + 4] && board[x+4][y+4] != ' ')
			return board[x][y];

		}
	}



	int i = 1;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
				return 'c';
		}
	} 
	if(i)
		return 'q';
}

void wanjia(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int n = 0;
	printf("�����:>\n");
	while(1)
	{
		printf("������Ҫ�µ�����:>\n");
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
				printf("��������ռ�ã�����������:>\n");

			}
		}
		else
		{
			printf("�����겻�Ϸ�������������:>\n");
		}
	}
}

void computer(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("������\n");
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