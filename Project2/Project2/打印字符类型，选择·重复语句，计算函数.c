#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>






//int main()
//{
//	
//	%d用于打印整数，%c用于打印单个字符(用单引号），%s用于打印字符串（用双引号）
//	printf("%d\n",666);
//	printf("%c\n", 'def');  //如果用%c还输入多个字符，默认取最后一个(如f）
//	printf("%s\n", "sfhiuefdjhdfohewdfi");
//
//	在打印时，有时出现\+字母是转义符的情况（如\t表示水平制表符，则不会打印出\t而是一个空格，此时可以多加一个\来转义这个转义符如用\\t则打印出\t    转义字符表示一个字符
//	printf("https.\t......\\t");//如左边这个
//
//
//
//	return 0;
//}



//




//
////选择语句
//int main()
//{
//	int input = 0;      //=0是默认初始值，input是指输入的值
//	printf("学不学编程？\n");
//	printf("那要好好学习吗？选择1或0\n");
//	scanf("%d", &input);  //使用scanf函数必须用&符号接变量
//	if (input == 1)               // if 是与后面的printf一起的，所以不用分号;
//		printf("有好工作\n");
//	else
//		printf("种田\n");
//
//	return 0;
//}



//
////重复语句
//int main()
//{
//	int line = 0;
//		while(line<10000)
//	{printf("继续写代码:(第%d次）\n",line);
//		line++;               //++表示line不够就继续增加
//	}
//		if (line == 10000)
//		{
//			printf("good offer\n");
//			
//
//		}
//
//
//	return 0;
//}










//
////计算（定义法）
//int main()
//{               
//	int a = 0;
//		int b = 0;
//		scanf("%d %d", &a, &b);
//		int sum = a + b;
//		printf("%d\n", sum);
//		
//
//
//
//
//	return 0;
//}





//
////计算（函数法）
//int Add(int x, int y)
//{
//	int z = 0;    //这3步可以合成一步 return x+y;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//
