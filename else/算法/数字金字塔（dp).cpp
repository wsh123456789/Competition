#include <iostream>
using namespace std;
int a[1005][1005];
int f[1005][1005];//f[x][y]��ʾ�Ǵӣ�1��1������x,y)���������Ȩֵ 
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	f[1][1]=a[1][1];//�߽� 
	//��̬�滮˳��
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
