#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9   //打印的表格需要9*9
#define COL 9
#define ROWS ROW+2   //但是实际判断有没有雷，边框需要越界，所以+2
#define COLS COL+2

void menu() {
    printf("*********************\n");
    printf("*******请选择********\n");
    printf("*******1,play********\n");
    printf("*******0,exit********\n");
    printf("*********************\n");
    printf("*********************\n");
}


//初始化表格
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows; ++j) {
            board[i][j] = set;
        }
    }
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
    printf("-------扫雷-------\n");
    for (int j = 0; j <= ROW; ++j) {   //打印列
        printf("%d ", j);
    }printf("\n");

    for (int i = 1; i <= ROW; ++i) {
        printf("%d ", i);  //打印行
        for (int j = 1; j <= COL; ++j) {
            printf("%c ", board[i][j]);

        }
        printf("\n");
    }
    printf("-------扫雷-------\n");
}

//布置雷
void setmine(char board[ROWS][COLS], int row, int col)
{
    //布置10个雷
    int count = 10;
    while (count)
    {
        int x = rand() % ROW + 1; int y = rand() % COL + 1;  //%模9再加1，使得随机数范围在1到9
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}


//检测周围有几个雷
int getmine_count(char mine[ROWS][COLS], int x, int y)
{
    return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}


//排查雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    //1，输入排查的坐标
    //2，检查坐标是不是雷，是则炸死，不是就统计周围有几个雷到show数组中，游戏继续
    int x, y;
    printf("请输入要排查的坐标\n");
    int win = 0;
    while (win<(ROW*COL-10))
    {
        scanf("%d %d", &x, &y);
        //判断坐标合法性
        if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
        {
            if (mine[x][y] == '1')
            {
                printf("$$$$$$$$$$$$$$$$\n");
                printf("$$$$$$$$$$$$$$$$\n");
                printf("很遗憾，你被炸死了\n");
                printf("$$$$$$$$$$$$$$$$\n");
                printf("$$$$$$$$$$$$$$$$\n");
                displayboard(mine, row, col);   //打印一下雷的位置
                break;
            }

            //不是雷，统计x,y坐标周围有几个雷
            else {
                int count = getmine_count(mine, x, y);
                show[x][y] = count + '0';
                displayboard(show, row, col);  //显示排查后雷的信息
                win++;
            }


        }
        else
            printf("坐标不合法，请重新输入\n");
    }
    if (win == ROW * COL - 10) {
        printf("#####$$$$$$$$$$$$#####\n");
        printf("#####$$$$$$$$$$$$#####\n");
        printf("恭喜你，终于排完雷了\n");
        printf("#####$$$$$$$$$$$$#####\n");
        printf("#####$$$$$$$$$$$$#####\n\n\n");
        printf("本局雷的位置\n\n");
        displayboard(mine, ROW, COL);
    }
}

    void game()
    {
        srand((unsigned int)time(NULL));
        char mine[ROWS][COLS] = { 0 };  //储存雷的表格
        char show[ROWS][COLS] = { 0 };  //排除雷的表格

        //格式化表格
        initboard(mine, ROWS, COLS, '0');//格式化为0
        initboard(show, ROWS, COLS, '*');//格式化为*

        //打印表格
    
        displayboard(show, ROW, COL);


        //布置雷
        setmine(mine, ROW, COL);
      // displayboard(mine, ROW, COL);
        //排查雷
        findmine(mine, show, ROW, COL);
    }


    int main()
    {
        int input = 0;
        do {
            menu();
            scanf("%d", &input);
            switch (input) {
            case 1: {
                printf("开始游戏\n");
                game();
                break;
            }
            case 0: {printf("退出游戏\n");
                break; }
            default: {printf("选择错误，请重新选择\n");
                break; }

            }


        } while (input);

        return 0;
    }