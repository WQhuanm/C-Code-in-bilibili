#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>



//练习(计算n的阶层)
//int main()       
//{
//	int n = 0;            //while循环
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
//    int i = 0; int n = 0; int tmp = 0;         //for循环         
//    scanf("%d", &n);
//    for (i = 1, tmp=1; i <= n; i++)       //注意，for循环的初始化不要在函数里面写，会出错，应该在括号中
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
//    int i = 1; int n = 0; int tmp = 1;                     //do while循环
//    scanf("%d", &n);
//    do
//    {
//        tmp = tmp * i;  //也可以写出tmp*=i;
//        i++;
//    }
//    while (i <= n);
//    printf("%d\n", tmp);
//
//    return 0;
//}

//
//          //计算1！+2！+3！+.......+n！
//int main()
//{
//    int i = 0; int n = 0; int tmp = 0; int a = 0;       //for循环         
//    scanf("%d", &n);
//    for (i = 1, tmp = 1,a=0; i <= n; i++)       //注意，for循环的初始化不要在函数里面写，会出错，应该在括号中
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


//             //在有序数组里查找n，此处练习在1到10查找7,用二分法
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);   //用于求出数组的数量
//    int left = 0; int right = sz - 1;   //数组编码从0开始，不可以因为有序数组从1开始就被干扰以为要1开始，所以最右边的编码是数组数量-1
//
//    int target = 7;
//    while (left <= right)   //只要左边不大于右边，就应该循环  ,等于时，刚刚好为target
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] < target)   //target是实际值，所以应该用arr比较，因为mid是编码值
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > target)     //是else if,不要写if
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下标是：%d\n", mid);
//            break;  //结束while循环必须记得写break
//        }
//
//    }
//    if (left > right)
//    {
//        printf("找不到\n");
//    }
//
//
//    return 0;
//}

          // //将一句话逐渐向中间靠近来呈现
//int main()
//{
//	char arr1[] = "hellow world";
//	char arr2[] = "############";
//	int left = 0; int right = strlen(arr1) - 1;    //用strlen求整个长度，然后减一就是最后一位的下标
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		if (left < right)
//		{
//			left = left + 1; right = right - 1;     //或者写left++;right--;
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

#include <windows.h>   //使用Sleep时要有
//   //简化版
//int main()
//{
//	char arr1[] = "HELLOWORLD!!!!!!!!!!!!!!";
//	char arr2[] = "########################";
//	int left = 0; int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		system("cls");   //清空屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(888);   //意思是睡眠0.888秒，即改变输出速度,S要大写
//		
//		left++; right--;
//	}
//
//
//	return 0;
//}
//
