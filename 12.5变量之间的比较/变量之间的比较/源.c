#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//�Ƚ�
for (a = 1; a <= C; a++)
{
	scanf("%d", &arr[a]);  //�������   
	if (arr[a] >= max)
		max = arr[a];
	else if (arr[a] <= min)
		min = arr[a];
	sum = arr[a] + sum;

}

   //����С��min�ĳ�ʼ��Ӧ����󣬱�֤��һ���Ƚϵ������ñ���С����������޷����У�����min=2e9(��ʹ2*10��9�η�������2��31�η�-1��int���Դ洢�����ֵ
  //ͬ��maxȡ��ֵ��С��-2e9����-2^31   (����-1��