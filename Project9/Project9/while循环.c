#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;                  //whileѭ���У�break����������ֹѭ��
//		printf("%d ", i);
//		
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	while (a <= 20)
//	{
// 		if (13 == a)
//			continue;                //whileѭ���У�continue��������continue����Ĵ��룬�����Ǽ���
//		printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}

             //EOF����end of file,���ļ�������־
              //  getchar�ǻ�ȡһ���ַ���           putchar�����һ���ַ�
//int main()
//{
//    int ch = getchar();           //��˼�ǻ�ȡȻ���ӡ
//    printf("%c\n", ch);
//
//
//
//    return 0;
//}

//          //�ȼ۱���
//int main()
//{
//    int ch = getchar();             //��˼��������ch��ʾ���ַ�
//    putchar(ch);
//
//
//
//    return 0;
//}

//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)           //!=��ʾ�����ڣ���=EOF����˼�ǵ��ļ�������ʱ��ִ��while����
//    {
//        putchar(ch);
//    }
//
//                     //û��breakʱ��while������ѭ������Ҫ�ļ���������Crtl+C
//
//    return 0;
//}




      //getchar��scanf�����뺯�������֮����һ��������������������ʱ������ûس����������뺯��ͬʱ������\n�����ǻ��У�����\n�����Ż����������ᱻ��ȡ
//int main()
//{
//    char password[20] = { 0 };       //���Ͳ���int���ַ�����������char����Ҫ����int
//    printf("���������룺");
//    scanf("%s", password);         //�˴�passwordû��&ȡ��ַ������Ϊpassword��20�����������飬���Բ���
//    printf("��ȷ�����룺(Y/N)");
//    getchar();               //��Ϊ������������뱻scanf��ȡ��������\n�ڻ�����������Ҫ��ȡ�ߣ���Ȼ����ch��ȡ����\n������YҲ����N����һ������֡�ȷ��ʧ�ܡ�������getchar������������������һ���ַ���һ����\n
//    int ch = getchar();    //getchar��Ȼ�������ַ������Ƿ������������ͣ���˹��ֵ����EOF(��-1����������int
//        if ('Y'==ch)      //����һ��������=��Ϊ�����õ��ڣ�������д�������ڱ���
//        printf("ȷ�ϳɹ�\n");
//    else
//        printf("ȷ��ʧ��\n");
//                                     //scanf���ܶ�ȡ�ո񣬵�������1234561 abcdefʱ���м��пո�scanfֻ��ȡ�ո�ǰ�棬��ʱ��������ʣ�� abcdef\n����ʱһ��getchar�޷���ջ����������Բ�������while����
//
//    return 0;
//}
//
//int main()
//{
//    char password[20] = { 0 };
//    printf("����������:");
//    scanf("%s", password);
//    printf("��ȷ�����룺��Y/N)");
//
//
//    int abc = 0;
//    while ((abc = getchar()) != '\n')        //ע�⣺abc =getchar()���滹Ҫһ�������ţ�дʱ��ֻ������ߵģ���Ҫ���Ǽ��ұߵ�����  ��  ��
//    {                            //���while������ʾ����������ȡ�Ĳ���\nʱ��ִ��while��������������Ϊ�գ���ֻ�Ƕ�ȡ������ѭ������ȡ��\n�󣬲����ϣ�='\n'��������������while����
//        ;
//    }
//    int ch = getchar();
//    if ('Y' == ch)
//        printf("ȷ�ϳɹ�");
//    else
//    {
//        printf("ȷ��ʧ��");
//    }
//    return 0;
//}


//
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')         //   ����||�ǻ��ߵ���˼
//            continue;               // �ַ�0���ַ�9����Ϊint,���Կ��䰢˹��ֵ  �ַ�0��9֮��ȫΪ���֣�����Ϊ�������ţ����Ե�������ַ���0��9֮�⣬continue�������������Ϊ����ӡ�����ֻ�ܴ�ӡ����
//        putchar(ch);
//    }
//
//
//    return 0;
//}

















