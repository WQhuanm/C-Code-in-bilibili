#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>



//
//int main() {
//	char a1[] = "hello";
//	char a2[] = "hello";
//	char* a3 = "hello";    //注意，在cpp文件无法这么写，这里改为c文件
//	char* a4 = "hello"; 
//
//	//*a3 = "daijs";注意，这一条用了会报错，因为你已经赋值*a3为一个常量了，你就不能再去修改他
//
//	if (a1 == a2)printf("a1==a2\n\n\n");   //a1不等于a2，因为地址不一样
//	if (a3 == a4)printf("a3==a4\n\n");    //a3等于a4，因为对于指针来说，后面那个字符串为一个常量字符串，既然是常量，那么地址相同，a3与a4一定相等
//	return 0;
//}


//
//                   //数组指针
//int main() {
//    int a[5] = { 1,2,3,4,5 };
//    //建立一个存储a数组每个元素地址的数组
//    int(*pa)[5] = &a;  //必须先是个指针，再是数组，所以括号（） ，没有括号，就是个指针数组，不是我要的存放指针的数组        //&a取得是整个数组地址，a是数组首元素地址
//    return 0;
//}






    //二维数组传参

//void test(int a[][3]){}  //可以
//void test2(int a[2][3]){}//可以
//void test3(int a[][]){}//不可以，二维数组传参至少必须明确多少列
//void test4(int* arr) {}//不可以，人家是二维数组，你用一级指针接受只能接受到二维数组的第一行的地址，
//
//void test5(int(*a)[3]){}//可以，表示指针a指向有3个整型元素的数组，符合arr数组第一行有3个元素
//void test6(int *a[3]){}//不可以，这样是一个一维数组，不是指针，（既不是指针，也不是二维数组，肯定不可以）
//
//int main() {
//    int arr[2][3];
//    test(arr);
//    return 0;
//}








  //int*arr[10]是一个指针数组（名字谁在后面，说明本质是谁），首先arr是一个数组，与*连接，说明这个数组里储存了指针,arr+1,即指向arr数组的第二个元素
//int*arr[]啥也不是，因为没给空间，无法传递
//int(*arr)[10]是一个数组指针，首先arr与*结合，是一个指针，然后他指向了一个空间为10的数组，当arr+1时，地址一次跨过10个整型长度