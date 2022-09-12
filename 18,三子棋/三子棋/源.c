#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include"game.h"   //自己定义的头文件用双引号，这样就可以使用

void game()   //编写游戏主体逻辑
{
	char board[ROW][COL];   //用于储存数据
	init_board(board, ROW, COL);    //每次进入游戏应该初始化棋盘（清空棋盘）
	printf_board(board,ROW,COL);     //打印棋盘

	char ret =0; //判断游戏状态

	while (1)
	{
		PLayermove(board,ROW,COL);   //玩家下棋
		printf_board(board, ROW, COL);    //每次下完棋，要重新打印一次棋盘
		ret = whowins(board, ROW, COL);           //通过whowins的返回的字符，来判断游戏状态    //每有人下一步棋，判断一次
		if (ret != 'C')
			break;//!=C即游戏结束，那么break退出循环
		PCmove(board, ROW, COL);
		printf_board(board, ROW, COL);   //电脑下完，再打印一次棋盘
		ret=whowins(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else
		printf("很遗憾，平局\n");
	printf("游戏战绩图:\n");
	printf_board(board, ROW, COL);   //最后再打印一次战果
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));          //电脑产生的随机数表只需要一个就够用，所以随机数产生放在主函数    //(unsigned int)产生的随机数都是正数     
	do                                //多部分代码，写一部分就测试一部分，避免后面改得要死
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("开始游戏《《||\n");
			game();    //游戏进行函数要放在选择开始的选项中
			break;
		case 0:printf("退出游戏》》||\n");
			break;
		default:
			printf("选择错误，请重新选择《》||\n");
			break;
		}
	} while (input);    //当input不为0，就是真，执行while，当input为0，为假，不执行while，退出
	

	return 0;
}










































