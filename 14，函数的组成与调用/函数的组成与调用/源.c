#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

        //�磺����һ����max�ĺ���
get_max(int x, int y)     //���Ǻ������֣��������ǣ������������ͣ�
{
    if (x > y)
        return x;
    else
        return y;

}

  //�����ĵ���
int main()
{
    int a, b;
   int a= get_max(a, b);
   printf("%d", a);
   return 0;
}











