#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
                        //�õݹ������ַ��� ,������ʹ�ÿ⺯��
int my_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')             //*str��ʾ�����Ӧ�ĵ�һ���ַ���str���ʾ���飬str++�ǵ�ַ�����ӣ�*str++���ַ�������
    {
        count++;
        str++;
    }
    return count;
}

void swap(char* str)              //���»�С��ÿ�εݹ飬�Ƚ������ߣ��м䲻��
{                                            //�ݹ鲻������ǰ����ʹ��left��right�ˣ���Ϊ�������������½��룬��������ã�����Ӧ��ÿ�εݹ�������鳤�ȣ���֤�´εݹ���㳤�ȼ��٣�ʹ�����ı����ı�
    char left = *str;   //��ʾ�õ�ַ���ַ�������ÿ�εݹ飬���ǿ���ַ��ȡ�ַ���������һֱ�ǵ�һ���ַ�                             //Ϊ�˼��٣��Ͳ�����ֱ��ÿ�������໥������Ӧ��ǰ����ˣ������ȳ�Ϊ\0ʹ���ȼ��٣�����˼�����ȱ�ǰ�棬�����\0�����м�ȫ�������꣬���һ���Ű�\0�Ļ�����ÿ�εݹ鶼�����˼��
    int x = my_strlen(str);
    *str = *(str + x - 1); //������ʹ�ÿ⺯�������Լ����strlen    
    *(str + x - 1) = '\0';                 //*str�ȼ���str[left]           *(str+ my_strlen(str) - 1)�ȼ���str[right]
   
    if(my_strlen(str+1)> 1)           //�жϼ��������´εݹ�����鳤��
    {
        swap(str + 1);

    }
    *(str +x - 1) = left;

}

int main()
{
    char arr[10] = "abcdef";
    swap(arr);
    printf("%s\n", arr);


    return 0;
}
