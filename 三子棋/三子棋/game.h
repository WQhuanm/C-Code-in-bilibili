#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>           //��ͷ�ļ���������Щͷ�ļ��������ļ��Ͳ���Ҫ��������Щͷ�ļ���
#include<string.h>
#include<stdlib.h>  //�����������Ҫ��ͷ�ļ�
#include<time.h>   //time������Ҫ��ͷ�ļ�



   //������Ϸͷ�ļ��������Ժ��޸Ĳ���
#define ROW 3               //���϶���
#define COL 3              //�����������壬���Զ���Ϊ3�������������Ϊ5���壬������Ķ����Ϊ5�ͺ��ˣ��Ͳ���ר��ȥԴ�ļ�������,��ϰʱ������Ч����֪��


void menu();//����������ͷ�ļ�����������ֱ������ͷ�ļ��Ͱ��������ˣ�Դ�ļ��Ͳ�������

void init_board(char board[ROW][COL],int row,int col);     //����������̵ĺ���      //������������˵����ʹ�����ý��������鲻��ֻ����Ԫ��
                    

void printf_board(char board[ROW][COL], int row, int col);          //������ӡ���̵ĺ���

void PLayermove(char board[ROW][COL], int row, int col);        //����������庯��

void PCmove(char board[ROW][COL], int row, int col);    //������������ĺ���

char whowins(char board[ROW][COL], int row, int col);   //������Ϸ״̬�ĺ���

int full(char board[ROW][COL], int row, int col);  //�����ж�ƽ���ĺ���
