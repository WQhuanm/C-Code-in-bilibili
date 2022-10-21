#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#define ll long long
using namespace std;

int main() {
	int i = 0;
	i--;   //sizeof这个操作符，算出的类型是无符号整型，所以与i比较，因为i是整型，先转化为无符号，那么-1无符号巨大，肯定大于sizeof(i)==4，所以打印>
	if (i > sizeof(i))cout << ">" << endl;
	else cout << "<" << endl;
	return 0;
}



   //