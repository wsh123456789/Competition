#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
string s1,s2;
int a[505],b[505],c[505];
int main(){
	int la,lb,lc;
	cin>>s1;
	cin>>s2;
	
	la = s1.length();
	lb = s2.length();
	
	for(int i = 0; i < la;i++){
		a[la-i] = s1[i] - '0';//将字符转换为数字，并且将字符转置便于计算 
	}
	for(int i = 0; i < lb;i++){
		b[lb-i] = s2[i] - '0';
	}
	//核心代码 
	lc = max(la,lb) + 1;
	for(int i = 1; i <= lc;i++){
		c[i] += a[i] + b[i];
		c[i+1] = c[i]/10;
		c[i] = c[i]%10; 
	}
	if(c[lc] == 0 && lc > 0) lc--;//删除前导零 
	for(int i = lc; i > 0; i--)
		cout<<c[i];
	return 0 ;
	
} 
