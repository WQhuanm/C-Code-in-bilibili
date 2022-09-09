#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
                        //用递归逆序字符串 ,不可以使用库函数
int my_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')             //*str表示数组对应的第一个字符，str则表示数组，str++是地址的增加，*str++是字符的增加
    {
        count++;
        str++;
    }
    return count;
}

void swap(char* str)              //大事化小，每次递归，先交换两边，中间不变
{                                            //递归不再像以前那样使用left与right了，因为是整个函数重新进入，会出现重置，所以应该每次递归减少数组长度，保证下次递归计算长度减少，使交换的变量改变
    char left = *str;   //表示该地址的字符，这样每次递归，都是靠地址来取字符，而不是一直是第一个字符                             //为了减少，就不可以直接每次俩个相互交换，应该前面变了，后面先成为\0使长度减少，所以思想是先变前面，后面变\0，再中间全部交换完，最后一步才把\0改回来，每次递归都是这个思想
    int x = my_strlen(str);
    *str = *(str + x - 1); //不允许使用库函数，就自己造个strlen    
    *(str + x - 1) = '\0';                 //*str等价于str[left]           *(str+ my_strlen(str) - 1)等价于str[right]
   
    if(my_strlen(str+1)> 1)           //判断即将进行下次递归的数组长度
    {
        swap(str + 1);

    }
    *(str +x - 1) = left;

}

int main()
{
    char arr[10] = "abcdef";
    swap(arr);
    printf("%s\n", arr);


    return 0;
}
