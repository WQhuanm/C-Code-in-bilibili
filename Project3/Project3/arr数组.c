#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

                 //数组是用下标来访问，从0开始，如前10个数就是0-9
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //定义arr为10个数
	int a = 0;
	while (a < 10)
	{
		printf("%d\n", arr[a]);
		a++;
	}




	return 0;
}




