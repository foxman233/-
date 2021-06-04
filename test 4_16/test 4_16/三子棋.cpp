#include"game.h"

void mund()
{
	printf("********************\n");
	printf("***1.play  0.exse***\n");
	printf("********************\n");

}

void game()
{
	char board[ROW][COL] = { 0 };
	chushi(board, ROW, COL);
	Disboard(board, ROW, COL);
	iswin(board, ROW, COL);
	char pd;
	while (1)
	{
		wanjia(board,ROW,COL);
		Disboard(board, ROW, COL);
		pd = iswin(board, ROW, COL);
		if (pd != 'c')
			break;
		computer(board, ROW, COL);
		Disboard(board, ROW, COL);
		pd = iswin(board, ROW, COL);
		if (pd != 'c')
			break;
	}
	if (pd == '*')
	{
		printf("玩家赢！\n");
	}
	else if (pd == '#')
	{
		printf("电脑赢！\n");
	}
	else
		printf("平局！\n");
}

void youxi()
{
	int p = 0;
	do
	{
		mund();
		scanf_s("%d", &p);
		switch (p)
		{
		case 1:game();
			break;
		case 0:
			printf("退出游戏\n\n");
			break;
		default:
		{
			printf("输入错误，请重新输入\n\n");
			break;
		}
		}
	} while (p);
}

int main()
{
	youxi();

	return 0;
}