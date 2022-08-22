#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
static int g_val = 2022;
int g_vallll = 2023;
   //但是，如果用static修饰g_val，那么这个全局变量只能在自己的源文件使用，无法在其他的

    //在全局范围定义函数,并在其他文件使用
int add(int x, int y)
{
    return x + y;
}





















