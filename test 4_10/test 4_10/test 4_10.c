#include "kepp.h"


void muns()
{
	printf("*********************\n");
	printf("***1.play  0.exit****\n");
	printf("*********************\n");
}



void game()
{
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
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