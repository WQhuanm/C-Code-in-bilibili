#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{                   //数组名arr表示整个数组
	int arr[10] = { 0 };  


	printf("%p\n", &arr[0]);   //数组名的地址是首元素的地址
	printf("%p\n\n\n", arr);                //所以俩者结果相同


	printf("%p\n", &arr);         //&arr取的是整个数组的地址（与首元素地址相同，所以&arr+1取的是下一个数组的地址，比如这里一个数组长10*4=40，
	printf("%p\n\n\n", &arr+1);         //所以俩者差距40

	printf("%p\n", arr);            //arr+1取的是同一个数组的下一个元素的地址，所以俩者差距4
	printf("%p\n\n\n", arr+1);




	return 0;
}



























