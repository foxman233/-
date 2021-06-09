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
			printf(" %c ",Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0;j < col;j++)
			{
				printf("---");
				if(j < col-1)
				printf("|");
				
			}
			printf("\n");
		}
		
		
		/*printf(" %c | %c | %c \n", Board[i][0], Board[i][1], Board[i][2]);
		if(i < row-1)
		printf("---|---|---\n");*/
	}

}