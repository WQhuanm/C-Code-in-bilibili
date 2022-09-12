#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

                //这里用于定义游戏主体的函数，防止主体文件内容太冗杂
#include "game.h"

 //游戏菜单
void menu()   
{
	printf(
		"************************\n"
		"*********请选择*********\n"
		"*********1,play*********\n"
		"*********0,exit*********\n"
		"************************\n"
		"************************\n");
}

//清空（数组全部改为空格）棋盘的函数
void init_board(char board[ROW][COL], int row, int col)         
{
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            board[i][j] = ' ';
}

   //打印棋盘的函数
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


//玩家下棋函数
void PLayermove(char board[ROW][COL], int row, int col)  
{
	int x, y;
	printf("玩家下棋》》：\n");
	printf("请输入棋子坐标(x,y)(x为纵轴，y为横轴）》》:");
	
	while (1)   //一直为真，死循环，只有break才可以结束
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')   //只有这个位置没有被占用（即字符仍然为空格），才可以在这个位置下棋    //因为玩家输入左边从1开始，而数组从0开始，所以x-1,y-1
			{
				board[x - 1][y - 1] = '*';
				break;   //输入正确坐标才跳出死循环
			}
			else
				printf("坐标已经被占用，请重新输入\n");

		}

		else
			printf("坐标非法，请重新输入\n");

	}

}


    //电脑下棋的函数
void PCmove(char board[ROW][COL], int row, int col)
{
	
	printf("电脑下棋》》：\n");             //随机数坐标产生后，电脑接下来的行为与玩家几乎一模一样,只不过不用打印提示词了，也不用scanf去输入了

	while (1)   //一直为真，死循环，只有break才可以结束
	{     
		int x = rand() % row;   //row而不是写ROW，因为函数定义row才是形参，他继承了主文件的ROW，所以这里row为3    //rand() % row，...%3，产生的数一定小于3（大于0，因为unsigned)(我们需要的坐标就应该小于3
		int y = rand() % col;//就像输入要写在循环里面一样，电脑也要，他的随机数产生相当于输入scanf
		
		if (board[x][y] == ' ')  //这里就不用x-1或者y-1了，因为电脑产生的数是0-2，不是1-3，但是这里if判断句不用再限定x,y的范围了，因为产生的x，y一定在范围内
		{
			board[x][y] = '#';   //电脑下棋符号应该与玩家不同
			break;   //输入正确坐标才跳出死循环
		}
	}

}

   //判断是否平局的函数
int full(char board[ROW][COL], int row, int col)  //平均返回1，不则返回0
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;  //棋盘没满
		}
	}
	return 1;  //棋盘满了

}
char whowins(char board[ROW][COL], int row, int col)   //游戏的状态，返回类型为字符，所以用char定义，当玩家获胜，返回*；电脑获胜，返回#；平局，返回Q；游戏继续，返回C
{              
	//玩家或者电脑获胜
	for (int i = 0; i < row; i++)  //判断三行
	{
		if (board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][0] != ' ')   //三个字符相等，且还要都不为空格才suan赢           //一个循环解决三行的判断
			return board[i][0];  //这一句就包括了玩家或者电脑获胜的判断，因为返回数组的字符，字符是谁的（*或者#），谁就获胜
	}
	for (int j = 0; j < col; j++)//判断三列
	{
		if ((board[0][j] == board[1][j] && board[1][j] == board[2][j]) && board[1][j] != ' ')         //大小关系式不能连续，这里不可以连写俩等于，否则报错，只能写一条，&&一条
			return board[0][j];

	}
	   //判断对角线
	 if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) && board[2][2] != ' ')
		return board[0][0];
	 if ((board[0][2] == board[1][1]&& board[1][1] == board[2][0]) && board[2][0] != ' ')
		return board[2][0];


	 //判断平局（if不了，再写一个函数判断）
	 int emp = full(board, row, col);   //board不用加[][],此时board代表整个，如果加[][]，则只代表单个字符（此时是使用函数，不是定义函数）
	 if (emp == 1)
		 return 'Q';
	 else
		 return 'C';
	 

}
