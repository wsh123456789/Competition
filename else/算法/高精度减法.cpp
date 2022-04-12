#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string s1,s2,s3;
int a[10090],b[10090],c[10090];
int flag = 0;
bool compare(string s1,string s2){//如果s1>=s2,返回true,否则返回false 
	int u = s1.length(),v = s2.length();
	if(u!=v) return u>v;
	for(int i = 0;i < u;i++){
		if(s1[i]!=s2[i])
		return s1[i]>s2[i];
	}
	return true;
}
int main(){
	int la,lb,lc;
	cin>>s1;
	cin>>s2;
	if(!compare(s1,s2)){//如果s1<s2;则交换两个数 
		flag = 1;
		s3 = s1;
		s1 = s2;
		s2 = s3;
	}
	la = s1.length();
	lb = s2.length();
	for(int i = 0; i < la;i++){
		a[la-i] = s1[i] - '0';//将字符转换为数字，并且将字符转置便于计算 
	}
	for(int i = 0; i < lb;i++){
		b[lb-i] = s2[i] - '0';
	}
	//核心代码 
	lc = max(la,lb);
	for(int i = 1; i <= lc;i++){
		if(a[i]<b[i]){
			a[i+1]--;
			a[i]+=10;
		}
		c[i] = a[i] - b[i];
	}
	while(c[lc] == 0 && lc > 1) lc--;//删除前导零 lc>1不是零否则结果为零不输出 
	if(flag == 1)cout<<"-"; 
	for(int i = lc; i > 0; i--)
		cout<<c[i];
	return 0 ;
}
