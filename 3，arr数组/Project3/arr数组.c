#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

                 //数组是用下标来访问，从0开始，如前10个数就是0-9
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //定义arr为10个数              
	int a = 0;
	while (a < 10)
	{
		printf("%d\n", arr[a]);
		a++;
	}




	return 0;
}




//使用scanf，arr是数组，不用&arr，只需要arr          scanf("%d",arr)
//但是arr[a]不是数组，所以要&      scanf("%d",&arr[a])


//arr[100]={0}不是每个字符为0，0是阿斯玛表的编号0，意思是NULL，要全为什么，要单引号引用'' ， 如'0'    

//数组建议初始化，不然就定义为全局变量（会自动初始化）（写在int main外面），否则可能被随机值搞出bug


                //数组在循环中使用，注意覆盖问题，假如上一次循环有100个字符，这次只有30个，后面70个是不会清空的，这时会出现bug，解决方法如下
 ////字符串统计练习
//int main()
//{
//	char arr[1000];
//	while (scanf("%s", arr) != EOF)
//	{int i=0,a=0;
//	int b =  strlen(arr);     
//	for (i = 0; i < b; i++)     //不用i<1000,而是小于本次输入的字符串长度，这样即使没有清空，也不会循环到后面的字符
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= '0' && arr[i] <= '9')
//			a++;
//	}
//	printf("%d\n", a);
//
//	}
//
//	return 0;
//}
    ////也有另一种解决方法，就是每次循环执行到最后重新初始化数组
  //方法2
int main()
{
	char arr[1000] = { 0 };
	while (scanf("%s", arr) != EOF)
	{
		int i = 0, a = 0;
		for (i = 0; i < 102; i++)
		{
			
			if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= '0' && arr[i] <= '9')
				a++;
			arr[i] = 'q';    //把字符改为q，最后循环结束整个字符串为qqqqq.......，或者写为arr[i]=0;(没有引号写的是阿斯玛值）
		}
		printf("%d\n", a);
		
	}

	return 0;
}
