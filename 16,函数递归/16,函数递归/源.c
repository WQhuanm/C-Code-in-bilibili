#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
              //递归，函数自己内部调用自己
//    //输入一个整型值（无符号），按顺序打印其每一位
//void print(int n)
//{
//    if (n > 9)   //即不止有个位数时
//    {
//        print(n / 10);      //减少一位，继续递归判断（每次递归，变量n变为n/10）      当1234减少到1时，不再递归，进入下一步(打印),直到函数结束，返回上次递归位置，继续执行，不断返回
//    }
//    printf("%d ", n % 10);   //打印个位数
//}
//int main()
//{
//    unsigned int num;    //无符号即unsigned，没有正负号，即范围为整数
//    scanf("%u", &num);   //unsigned类型打印用%u
//    print(num);  //如输入1234
//    return 0;
// }

//
//              //模拟实现一个与strlen一样功能的函数
//   //方法一，允许创建临时变量
//int my_strlen(char* str)    //char的指针传的是第一个字符的地址，不是全部字符
//{
//    int count = 0;
//    while (*str != '\0')   //因为字符串结尾是\0，没有他字符就不结束，可以利用他来计算长度
//    {
//        count++;  
//        str++;   //表示字符向下一位
//    }
//    return count;   //返回字符数量
//}
//int main()
//{
//    char arr[] = "hellow world";
//    printf("%d\n", my_strlen(arr));   //打印了函数的返回值
//}
//       //不允许创建临时变量（即不可以使用count计数），所以用递归的思想
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//        return 1 + my_strlen(str + 1);      //递归，有一个字符，就加一，没有为0     str+1,表示的是下一个字符的地址，俩个地址差距1
//    else
//        return 0;
//}
//int main()
//{
//    char arr[] = "bit";
//    printf("%d\n", my_strlen(arr));
//    return 0;
//}

//           //递归 求n的阶层  (区别用循环求解（迭代）
//
//int fac(int n)
//{
//    if (n <= 1)
//        return 1;      //n<=1时阶层都为1
//    else
//        return n * fac(n - 1);     //只要n不为1，就会自己*下一个-1的自己（即n*(n-1)),直到遇到1
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


             //求第n个斐波那契数   fac(n)=fac(n-1)+fac(n-2)    ,假设fac（n)是第n个，fac(n-1)则是第n-1个 ......利用该数学公式来求
//   //方法一，递归
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
//int main()            //缺点，计算数值越大，跑越慢，因为重复计算太多次,如输入50，第50个出结果贼慢
//{
//    int n;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d\n", ret);
//    printf("%d", count);
//
//}

//
//      //方法二，迭代  从头算到尾，没有重复，减少计算
//int fac(int n)
//{
//    int a = 1,b=1;         //假设a为n-2,b为n-1,c为n，所以最开始a，b为1
//    int c = 0;
//    if (n <= 2)
//        return 1;
//    else
//        while (n > 2)
//        {
//            c = a + b;     //每次循环，a,b,c向前移动，从而不断增加c的值，最终返回c
//            a = b;
//            b = c;
//            n--;     //每次循环，n减去1，向n=2移动
//        }
//    return c;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d\n", ret);
//}


//             //求1/1-1/2+1/3-......-1/100
//       //方法一，通法分类
//int main()
//{
//    double sum = 0.0;  //出现分数，除法一定不要用int定义，用浮点数，要得到浮点数，初始化应该也是浮点数0.0
//        for (int i = 1; i < 101; i++)
//        {
//            if (i % 2 == 0)
//                sum -= (1.0 / i);  //要得到浮点数，被除数应该也是浮点数，写1.0
//            else
//                sum += (1.0 / i);
//        }//减法和加法共用一个sum就行,因为都是对同一个和进行处理，不用分开
//    printf("%lf\n", sum);
//    return 0;
//}


//    //方法二，因为交换加减，可以利用正负1交替变化
//int main()
//{
//    int flag = 1;     //定义一个1
//    double sum = 0.0;
//    for (int i = 1; i < 101; i++)
//    {
//        sum += flag * (1.0 / i);
//        flag = -flag;    //使得i为奇数，flag为+1，是加法，i为偶数，flag为负数，减法，符合
//    }
//    printf("%lf\n", sum);
//
//}












