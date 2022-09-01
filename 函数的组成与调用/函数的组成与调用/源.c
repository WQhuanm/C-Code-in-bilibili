#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

        //如：建立一个求max的函数
get_max(int x, int y)     //左是函数名字，括号内是（参量及其类型）
{
    if (x > y)
        return x;
    else
        return y;

}

  //函数的调用
int main()
{
    int a, b;
   int a= get_max(a, b);
   printf("%d", a);
   return 0;
}











