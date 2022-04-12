#include <iostream>
using namespace std;
int a[1005][1005];
int f[1005][1005];//f[x][y]表示是从（1，1）到（x,y)进过的最大权值 
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	for(int i = 1;i<=n;i++){
		f[n][i]=a[n][i];//边界 
	}
	//动态规划逆推
	for(int i=n-1; i>=1;i--){
		for(int j=1;j<=i;j++){
			f[i][j] = max(f[i+1][j],f[i+1][j+1])+a[i][j];
		} 
	} 
	cout<<f[1][1]<<endl;
	return 0;
}
