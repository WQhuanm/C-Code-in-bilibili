#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


                           //~是按位取反符号，包括符号位的二进制全部取反
int main() {
	int a = 29;      //即00011101
	      //把a二进制第五位变为0，只需要用&11101111，这个麻烦，用取反，拿00010000取反
	a = a & ~(1 << 4);   //拿1左移4位就变成00010000，取反变成11101111,
	printf("%d\n", a);   //这样a就变为13
	return 0;
}