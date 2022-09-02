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

//#include <windows.h>   //使用Sleep时要有
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

//   //练习：输入三次密码
//#include<string.h>      //使用strcmp比较字符串时需要用这个
//int main()
//{
//    int i = 0;
//    char password[20] = { 0 };
//    for (i = 0; i < 3; i++)
//    {
//        printf("请输入密码：");
//        scanf("%s", password);
//        if (strcmp(password, "123456") == 0)   //俩字符串比较必须用strcmp，不用password=="123456"
//        {
//            printf("登入成功\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误，请重新输入\n");
//        }
//    }
//    if (3==i)
//        printf("三次输入错误，账号冻结/n");
//
//
//    return 0;
//}

//    //猜1到100的数字游戏
//#include<stdlib.h>  //使用rand函数需要这个
//#include<time.h>   //使用time函数需要这个
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
//void game()   //游戏的基础：1，生成随机数，2，猜数字
//{
//    int ret = rand() % 100 + 1;   //rand会产生0-32767之间的一个随机数，但是随机的前提是设置随机的起点（用srand来设置起点，一般用时间这个变化量为起点），否则每轮随机数都一样
//        //%100的余数是0到99，因为随机数要求1到100，所以加1
//    int guess = 0;
//    while (1)
//    {
//        printf("请猜数字\n");
//        scanf("%d", &guess);
//        if (guess < ret)
//            printf("猜小了\n");
//        else if (guess > ret)
//            printf("猜大了\n");
//        else if (guess == ret)
//        {
//            printf("回答正确\n");
//            break;  //猜对就结束，一定要break，明确哪里结束，哪里填break
//        }
// }
//}
//
//
//int main()
//{
//    int input = 0;
//    //time属于整型，但是rand需要unsigned int类型的，所以要强制转化,方法，加入(强制转化的类型）在变量time前面
//    srand((unsigned int)time(NULL));   //1，如果srand中间（）为固定数值，则rand产生的数固定不变，2，用time（）时间戳可以将时间转化为量（随机数） 3，null为空值，因为time一般要输入参数，但此处不用
//
//      //在主函数main中写srand，确保只产生一次随机数（一次是足够多的），避免时间太短，导致根据时间产生的随机数在重开时与上一局差不多
//
//    do    //因为是先玩游戏再判断是否继续，所以用do while （先执行后判断）
//    {
//        menu();  //先打印菜单
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:printf("开始游戏\n");
//            game();
//            break;
//        case 2:printf("结束游戏\n");
//            break;
//        default:printf("输入错误，请重新输入\n");
//            break;
//        }
//    } while (input);  //这个while相当于没有限制，可以不断进行游戏
//
//    return 0;
//}

//    //求俩个数的最大公约数
//int main()
//{
//    int m=0; int n=0;
//    int max = m < n ? m:n;  //使用三目操作符快速等于小的一个，假设最大公约数为小的那个，不是则循环递减
//    scanf("%d %d", &m, &n);
//    while (1)   //1使无限循环
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


   //打印1到200之间的素数
//   //方法一
//int main()
//{
//    int i=0;
//    for (i = 2; i <= 200; i++)
//    {
//
//        int a = 0;
//        for (a = 2; a <i; a++)
//        {
//            if (i % a == 0)    //在i>a时，如果可以整除，说明不是素数，break跳过for循环，使i增加继续判断
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

   //方法二
int main()
{
    int i=0;
    //假设是素数时flag为真
    for (i = 2; i <= 200; i++)
    {
        int a=0;
        int flag = 1;  //flag必须在循环里面定义，才使每次循环重新为真
        for (a = 2; a < i; a++)
        {
          
            if (i % a == 0)
            {
                flag = 0;  //定义当可以整除（即i不是素数时，flag为假（0））
                break;
            }
        }
        if (flag == 1)  //只有flag为真才是素数
            printf("%d ", i);
    }


}
















































