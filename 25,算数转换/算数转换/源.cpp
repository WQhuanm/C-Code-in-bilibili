#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;

                   //计算一个数的二进制位有几位


//            //方法一，基本方法
//int main() {
//    int n,count=0;  //使用count一般要初始化为0，不然不知道从哪里开始加
//    cin >> n;
//    for (int i = 1; i <= 32; ++i) {
//        if ((n & 1) == 1)count++;
//
//      n= n >> 1; //用完n就左移，不要忘了n=
//    }
//    cout << count;
//    return 0;
//}
              //缺点，操作32次


//               //优化
//int main() {
//    int n,count=.0;
//    cin >> n;                           //假设n=1111
//    while (n) {                         //那么n-1=1110，取与，n=1110
//        n = n & (n - 1);                //n=1110,n-1=1101,取与,n=1100
//        count++;                        //n=1100,n-1=1010,取与,n=1000
//    }                                   //n=1000,n-1=0100,取与，n=0000
//    cout << count;                         //显而易见，每次操作，只对最靠右边的1操作，不对0操作，直到操作为0结束，不用操作32次
//    return 0;
//}



//              //扩展，判断一个数是不是2的n次方，会发现，二进制只有一个1的就是，但是我们需要用count吗，不用，只有一个1，那我只需要一步判断是不是就好
//int main() {
//    int n;
//    cin >> n;
//    if ((n & (n - 1)) == 0)cout << "YES";
//    else cout << "NO";
//    return 0;
//}



                     //判断俩个数的二进制位有几位不同
//            //基本方法
//int main() {
//    int a, b, count = 0;
//    cin >> a >> b;
//    for (int i = 0; i < 32; ++i)if (((a >> i)&1) != ((b >> i)&1))count++;   //一定要&1，保证一位一位比较
//    cout << count;
//    return 0;
//}


                 //按位与，我可以先与，然后统计不同的数，相同为0，不同为1
int main() {
    int n, m, count = 0; 
    cin >> n >> m;
    int x = n ^ m; 
    while (x) { x = x & (x - 1); count++; }
    cout << count;
    return 0;
}