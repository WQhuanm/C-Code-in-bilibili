#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>



//
//
//
//
//extern int d;  //用extern即可以使用其他同一源文件的不同文件如（test1中）的全局变量
//int main()
//{
//	printf("5=%d\n", d);
//
//
//
//	return 0;
//}






//
//int main()
//{
//	//int num = 10;
//	//num = 20;      //此时num为变量，输出为20
// // //当用const修饰int时，num为常变量，但本质还是变量，只是具有常量性质，常量是如2，，，，，，3.14等等不变的具体量
//	//
//
//	const int num = 10;
//	printf("num=%d\n", num); 
//
//
//
//	return 0;
//}

//
////define是定义的意思
//#define MAX 666    //意思是定义MAX为666，这样属于一种常量
//
//int main()
//{
//	int n = MAX;
//	printf("n=%d\n", n);
//
//
//
//
//	return 0;
//}







//////枚举常量：可以一一列举，从0开始
//enum SEX
//{
//	MALE,                            //默认顺序对应0，1，2，依次排列，但若写MALE=3,则会从3，4，5开始排序
//	FEMALE,
//	SECRET,
//	                                        //此为枚举列举常量的格式（有大括号)
//
//};
//
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}




//
////字符串的结尾是\0,但是不算入字符串长度中
////如用"abc";,则默认省略\0,但是若是用分开表示，如{'a','b','c'};    则不会默认省略\0,需要自己补充为{'a','b','c','\0'};否则没有\0这个结束标志，会出现乱码而不结束
//
//
////strlen()用于求字符串长度（全称是string length)    使用该函数，需要写#include<string.h>
//
//int main()
//{
//	int a = strlen("abcdefg");
//	printf("%d\n", a);
//
//	return 0;
//}




















