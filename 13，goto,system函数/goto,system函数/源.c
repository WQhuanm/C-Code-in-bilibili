#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
   
   //goto,用于跳转，类似循环,实际应用与跳出多重循环
//    //如
//for{
//    for{
//        for{
//            goto ABC;   //就不用输入多个break；直接出去了，跑到外面ABC
//        }
//    }
//}
//ABC:


#include<stdlib.h>   //使用system需要
//关机程序
    //shutdown -s -t 180       （ -s）（有空格）表示设置关机，（ -t）表示设置时间关机 后面数字表示多少秒后关机
    //shutdown -a表示注销/取消关机
int main()
{   //system函数用于执行系统命令
    RET: system("shutdown -s -t 90");
    printf("注意，你的电脑在90秒后关机，输入‘我是猪’可以取消关机\n");
    char input[20] = { 0 };     //输入文字也是字符，用char
    scanf("%s", &input);
    if (strcmp(input, "我是猪") == 0)     //俩字符串比较用strcmp，不用等于== 
        system("shutdown -a");
    else
        goto RET;





	return 0;
}




