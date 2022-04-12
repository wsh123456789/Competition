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
	f[1][1]=a[1][1];//边界 
	//动态规划顺推
	for(int i=2; i<=n;i++){
		for(int j=1;j<=i;j++){
			f[i][j] = max(f[i-1][j-1],f[i-1][j])+a[i][j];
		} 
	} 
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans = max(ans,f[n][i]);
	}
	cout<<ans<<endl;
	return 0;
}
