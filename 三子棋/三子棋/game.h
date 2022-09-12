#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>           //在头文件引用了这些头文件，其他文件就不需要再引用这些头文件了
#include<string.h>
#include<stdlib.h>  //产生随机数需要的头文件
#include<time.h>   //time函数需要的头文件



   //创造游戏头文件，便于以后修改参量
#define ROW 3               //符合定义
#define COL 3              //现在做三子棋，所以定义为3，后期若是想改为5子棋，把这里的定义改为5就好了，就不用专门去源文件慢慢改,复习时，试试效果便知道


void menu();//声明函数在头文件声明，后面直接引用头文件就包含声明了，源文件就不用声明

void init_board(char board[ROW][COL],int row,int col);     //声明清空棋盘的函数      //这里数组行列说明，使得引用进来的数组不会只有首元素
                    

void printf_board(char board[ROW][COL], int row, int col);          //声明打印棋盘的函数

void PLayermove(char board[ROW][COL], int row, int col);        //声明玩家下棋函数

void PCmove(char board[ROW][COL], int row, int col);    //声明电脑下棋的函数

char whowins(char board[ROW][COL], int row, int col);   //声明游戏状态的函数

int full(char board[ROW][COL], int row, int col);  //声明判断平均的函数
