#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
   
   //goto,������ת������ѭ��,ʵ��Ӧ������������ѭ��
//    //��
//for{
//    for{
//        for{
//            goto ABC;   //�Ͳ���������break��ֱ�ӳ�ȥ�ˣ��ܵ�����ABC
//        }
//    }
//}
//ABC:


#include<stdlib.h>   //ʹ��system��Ҫ
//�ػ�����
    //shutdown -s -t 180       �� -s�����пո񣩱�ʾ���ùػ����� -t����ʾ����ʱ��ػ� �������ֱ�ʾ�������ػ�
    //shutdown -a��ʾע��/ȡ���ػ�
int main()
{   //system��������ִ��ϵͳ����
    RET: system("shutdown -s -t 90");
    printf("ע�⣬��ĵ�����90���ػ������롮����������ȡ���ػ�\n");
    char input[20] = { 0 };     //��������Ҳ���ַ�����char
    scanf("%s", &input);
    if (strcmp(input, "������") == 0)     //���ַ����Ƚ���strcmp�����õ���== 
        system("shutdown -a");
    else
        goto RET;





	return 0;
}




