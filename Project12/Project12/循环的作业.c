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

#include <windows.h>   //ʹ��SleepʱҪ��
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
