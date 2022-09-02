#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

////while循环的格式
//int main()
//{
//	int i = 0;   //初始化
//	while (i < 666)  //判断部分
//	{
//		printf("%d\n", i);    //调整部分
//	}
//	i++;
//	return 0;
//}

         //for循环的优点，三个部分集中，便于观察     语法:for(表达式1（初始化）; 表达式2(判断部分）; 表达式3(调整部分)(最后的表达式这里不用分号;))
//
//int main()
//{
//    int i = 0;
//    for (i = 333; i <= 666; i += 111)
//    {
//        printf("%d\n", i);
//    }
//
//    return 0;
//}


//
//      //请问循环多少次
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 0, b = 0; b = 0; a++, b++)    //注意，b=0不是判断当b=0时，意思是在判断部分把0赋予b，说明b为假，但实际b=0，为真，所以循环0次，不是1次；等于是==，应该写成b==0才对
//        b++;
//
//    return 0;
//}



