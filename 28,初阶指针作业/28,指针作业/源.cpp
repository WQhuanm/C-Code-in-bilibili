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
	i--;   //sizeof�����������������������޷������ͣ�������i�Ƚϣ���Ϊi�����ͣ���ת��Ϊ�޷��ţ���ô-1�޷��ž޴󣬿϶�����sizeof(i)==4�����Դ�ӡ>
	if (i > sizeof(i))cout << ">" << endl;
	else cout << "<" << endl;
	return 0;
}



   //