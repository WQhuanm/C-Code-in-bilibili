#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

                //�������ڶ�����Ϸ����ĺ�������ֹ�����ļ�����̫����
#include "game.h"

 //��Ϸ�˵�
void menu()   
{
	printf(
		"************************\n"
		"*********��ѡ��*********\n"
		"*********1,play*********\n"
		"*********0,exit*********\n"
		"************************\n"
		"************************\n");
}

//��գ�����ȫ����Ϊ�ո����̵ĺ���
void init_board(char board[ROW][COL], int row, int col)         
{
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            board[i][j] = ' ';
}

   //��ӡ���̵ĺ���
void printf_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (j != COL - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c \n", board[i][j]);
		}
		for (int k = 0; k < COL; k++)
		{
			if (k != COL - 1)
				printf("___|");
			else
				printf("___\n");

		}

	}
}


//������庯��
void PLayermove(char board[ROW][COL], int row, int col)  
{
	int x, y;
	printf("������塷����\n");
	printf("��������������(x,y)(xΪ���ᣬyΪ���ᣩ����:");
	
	while (1)   //һֱΪ�棬��ѭ����ֻ��break�ſ��Խ���
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')   //ֻ�����λ��û�б�ռ�ã����ַ���ȻΪ�ո񣩣��ſ��������λ������    //��Ϊ���������ߴ�1��ʼ���������0��ʼ������x-1,y-1
			{
				board[x - 1][y - 1] = '*';
				break;   //������ȷ�����������ѭ��
			}
			else
				printf("�����Ѿ���ռ�ã�����������\n");

		}

		else
			printf("����Ƿ�������������\n");

	}

}


    //��������ĺ���
void PCmove(char board[ROW][COL], int row, int col)
{
	
	printf("�������塷����\n");             //�������������󣬵��Խ���������Ϊ����Ҽ���һģһ��,ֻ�������ô�ӡ��ʾ���ˣ�Ҳ����scanfȥ������

	while (1)   //һֱΪ�棬��ѭ����ֻ��break�ſ��Խ���
	{     
		int x = rand() % row;   //row������дROW����Ϊ��������row�����βΣ����̳������ļ���ROW����������rowΪ3    //rand() % row��...%3����������һ��С��3������0����Ϊunsigned)(������Ҫ�������Ӧ��С��3
		int y = rand() % col;//��������Ҫд��ѭ������һ��������ҲҪ����������������൱������scanf
		
		if (board[x][y] == ' ')  //����Ͳ���x-1����y-1�ˣ���Ϊ���Բ���������0-2������1-3����������if�жϾ䲻�����޶�x,y�ķ�Χ�ˣ���Ϊ������x��yһ���ڷ�Χ��
		{
			board[x][y] = '#';   //�����������Ӧ������Ҳ�ͬ
			break;   //������ȷ�����������ѭ��
		}
	}

}

   //�ж��Ƿ�ƽ�ֵĺ���
int full(char board[ROW][COL], int row, int col)  //ƽ������1�����򷵻�0
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;  //����û��
		}
	}
	return 1;  //��������

}
char whowins(char board[ROW][COL], int row, int col)   //��Ϸ��״̬����������Ϊ�ַ���������char���壬����һ�ʤ������*�����Ի�ʤ������#��ƽ�֣�����Q����Ϸ����������C
{              
	//��һ��ߵ��Ի�ʤ
	for (int i = 0; i < row; i++)  //�ж�����
	{
		if (board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][0] != ' ')   //�����ַ���ȣ��һ�Ҫ����Ϊ�ո��suanӮ           //һ��ѭ��������е��ж�
			return board[i][0];  //��һ��Ͱ�������һ��ߵ��Ի�ʤ���жϣ���Ϊ����������ַ����ַ���˭�ģ�*����#����˭�ͻ�ʤ
	}
	for (int j = 0; j < col; j++)//�ж�����
	{
		if ((board[0][j] == board[1][j] && board[1][j] == board[2][j]) && board[1][j] != ' ')         //��С��ϵʽ�������������ﲻ������д�����ڣ����򱨴�ֻ��дһ����&&һ��
			return board[0][j];

	}
	   //�ж϶Խ���
	 if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) && board[2][2] != ' ')
		return board[0][0];
	 if ((board[0][2] == board[1][1]&& board[1][1] == board[2][0]) && board[2][0] != ' ')
		return board[2][0];


	 //�ж�ƽ�֣�if���ˣ���дһ�������жϣ�
	 int emp = full(board, row, col);   //board���ü�[][],��ʱboard���������������[][]����ֻ�������ַ�����ʱ��ʹ�ú��������Ƕ��庯����
	 if (emp == 1)
		 return 'Q';
	 else
		 return 'C';
	 

}
