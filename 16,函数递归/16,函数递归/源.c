#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
              //�ݹ飬�����Լ��ڲ������Լ�
//    //����һ������ֵ���޷��ţ�����˳���ӡ��ÿһλ
//void print(int n)
//{
//    if (n > 9)   //����ֹ�и�λ��ʱ
//    {
//        print(n / 10);      //����һλ�������ݹ��жϣ�ÿ�εݹ飬����n��Ϊn/10��      ��1234���ٵ�1ʱ�����ٵݹ飬������һ��(��ӡ),ֱ�����������������ϴεݹ�λ�ã�����ִ�У����Ϸ���
//    }
//    printf("%d ", n % 10);   //��ӡ��λ��
//}
//int main()
//{
//    unsigned int num;    //�޷��ż�unsigned��û�������ţ�����ΧΪ����
//    scanf("%u", &num);   //unsigned���ʹ�ӡ��%u
//    print(num);  //������1234
//    return 0;
// }

//
//              //ģ��ʵ��һ����strlenһ�����ܵĺ���
//   //����һ����������ʱ����
//int my_strlen(char* str)    //char��ָ�봫���ǵ�һ���ַ��ĵ�ַ������ȫ���ַ�
//{
//    int count = 0;
//    while (*str != '\0')   //��Ϊ�ַ�����β��\0��û�����ַ��Ͳ����������������������㳤��
//    {
//        count++;  
//        str++;   //��ʾ�ַ�����һλ
//    }
//    return count;   //�����ַ�����
//}
//int main()
//{
//    char arr[] = "hellow world";
//    printf("%d\n", my_strlen(arr));   //��ӡ�˺����ķ���488ֵ
//}
//       //����������ʱ��������������ʹ��count�������������õݹ��˼��
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//        return 1 + my_strlen(str + 1);      //�ݹ飬��һ���ַ����ͼ�һ��û��Ϊ0     str+1,��ʾ������һ���ַ��ĵ�ַ��������ַ���1
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "bit";
//    printf("%d\n", my_strlen(arr));
//    return 0;
//}

//           //�ݹ� ��n�Ľײ�  (������ѭ����⣨������
//
//int fac(int n)
//{
//    if (n <= 1)
//        return 1;      //n<=1ʱ�ײ㶼Ϊ1
//    else
//        return n * fac(n - 1);     //ֻҪn��Ϊ1���ͻ��Լ�*��һ��-1���Լ�����n*(n-1)),ֱ������1
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d\n", ret);
//    return 0;
//}


             //���n��쳲�������   fac(n)=fac(n-1)+fac(n-2)    ,����fac��n)�ǵ�n����fac(n-1)���ǵ�n-1�� ......���ø���ѧ��ʽ����
//   //����һ���ݹ�
//int count = 0;
//int fac(int n)
//{
//    if (n == 3)
//        count++;
//    if (n <= 2)
//        return 1;
//    else
//        return fac(n - 1) + fac(n - 2);
//
//}
//int main()            //ȱ�㣬������ֵԽ����Խ������Ϊ�ظ�����̫���,������50����50�����������
//{
//    int n;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d\n", ret);
//    printf("%d", count);
//
//}


      //������������  ��ͷ�㵽β��û���ظ������ټ���
int fac(int n)
{
    int a = 1,b=1;         //����aΪn-2,bΪn-1,cΪn�������ʼa��bΪ1
    int c = 0;
    if (n <= 2)
        return 1;
    else
        while (n > 2)
        {
            c = a + b;     //ÿ��ѭ����a,b,c��ǰ�ƶ����Ӷ���������c��ֵ�����շ���c
            a = b;
            b = c;
            n--;     //ÿ��ѭ����n��ȥ1����n=2�ƶ�
        }
    return c;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ret = fac(n);
    printf("%d\n", ret);
}




















