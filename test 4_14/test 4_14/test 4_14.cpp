
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
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Display(board, ROW, COL);
	//����
	//�����
	while (1)
	{
		player(board, ROW, COL);
		Display(board, ROW, COL);
		 ret = iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
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
			printf("�˳���Ϸ\n\n");
			break;
		default:
		{
			printf("ѡ�����������ѡ��\n\n");
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
