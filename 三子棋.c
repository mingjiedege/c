#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("***********************************\n");
	printf("******** 1.play    0.exit *********\n");
	printf("***********************************\n");
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
    //	��ʼ������
	InitBoard(board, ROW, COL);
	// ��ӡ����
	DisplayBoard(board, ROW, COL);
	//����:
	while (1)
	{                                              //�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board,ROW,COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'c')                           //�ж��Ƿ����
		{
			break;
		}
	                                               //��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
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
	{
		printf("ƽ��\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
