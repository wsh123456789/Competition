#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string s1,s2,s3;
int a[10090],b[10090],c[10090];
int flag = 0;
bool compare(string s1,string s2){//���s1>=s2,����true,���򷵻�false 
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
	if(!compare(s1,s2)){//���s1<s2;�򽻻������� 
		flag = 1;
		s3 = s1;
		s1 = s2;
		s2 = s3;
	}
	la = s1.length();
	lb = s2.length();
	for(int i = 0; i < la;i++){
		a[la-i] = s1[i] - '0';//���ַ�ת��Ϊ���֣����ҽ��ַ�ת�ñ��ڼ��� 
	}
	for(int i = 0; i < lb;i++){
		b[lb-i] = s2[i] - '0';
	}
	//���Ĵ��� 
	lc = max(la,lb);
	for(int i = 1; i <= lc;i++){
		if(a[i]<b[i]){
			a[i+1]--;
			a[i]+=10;
		}
		c[i] = a[i] - b[i];
	}
	while(c[lc] == 0 && lc > 1) lc--;//ɾ��ǰ���� lc>1�����������Ϊ�㲻��� 
	if(flag == 1)cout<<"-"; 
	for(int i = lc; i > 0; i--)
		cout<<c[i];
	return 0 ;
}
