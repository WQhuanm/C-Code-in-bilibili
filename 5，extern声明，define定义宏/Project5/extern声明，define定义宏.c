#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

           //extern�����ⲿ����
extern g_vallll;
extern g_val;

//
//
//int main()
//{
//    printf("%d\n", g_vallll);
//   // printf("%d\n", g_val);������ò��ˣ���Ϊ��static����
//
//
//
//
//
//
//    return 0;
//}


//extern int add(int x, int y);    //��������
//int main()
//{
//    int a = 333;
//    int b = 999;
//    int sum = add(a, b);
//    printf("%d\n", sum);
//    printf("%d\n", 4*sum);   //4*��ʾ4����add����
//
//
//
//    return 0;
//}





//     //define�����
//#define     ADD(x,y) x+y   //���ֶ��岻��ֱ���������
//int main()
//{
//    printf("%d\n", ADD(2, 4));   //�����2+4=6
//    printf("%d\n", 4*ADD(2, 4));      //�����4*2+4=12��������4*6=24�������ADD��һ������
//
//
//
//    return 0;
//}

//��define���庯���ҵ����巽��
#define ADD(x,y) ((x)+(y))    //����ʱ��������������
int main()
{
    printf("%d\n", ADD(3, 5));   //���Ϊ3+5=8
    printf("%d\n", 4*ADD(3, 5));    //���Ϊ4*8=32




    return 0;
}




















































































































