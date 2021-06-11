#include "kepp.h"


void muns()
{
	printf("*********************\n");
	printf("***1.play  0.exit****\n");
	printf("*********************\n");
}



void game()
{
	//定义棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
}


void test()
{
	int p = 0;
	do
	{
		muns();
		scanf_s("%d", &p);
		switch (p)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n\n");
			break;
		default:
		{
			printf("选择错误，请重新选择\n\n");
			break;
		}
		}
	} while (p);
}

int main()
{
	test();
	return 0;
}