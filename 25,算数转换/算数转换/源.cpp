#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;

                   //����һ�����Ķ�����λ�м�λ


//            //����һ����������
//int main() {
//    int n,count=0;  //ʹ��countһ��Ҫ��ʼ��Ϊ0����Ȼ��֪�������￪ʼ��
//    cin >> n;
//    for (int i = 1; i <= 32; ++i) {
//        if ((n & 1) == 1)count++;
//
//      n= n >> 1; //����n�����ƣ���Ҫ����n=
//    }
//    cout << count;
//    return 0;
//}
              //ȱ�㣬����32��


//               //�Ż�
//int main() {
//    int n,count=.0;
//    cin >> n;                           //����n=1111
//    while (n) {                         //��ôn-1=1110��ȡ�룬n=1110
//        n = n & (n - 1);                //n=1110,n-1=1101,ȡ��,n=1100
//        count++;                        //n=1100,n-1=1010,ȡ��,n=1000
//    }                                   //n=1000,n-1=0100,ȡ�룬n=0000
//    cout << count;                         //�Զ��׼���ÿ�β�����ֻ����ұߵ�1����������0������ֱ������Ϊ0���������ò���32��
//    return 0;
//}



//              //��չ���ж�һ�����ǲ���2��n�η����ᷢ�֣�������ֻ��һ��1�ľ��ǣ�����������Ҫ��count�𣬲��ã�ֻ��һ��1������ֻ��Ҫһ���ж��ǲ��Ǿͺ�
//int main() {
//    int n;
//    cin >> n;
//    if ((n & (n - 1)) == 0)cout << "YES";
//    else cout << "NO";
//    return 0;
//}



                     //�ж��������Ķ�����λ�м�λ��ͬ
//            //��������
//int main() {
//    int a, b, count = 0;
//    cin >> a >> b;
//    for (int i = 0; i < 32; ++i)if (((a >> i)&1) != ((b >> i)&1))count++;   //һ��Ҫ&1����֤һλһλ�Ƚ�
//    cout << count;
//    return 0;
//}


                 //��λ�룬�ҿ������룬Ȼ��ͳ�Ʋ�ͬ��������ͬΪ0����ͬΪ1
int main() {
    int n, m, count = 0; 
    cin >> n >> m;
    int x = n ^ m; 
    while (x) { x = x & (x - 1); count++; }
    cout << count;
    return 0;
}