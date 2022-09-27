#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main() {
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;    //ppa就是一个二级指针，int*代表类型，因为&pa类型为int*，而*ppa说明ppa是个指针
	return 0;      //*ppa等价与pa,*pa等价与a，所以**ppa等价于a
}