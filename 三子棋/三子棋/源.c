#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include"game.h"   //�Լ������ͷ�ļ���˫���ţ������Ϳ���ʹ��

void game()   //��д��Ϸ�����߼�
{
	char board[ROW][COL];   //���ڴ�������
	init_board(board, ROW, COL);    //ÿ�ν�����ϷӦ�ó�ʼ�����̣�������̣�
	printf_board(board,ROW,COL);     //��ӡ����

	char ret =0; //�ж���Ϸ״̬

	while (1)
	{
		PLayermove(board,ROW,COL);   //�������
		printf_board(board, ROW, COL);    //ÿ�������壬Ҫ���´�ӡһ������
		ret = whowins(board, ROW, COL);           //ͨ��whowins�ķ��ص��ַ������ж���Ϸ״̬    //ÿ������һ���壬�ж�һ��
		if (ret != 'C')
			break;//!=C����Ϸ��������ôbreak�˳�ѭ��
		PCmove(board, ROW, COL);
		printf_board(board, ROW, COL);   //�������꣬�ٴ�ӡһ������
		ret=whowins(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else
		printf("���ź���ƽ��\n");
	printf("��Ϸս��ͼ:\n");
	printf_board(board, ROW, COL);   //����ٴ�ӡһ��ս��
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));          //���Բ������������ֻ��Ҫһ���͹��ã������������������������    //(unsigned int)�������������������     
	do                                //�ಿ�ִ��룬дһ���־Ͳ���һ���֣��������ĵ�Ҫ��
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("��ʼ��Ϸ����||\n");
			game();    //��Ϸ���к���Ҫ����ѡ��ʼ��ѡ����
			break;
		case 0:printf("�˳���Ϸ����||\n");
			break;
		default:
			printf("ѡ�����������ѡ�񡶡�||\n");
			break;
		}
	} while (input);    //��input��Ϊ0�������棬ִ��while����inputΪ0��Ϊ�٣���ִ��while���˳�
	

	return 0;
}










































