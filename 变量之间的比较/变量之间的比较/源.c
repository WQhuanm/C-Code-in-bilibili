#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//比较
for (a = 1; a <= C; a++)
{
	scanf("%d", &arr[a]);  //输入分数   
	if (arr[a] >= max)
		max = arr[a];
	else if (arr[a] <= min)
		min = arr[a];
	sum = arr[a] + sum;

}

   //比最小，min的初始化应该最大，保证第一个比较的数觉得比他小，否则程序无法运行，可以min=2e9(即使2*10的9次方）或者2的31次方-1，int可以存储的最大值
  //同理，max取负值最小，-2e9或者-2^31   (不用-1）