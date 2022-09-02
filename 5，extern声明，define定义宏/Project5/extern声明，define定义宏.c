#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

           //extern声明外部符号
extern g_vallll;
extern g_val;

//
//
//int main()
//{
//    printf("%d\n", g_vallll);
//   // printf("%d\n", g_val);这个就用不了，因为被static限制
//
//
//
//
//
//
//    return 0;
//}


//extern int add(int x, int y);    //声明函数
//int main()
//{
//    int a = 333;
//    int b = 999;
//    int sum = add(a, b);
//    printf("%d\n", sum);
//    printf("%d\n", 4*sum);   //4*表示4倍乘add整体
//
//
//
//    return 0;
//}





//     //define定义宏
//#define     ADD(x,y) x+y   //这种定义不会直接整体概括
//int main()
//{
//    printf("%d\n", ADD(2, 4));   //输出是2+4=6
//    printf("%d\n", 4*ADD(2, 4));      //输出是4*2+4=12，而不是4*6=24，不会把ADD当一个整体
//
//
//
//    return 0;
//}

//用define定义函数且得整体方法
#define ADD(x,y) ((x)+(y))    //定义时都用括号括起来
int main()
{
    printf("%d\n", ADD(3, 5));   //输出为3+5=8
    printf("%d\n", 4*ADD(3, 5));    //输出为4*8=32




    return 0;
}




















































































































