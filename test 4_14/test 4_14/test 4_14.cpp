
#include"game.h"



void muns()
{
	printf("*********************\n");
	printf("***1.play  0.exit****\n");
	printf("*********************\n");
}



void game()
{
	char ret;
	//定义棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Display(board, ROW, COL);
	//下棋
	//玩家下
	while (1)
	{
		player(board, ROW, COL);
		Display(board, ROW, COL);
		 ret = iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下
		computer(board, ROW, COL);
		Display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
}


void test()
{
	srand((unsigned int)time(NULL));
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
