#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

int main()
{                   //������arr��ʾ��������
	int arr[10] = { 0 };  


	printf("%p\n", &arr[0]);   //�������ĵ�ַ����Ԫ�صĵ�ַ
	printf("%p\n\n\n", arr);                //�������߽����ͬ


	printf("%p\n", &arr);         //&arrȡ������������ĵ�ַ������Ԫ�ص�ַ��ͬ������&arr+1ȡ������һ������ĵ�ַ����������һ�����鳤10*4=40��
	printf("%p\n\n\n", &arr+1);         //�������߲��40

	printf("%p\n", arr);            //arr+1ȡ����ͬһ���������һ��Ԫ�صĵ�ַ���������߲��4
	printf("%p\n\n\n", arr+1);




	return 0;
}



























