#include <iostream>
#include <algorithm> 
#include <cstdio> 
#include <cstring>
using namespace std;
int f[5][9]={0};//最优解 
int w[5]={0,2,3,4,5};//物品重量 
int v[5]={0,3,4,5,8};//物品价值 
int main(){
	int i,j;//i表示物品编号，j表示背包容量 
	memset(f,0,sizeof(f));
	for(int i = 1; i < 5 ; i++){
		for(int j = 1; j < 9; j++){
			if(w[i] > j)
				f[i][j]=f[i-1][j];
			else
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);//偷与不偷之间取最大值 
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j <9 ; j++){
			printf("f[%d][%d]=%d\n",i,j,f[i][j]);
		}
	}
}
