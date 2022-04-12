#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std; 
string s1,s2;
int a[2005],b[2005],c[2005];
int main(){
	int la,lb,lc;
	cin>>s1>>s2;
	la = s1.length();
	lb = s2.length();
	if(s1 == "0"||s2 == "0"){
		cout<<0;
	}
	else{
		for(int i = 0; i < la;i++){
			a[la-i] = s1[i] - '0';//将字符转换为数字，并且将字符转置便于计算 
		}
		for(int i = 0; i < lb;i++){
			b[lb-i] = s2[i] - '0';
		}
	
		lc = la + lb;
		for(int i = 1; i <= la;i++){
			for(int j = 1; j <= lb; j++){
				c[i+j-1] += a[i]*b[j];
				c[i+j] += c[i+j-1]/10;
				c[i+j-1] %= 10;
			}
		}
		if(c[lc] == 0&& lc > 0) lc--;
		for(int i = lc; i > 0; i--){
			cout<<c[i];
		}	 
	}

	return 0;
}
