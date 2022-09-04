#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//  //嵌套调用
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));    //printf的返回值是打印的字符数，最右的printf打印43俩字符，返回2，所以中间的printf打印2（中间的printf等价于Printf("%d,2))这一个字符，所以左边的打印1这一个字符
//
//
//
//	return 0;
//}

  

//
//          //函数声明（先声明后使用，具体该函数存在与否不重要，告诉函数名，函数参数与返回类型）
//int main()
//{
//	int a = 2, b = 3;
//	int add(int, int);  //说出其函数三特征来声明，不用具体变量，写类型即可
//	printf("%d", add(a, b));
//
//	return 0;
//}
//
//int add(int x,int y)
//{
//	return x + y;
//}



           //函数声明一般用于跨文件使用函数，一般用于头文件（#include.......)
#include "hel.h"  //先引用文件help.c
int main()
{
	int a = 2, b = 3;
	int add(int, int);  //再声明说出其函数三特征来声明，不用具体变量，写类型即可
	printf("%d", add(a, b));

	return 0;
}

















