#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>



//��ϰ(����n�Ľײ�)
//int main()       
//{
//	int n = 0;            //whileѭ��
//	int i = 1;
//	int tmp = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		tmp = tmp * i;
//		i++;
//	}
//	printf("%d\n", tmp);
//	return 0;
//	}

//
//int main()
//{
//    int i = 0; int n = 0; int tmp = 0;         //forѭ��         
//    scanf("%d", &n);
//    for (i = 1, tmp=1; i <= n; i++)       //ע�⣬forѭ���ĳ�ʼ����Ҫ�ں�������д�������Ӧ����������
//    {
//        tmp = tmp * i;
//    }
//    printf("%d\n", tmp);
//
//
//
//    return 0;
//}

//
//int main()
//{
//    int i = 1; int n = 0; int tmp = 1;                     //do whileѭ��
//    scanf("%d", &n);
//    do
//    {
//        tmp = tmp * i;  //Ҳ����д��tmp*=i;
//        i++;
//    }
//    while (i <= n);
//    printf("%d\n", tmp);
//
//    return 0;
//}

//
//          //����1��+2��+3��+.......+n��
//int main()
//{
//    int i = 0; int n = 0; int tmp = 0; int a = 0;       //forѭ��         
//    scanf("%d", &n);
//    for (i = 1, tmp = 1,a=0; i <= n; i++)       //ע�⣬forѭ���ĳ�ʼ����Ҫ�ں�������д�������Ӧ����������
//    {
//      
//        tmp = tmp * i;
//        a = tmp + a;
//    }
//
//    printf("%d\n", a);
//
//
//
//    return 0;
//}


//             //���������������n���˴���ϰ��1��10����7,�ö��ַ�
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);   //����������������
//    int left = 0; int right = sz - 1;   //��������0��ʼ����������Ϊ���������1��ʼ�ͱ�������ΪҪ1��ʼ���������ұߵı�������������-1
//
//    int target = 7;
//    while (left <= right)   //ֻҪ��߲������ұߣ���Ӧ��ѭ��  ,����ʱ���ոպ�Ϊtarget
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < target)   //target��ʵ��ֵ������Ӧ����arr�Ƚϣ���Ϊmid�Ǳ���ֵ
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > target)     //��else if,��Ҫдif
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//            break;  //����whileѭ������ǵ�дbreak
//        }
//
//    }
//    if (left > right)
//    {
//        printf("�Ҳ���\n");
//    }
//
//
//    return 0;
//}

          // //��һ�仰�����м俿��������
//int main()
//{
//	char arr1[] = "hellow world";
//	char arr2[] = "############";
//	int left = 0; int right = strlen(arr1) - 1;    //��strlen���������ȣ�Ȼ���һ�������һλ���±�
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		if (left < right)
//		{
//			left = left + 1; right = right - 1;     //����дleft++;right--;
//			continue;
//		}
//		if (left = right)
//		{
//			break;
//
//}
//		}
//	return 0;
//}

//#include <windows.h>   //ʹ��SleepʱҪ��
//   //�򻯰�
//int main()
//{
//	char arr1[] = "HELLOWORLD!!!!!!!!!!!!!!";
//	char arr2[] = "########################";
//	int left = 0; int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		system("cls");   //�����Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(888);   //��˼��˯��0.888�룬���ı�����ٶ�,SҪ��д
//		
//		left++; right--;
//	}
//
//
//	return 0;
//}
//

//   //��ϰ��������������
//#include<string.h>      //ʹ��strcmp�Ƚ��ַ���ʱ��Ҫ�����
//int main()
//{
//    int i = 0;
//    char password[20] = { 0 };
//    for (i = 0; i < 3; i++)
//    {
//        printf("���������룺");
//        scanf("%s", password);
//        if (strcmp(password, "123456") == 0)   //���ַ����Ƚϱ�����strcmp������password=="123456"
//        {
//            printf("����ɹ�\n");
//            break;
//        }
//        else
//        {
//            printf("�����������������\n");
//        }
//    }
//    if (3==i)
//        printf("������������˺Ŷ���/n");
//
//
//    return 0;
//}

