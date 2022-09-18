#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9   //��ӡ�ı����Ҫ9*9
#define COL 9
#define ROWS ROW+2   //����ʵ���ж���û���ף��߿���ҪԽ�磬����+2
#define COLS COL+2

void menu() {
    printf("*********************\n");
    printf("*******��ѡ��********\n");
    printf("*******1,play********\n");
    printf("*******0,exit********\n");
    printf("*********************\n");
    printf("*********************\n");
}


//��ʼ�����
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
    printf("-------ɨ��-------\n");
    for (int j = 0; j <= ROW; ++j) {   //��ӡ��
        printf("%d ", j);
    }printf("\n");

    for (int i = 1; i <= ROW; ++i) {
        printf("%d ", i);  //��ӡ��
        for (int j = 1; j <= COL; ++j) {
            printf("%c ", board[i][j]);

        }
        printf("\n");
    }
    printf("-------ɨ��-------\n");
}

//������
void setmine(char board[ROWS][COLS], int row, int col)
{
    //����10����
    int count = 10;
    while (count)
    {
        int x = rand() % ROW + 1; int y = rand() % COL + 1;  //%ģ9�ټ�1��ʹ���������Χ��1��9
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}


//�����Χ�м�����
int getmine_count(char mine[ROWS][COLS], int x, int y)
{
    return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}


//�Ų���
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    //1�������Ų������
    //2����������ǲ����ף�����ը�������Ǿ�ͳ����Χ�м����׵�show�����У���Ϸ����
    int x, y;
    printf("������Ҫ�Ų������\n");
    int win = 0;
    while (win<(ROW*COL-10))
    {
        scanf("%d %d", &x, &y);
        //�ж�����Ϸ���
        if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
        {
            if (mine[x][y] == '1')
            {
                printf("$$$$$$$$$$$$$$$$\n");
                printf("$$$$$$$$$$$$$$$$\n");
                printf("���ź����㱻ը����\n");
                printf("$$$$$$$$$$$$$$$$\n");
                printf("$$$$$$$$$$$$$$$$\n");
                displayboard(mine, row, col);   //��ӡһ���׵�λ��
                break;
            }

            //�����ף�ͳ��x,y������Χ�м�����
            else {
                int count = getmine_count(mine, x, y);
                show[x][y] = count + '0';
                displayboard(show, row, col);  //��ʾ�Ų���׵���Ϣ
                win++;
            }


        }
        else
            printf("���겻�Ϸ�������������\n");
    }
    if (win == ROW * COL - 10) {
        printf("#####$$$$$$$$$$$$#####\n");
        printf("#####$$$$$$$$$$$$#####\n");
        printf("��ϲ�㣬������������\n");
        printf("#####$$$$$$$$$$$$#####\n");
        printf("#####$$$$$$$$$$$$#####\n\n\n");
        printf("�����׵�λ��\n\n");
        displayboard(mine, ROW, COL);
    }
}

    void game()
    {
        srand((unsigned int)time(NULL));
        char mine[ROWS][COLS] = { 0 };  //�����׵ı��
        char show[ROWS][COLS] = { 0 };  //�ų��׵ı��

        //��ʽ�����
        initboard(mine, ROWS, COLS, '0');//��ʽ��Ϊ0
        initboard(show, ROWS, COLS, '*');//��ʽ��Ϊ*

        //��ӡ���
    
        displayboard(show, ROW, COL);


        //������
        setmine(mine, ROW, COL);
      // displayboard(mine, ROW, COL);
        //�Ų���
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
                printf("��ʼ��Ϸ\n");
                game();
                break;
            }
            case 0: {printf("�˳���Ϸ\n");
                break; }
            default: {printf("ѡ�����������ѡ��\n");
                break; }

            }


        } while (input);

        return 0;
    }