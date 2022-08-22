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
//			break;                  //while循环中，break用于永久终止循环
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
//			continue;                //while循环中，continue用于跳过continue后面的代码，而不是继续
//		printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}

             //EOF即是end of file,是文件结束标志
              //  getchar是获取一个字符，           putchar是输出一个字符
//int main()
//{
//    int ch = getchar();           //意思是获取然后打印
//    printf("%c\n", ch);
//
//
//
//    return 0;
//}

//          //等价表述
//int main()
//{
//    int ch = getchar();             //意思是输出这个ch表示的字符
//    putchar(ch);
//
//
//
//    return 0;
//}

//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)           //!=表示不等于，！=EOF即意思是当文件不结束时，执行while函数
//    {
//        putchar(ch);
//    }
//
//                     //没有break时，while会无限循环，若要文件结束，按Crtl+C
//
//    return 0;
//}




      //getchar与scanf等输入函数与键盘之间有一个缓冲区，当键盘输入时，最后敲回车，触发输入函数同时还留下\n（即是换行），但\n会留着缓冲区，不会被读取
//int main()
//{
//    char password[20] = { 0 };       //整型才用int，字符和数组是用char，不要无脑int
//    printf("请输入密码：");
//    scanf("%s", password);         //此处password没有&取地址符，因为password有20个数，是数组，所以不用
//    printf("请确认密码：(Y/N)");
//    getchar();               //因为输入密码后，密码被scanf读取，但留下\n在缓冲区，所以要先取走，不然后面ch读取就是\n，不是Y也不是N，则一定会出现“确认失败”，所以getchar可以用于清理缓冲区的一个字符，一般是\n
//    int ch = getchar();    //getchar虽然输入是字符，但是返回类型是整型（阿斯玛值或者EOF(即-1），所以用int
//        if ('Y'==ch)      //等于一定是俩个=，为防错，用等于，倒过来写，有利于报错
//        printf("确认成功\n");
//    else
//        printf("确认失败\n");
//                                     //scanf不能读取空格，当输入如1234561 abcdef时，中间有空格，scanf只读取空格前面，此时缓冲区还剩下 abcdef\n，此时一个getchar无法清空缓冲区，所以采用下列while函数
//
//    return 0;
//}
//
//int main()
//{
//    char password[20] = { 0 };
//    printf("请输入密码:");
//    scanf("%s", password);
//    printf("请确认密码：（Y/N)");
//
//
//    int abc = 0;
//    while ((abc = getchar()) != '\n')        //注意：abc =getchar()外面还要一个大括号，写时他只会有左边的，不要忘记加右边的括号  ）  ，
//    {                            //这个while函数表示当缓冲区读取的不是\n时，执行while函数，函数内容为空，即只是读取，不断循环到读取到\n后，不符合！='\n'的条件后，跳出该while函数
//        ;
//    }
//    int ch = getchar();
//    if ('Y' == ch)
//        printf("确认成功");
//    else
//    {
//        printf("确认失败");
//    }
//    return 0;
//}


//
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')         //   符号||是或者的意思
//            continue;               // 字符0与字符9，因为int,所以看其阿斯玛值  字符0到9之间全为数字，其余为其他符号，所以当输入的字符在0到9之外，continue跳过输出，表现为不打印，因此只能打印数字
//        putchar(ch);
//    }
//
//
//    return 0;
//}

















