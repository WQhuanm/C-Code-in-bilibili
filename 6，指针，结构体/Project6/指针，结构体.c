#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));   //int����ռ4���ֽڣ����Է����a4���ֽڵ��ڴ�
//	printf("%p\n",&a);    //&��ȡ��ַ���ţ������ſ���ȡ��ַ
//	int* pa = &a;    //pa��������ŵ�ַ�ģ�����ָ�����,��*���������
//	char b = 'e';
//	char* pb = &b;
//	*pa = 666;
//	printf("%d\n", a);
//	printf("%d\n", sizeof(int*));    //ָ���ֽڴ�С��ԭ������ͬ
//
//
//
//
//	return 0;
//}



    //�ṹ����Դ���������
   //�紴��һ�������䣬�ɼ���ѧ������
struct stu
{
    char name[45];
    int age;
    double score;



};


    //����һ������۸���ŵ��������
struct book
{
    char name[30];    //������Ϊbook����ṹ��ĳ�Ա����
    int price;
    char id[30];
};

  //ʹ�ô���������
int main()
{
    struct stu a ={ "����", 20, 97.5 };  //aָ���ṹ�壩ѧ��a
    printf("1:%s age=%d score=%lf\n", a.name, a.age, a.score);                  //%s���ڴ�ӡ����   %lf���ڴ�ӡdouble��С��      xxx.yyy     xxx�ǽṹ�������yyy�ǽṹ��ĳ�Ա����
    struct stu* pa = &a;
    printf("2:%s age=%d score=%lf\n", (*pa).name, (*pa).age, (*pa).score);      //ʹ��ָ��Ҳ���Դ�ӡ
    printf("3:%s age=%d score=%lf\n0", pa->name, pa->age, pa->score);             //ʹ��->Ҳ��һ�ֵȼ�д��
    return 0;
}













































