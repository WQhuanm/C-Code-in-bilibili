#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//
//        //如：建立一个求max的函数
//get_max(int x, int y)     //左是函数名字，括号内是（参量及其类型）
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//
//}
//
//  //函数的调用
//int main()
//{
//    int a, b;
//   int a= get_max(a, b);
//   printf("%d", a);
//   return 0;
//}


//  //使用void来定义函数，无需返回（return），没有void则需要
//
//
//// //错误代码：试图通过函数来改变变量的值，函数内部要改变外部变量必须用地址，否则无影响
////void swap(int x, int y)   //定义一个交换函数来交换（改变）变量a，b的值
////{
////	int z;
////	z = x;
////	x = y; y = z;
////	
////}
////
////int main()
////{
////	int a=2, b=4;
////	swap(a, b);
////	printf("%d %d", a, b);         //结果输出a，b并没有改变，因为函数内部只是x与y在转化，与a，b量的改变无关（必须用地址----用指针）
////
////	return 0;
////}
//
//
//       //改正
//void swap(int* px, int*py)     
//{
//    int z = 0;
//    z = *px;
//    *px = *py;
//    *py = z;
//}
//int main() 
//{
//	int a=2, b=4;
//	swap(&a, &b);   //进入函数内部的是地址，所以交换的是地址，所以输出出来就可以交换
//	printf("%d %d", a, b);        
//
//	return 0;
//}





















































