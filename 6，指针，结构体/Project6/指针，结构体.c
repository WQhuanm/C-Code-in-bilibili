#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));   //int类型占4个字节，所以分配给a4个字节的内存
//	printf("%p\n",&a);    //&是取地址符号，用他才可以取地址
//	int* pa = &a;    //pa是用来存放地址的，叫做指针变量,用*与符号连接
//	char b = 'e';
//	char* pb = &b;
//	*pa = 666;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));    //指针字节大小与原符号相同
//
//
//
//
//	return 0;
//}



    //结构体可以创造新类型
   //如创建一个有年龄，成绩的学生类型
struct stu
{
    char name[45];
    int age;
    double score;



};


    //创建一个有书价格，书号的书的类型
struct book
{
    char name[30];    //这三个为book这个结构体的成员变量
    int price;
    char id[30];
};

  //使用创建的类型
int main()
{
    struct stu a ={ "张三", 20, 97.5 };  //a指（结构体）学生a
    printf("1:%s age=%d score=%lf\n", a.name, a.age, a.score);                  //%s用于打印中文   %lf用于打印double的小数      xxx.yyy     xxx是结构体变量，yyy是结构体的成员变量
    struct stu* pa = &a;
    printf("2:%s age=%d score=%lf\n", (*pa).name, (*pa).age, (*pa).score);      //使用指针也可以打印
    printf("3:%s age=%d score=%lf\n0", pa->name, pa->age, pa->score);             //使用->也是一种等价写法
    return 0;
}













































