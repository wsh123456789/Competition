#include <iostream>
#include <algorithm> 
#include <cstdio> 
#include <cstring>
using namespace std;
int f[5][9]={0};//���Ž� 
int w[5]={0,2,3,4,5};//��Ʒ���� 
int v[5]={0,3,4,5,8};//��Ʒ��ֵ 
int main(){
	int i,j;//i��ʾ��Ʒ��ţ�j��ʾ�������� 
	memset(f,0,sizeof(f));
	for(int i = 1; i < 5 ; i++){
		for(int j = 1; j < 9; j++){
			if(w[i] > j)
				f[i][j]=f[i-1][j];
			else
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);//͵�벻͵֮��ȡ���ֵ 
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j <9 ; j++){
			printf("f[%d][%d]=%d\n",i,j,f[i][j]);
		}
	}
}
