#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
             //指针类型的意义
//          //1，决定了指针解引用的权限（访问）的有多大
//int main() {
//    int a = 0x11223344;     char b = 0x55667788; //16进制数字，因为内存是16进制的
//    int* pa = &a; char* pb = &b;   //int类型一次可以访问4个字节，11223344是4个字节，所以pa=0可以把他们全部变为0
//    *pa = 0; *pb = 0;           //char型一次只能访问一个字节，所以最后只修改88变为00，其余无变化
//
//}


           //2，指针类型决定了指针一步走多远（步长）
int main() {
    int arr1[10] = { 0 }; char arr2[10] = { 0 };
    int* p = arr1;
    char* pc = arr2;
    printf("%p\n", p);
    printf("%p\n", p+1);    //int类型 一次访问4个字节，所以地址加一一次也是加4个字节
    printf("%p\n", pc);
    printf("%p\n", pc+1);   //char则访问一个字节，所以一次加一个字节

}