//    //��1��100��������Ϸ
//#include<stdlib.h>  //ʹ��rand������Ҫ���
//#include<time.h>   //ʹ��time������Ҫ���
//void menu()
//    {
//    printf("***************\n");
//    printf("****1,play*****\n");
//    printf("***************\n");
//    printf("****2,exit*****\n");
//    printf("***************\n");
//    printf("***************\n");
//    }
//
//
//void game()   //��Ϸ�Ļ�����1�������������2��������
//{
//    int ret = rand() % 100 + 1;   //rand�����0-32767֮���һ������������������ǰ���������������㣨��srand��������㣬һ����ʱ������仯��Ϊ��㣩������ÿ���������һ��
//        //%100��������0��99����Ϊ�����Ҫ��1��100�����Լ�1
//    int guess = 0;
//    while (1)
//    {
//        printf("�������\n");
//        scanf("%d", &guess);
//        if (guess < ret)
//            printf("��С��\n");
//        else if (guess > ret)
//            printf("�´���\n");
//        else if (guess == ret)
//        {
//            printf("�ش���ȷ\n");
//            break;  //�¶Ծͽ�����һ��Ҫbreak����ȷ���������������break
//        }
// }
//}
//
//
//int main()
//{
//    int input = 0;
//    //time�������ͣ�����rand��Ҫunsigned int���͵ģ�����Ҫǿ��ת��,����������(ǿ��ת�������ͣ��ڱ���timeǰ��
//    srand((unsigned int)time(NULL));   //1�����srand�м䣨��Ϊ�̶���ֵ����rand���������̶����䣬2����time����ʱ������Խ�ʱ��ת��Ϊ����������� 3��nullΪ��ֵ����Ϊtimeһ��Ҫ������������˴�����
//
//      //��������main��дsrand��ȷ��ֻ����һ���������һ�����㹻��ģ�������ʱ��̫�̣����¸���ʱ���������������ؿ�ʱ����һ�ֲ��
//
//    do    //��Ϊ��������Ϸ���ж��Ƿ������������do while ����ִ�к��жϣ�
//    {
//        menu();  //�ȴ�ӡ�˵�
//        printf("��ѡ��");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:printf("��ʼ��Ϸ\n");
//            game();
//            break;
//        case 2:printf("������Ϸ\n");
//            break;
//        default:printf("�����������������\n");
//            break;
//        }
//    } while (input);  //���while�൱��û�����ƣ����Բ��Ͻ�����Ϸ
//
//    return 0;
//}

//    //�������������Լ��
//int main()
//{
//    int m=0; int n=0;
//    int max = m < n ? m:n;  //ʹ����Ŀ���������ٵ���С��һ�����������Լ��ΪС���Ǹ���������ѭ���ݼ�
//    scanf("%d %d", &m, &n);
//    while (1)   //1ʹ����ѭ��
//    {
//        if (m % max == 0 && 0 == n % max)
//            printf("%d", max);
//        break;
//        max--;
//    }
//
//
//
//
//
//
//
//    return 0;
//}


   //��ӡ1��200֮�������
//   //����һ
//int main()
//{
//    int i=0;
//    for (i = 2; i <= 200; i++)
//    {
//
//        int a = 0;
//        for (a = 2; a <i; a++)
//        {
//            if (i % a == 0)    //��i>aʱ���������������˵������������break����forѭ����ʹi���Ӽ����ж�
//            {
//
//                break;
//            }
//                      
//         }
//
//        if (a == i)
//            printf("%d ", i);
//
//
//
//    }
// return 0;
//}

   //������
int main()
{
    int i=0;
    //����������ʱflagΪ��
    for (i = 2; i <= 200; i++)
    {
        int a=0;
        int flag = 1;  //flag������ѭ�����涨�壬��ʹÿ��ѭ������Ϊ��
        for (a = 2; a < i; a++)
        {
          
            if (i % a == 0)
            {
                flag = 0;  //���嵱������������i��������ʱ��flagΪ�٣�0����
                break;
            }
        }
        if (flag == 1)  //ֻ��flagΪ���������
            printf("%d ", i);
    }


}
















































