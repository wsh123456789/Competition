#include <iostream>
#include <cstring>
using namespace std;
string s1,s2;
int  a[305],b[305],c[305],tmp[305];//a为被除数，b为除数，c为商
void init(int *x){
	string s;
	cin>>s;
	x[0] = s.length();
	for(int i = 0; i < x[0]; i++){
		x[x[0]-i] = s[i] - '0';//为了便于计算，将字符串转换为数字，并且倒序储存 
	} 
} 





void print(int a[]){
	if(a[0] == 0){
		cout<<0;
		return;
	}
	for(int i = a[0];i > 0;i--){
		cout<<a[i];
	}
	return;
} 


int compare(int a[], int b[])//返回1表示a>b,返回0表示a=b,返回-1表示a<b 
{
	if(a[0]>b[0]) return 1;//a的位数大于b则a比b大
	if(a[0]<b[0]) return -1;
	for(int i = a[0]; i > 0; i--){
		if(a[i] > b[i]) return 1;
		if(a[i] < b[i]) return -1;
	} 
	return 0;
		
 } 



void minu(int a[],int b[])//做减法 
{	for(int i = 1;i <= a[0]; i++)
	{
		if(a[i] < b[i])
		{
			a[i+1]--;
			a[i] = a[i] + 10;
		}	
		a[i] = a[i]-b[i];
	}
	while(a[a[0]]==0&&a[0] > 0) a[0]--;//删除a的前导0，修正a的位数 
}





void numcpy(int p[],int q[],int n){ //将p数组整体移动n位到q数组中 
	for(int i = 1;i <= p[0];i++){
		q[i+n-1] = p[i];
	}
	q[0] = p[0]+n-1;
}




int main(){
	init(a);//输入a 
	init(b);//输入b 
	c[0] = a[0]-b[0]+1;
	for(int i = c[0]; i >= 1;i--){
		memset(tmp,0,sizeof(tmp));
		numcpy(b,tmp,i);
		while(compare(a,tmp)>=0){
			c[i]++;
			minu(a,tmp); 
		}
	}
	while(c[c[0]] == 0 && c[0] > 0) c[0]--;
	print(c);
	cout<<endl;
	print(a);
	return 0;
} 
/*
531518
123
*/
