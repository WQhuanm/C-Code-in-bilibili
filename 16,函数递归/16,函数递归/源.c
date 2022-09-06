#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
              //递归，函数自己内部调用自己
    //输入一个整型值（无符号），按顺序打印其每一位
void print(int n)
{
    if (n > 9)   //即不止有个位数时
    {
        print(n / 10);      //减少一位，继续递归判断（每次递归，变量n变为n/10）      当1234减少到1时，不再递归，进入下一步(打印),直到函数结束，返回上次递归位置，继续执行，不断返回
    }
    printf("%d ", n % 10);   //打印个位数
}
int main()
{
    unsigned int num;    //无符号即unsigned，没有正负号，即范围为整数
    scanf("%u", &num);   //unsigned类型打印用%u
    print(num);  //如输入1234
    return 0;
 }




















