#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


//           //按（二进制）位取反   (~)：把二进制中的0变1或者1变0
//
//int main()
//{
//    int a = 0;
//    printf("%d\n", ~a);
//        //0的二进制是00000000000000000000000000000000，取反得11111111111111111111111111111111
// //计算机以补码储存数据，所以反码11111111111111111111111111111111减去1得补码11111111111111111111111111111110，补码取反得原码10000000000000000000000000000001，因为是负数，所以第一位必是1 
//    //(正整数原码，补码，反码相同，负数才有其计算转化）
//    //原码即为转化十进制的码，转为-1，所以输出结果为-1
//
//
//
//
//    return 0;
//}
//
//int main()
//{
//	int a = 333;
//	int b = ++a;              //前置++，表示先++，再使用，所以a先变为334，再被转为b，所以结果均为334
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	int c = 666;
//	int d = c++;                        //后置++，c先使用转为d，再加1,所以d是666，而c是667
//	printf("%d\n", d);
//	printf("%d\n", c);
//
//
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = (int)3.14;                         //（）里面放类型可以强制类型转换，本来3.14是double类型，（int）强制以整型输出，避免报错
//	printf("%d\n", a);
//
//
//
//
//
//	return 0;
//}
//


//&&是并且符号，俩个同时为真才真       ||是或者符号，一个真就真

//
//     // 条件操作符
//   
//int main()
//{
//
//    //复杂写法
//    int a = 1;
//    int b = 5;
//    int MAX = 0;
//    if (a > b)
//        printf("MAX=%d\n", a);
//    else
//        printf("MAX=%d\n", b);
//    
//    //简便写法
//    int a = 1;
//    int b = 7;
//    int MAX = 0;
//    MAX = a > b ? a : b;         //条件操作符   exp1?exp2:exp3     exp1成立，得出结果为exp2，不成立，得出结果为exp3
//    printf("%d\n", MAX);
//
//
//
//
//
//    return 0;
//}


































































































































