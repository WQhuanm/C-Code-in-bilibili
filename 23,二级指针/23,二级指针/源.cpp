#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main() {
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;    //ppa����һ������ָ�룬int*�������ͣ���Ϊ&pa����Ϊint*����*ppa˵��ppa�Ǹ�ָ��
	return 0;      //*ppa�ȼ���pa,*pa�ȼ���a������**ppa�ȼ���a
}