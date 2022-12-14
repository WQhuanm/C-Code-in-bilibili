#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;



              //大端字节序与小端字节序
           //数据存储是从低位到高位（地址），如int是4个字节（8个比特位），那么0x11223344，如果存储形式为44332211，那么为小端存储（数据的后面数放低位）
         //，如果存储形式为11223344，为大端存储
         
        //代码判断编译器是什么存储
//int main() { 
//    int a = 1;//即0x00000001
//    char* p = (char*)&a;//只需要判断第一个字节是01还是00，读取一个字节的指针是char
//        if (*p == 01)cout << "min";
//        else cout << "max";
//    return 0;   //vs为小端
//}
//




//int main() {
//    char a = -128;//char类型读取一个字节（8比特位），a=10000000,反：01111111，补码：10000000
//    printf("%d\n\n", a);   //char变为int，整型提升，补码：10000000符号位为1，高位补1，11111111111111111111111110000000，转为原码打印成为128
//    printf("%u\n\n", a);//char变为无符号位整型，无符号位整型提升（高位补0），补码：000000000000000000000100000000000，变为原码位11111111111111111101111111，打印出来极大，为4294967168
//    return 0;
//  }

//
//int main() {
//    unsigned int i;
//    for (i = 9; i >= 0; --i) {   //这样将死循环，因为i=0后，减为-1，实际是无穷大，因为unsigned int
//        cout << i << endl;
//    }
//
//    return 0;
//}


//
//int main() {
//    char a[1000];
//    for (int i = 0; i < 1000; ++i)a[i] = -1 - i;   //因为char读取1个字节，所以最小到-128，所以是-1，-2，-3.......-128，127，126....2，1，0
//    printf("%d", strlen(a));  //strlen读到/0停止，char读的是阿斯玛值，所以0就是/0（不读入0（因为不读/0）），所以读到0时停，128+127==255
//    return 0;
//}



//
//int main() {
//    unsigned char i;//范围是128+127=255
//    for (i = 0; i <= 255; ++i)cout << "haha" << endl;  //死循环，最大是255，再加一又变成1了
//    return 0;
//}


            //浮点型的储存
//分为三个部分，S区（1个比特位），E区（8个比特位），M区（剩下的位）
//S存０或者１，表示正负，即（－１）＾０为正，（－１）＾１为负，
//如输入１００１，那么M中会转换为１.０１１存入，且．前面的１自动忽略，后面自动会补，那么这就是移动３位（即１００１＝１.００１*２＾３），那么E就为３，然后再加１２７，所以E区为１０００，
//M区为０１１（后面补０），那么整个浮点数９.０就是储存为０｜１０００0０１０｜００１００００００００００００００００００００........０００
//　　　　　　　　　　　　　　　　　　　　　S区　　　E区（此为１３０）　　　　　　　　M区
int main() {
    int n = 9;
    float* pn = (float*)&n;
    printf("%d\n\n", n);//此时ｎ为整型储存为０００００...０００１００１，
    printf("%f\n\n", *pn);//那么以浮点型打出自然是S为０，E为－１２７（接近，即２＾－１２７无限小），然后M区也是0000....00１00无限小，自然结果为０
    *pn = 9.0;//此时以浮点型储存，那么以整型打印自然巨大，而浮点型就正常９.0
    printf("%d\n\n", n);
    printf("%f\n\n", *pn);
    return 0;
}

