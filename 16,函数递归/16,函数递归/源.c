#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
              //�ݹ飬�����Լ��ڲ������Լ�
    //����һ������ֵ���޷��ţ�����˳���ӡ��ÿһλ
void print(int n)
{
    if (n > 9)   //����ֹ�и�λ��ʱ
    {
        print(n / 10);      //����һλ�������ݹ��жϣ�ÿ�εݹ飬����n��Ϊn/10��      ��1234���ٵ�1ʱ�����ٵݹ飬������һ��(��ӡ),ֱ�����������������ϴεݹ�λ�ã�����ִ�У����Ϸ���
    }
    printf("%d ", n % 10);   //��ӡ��λ��
}
int main()
{
    unsigned int num;    //�޷��ż�unsigned��û�������ţ�����ΧΪ����
    scanf("%u", &num);   //unsigned���ʹ�ӡ��%u
    print(num);  //������1234
    return 0;
 }




















