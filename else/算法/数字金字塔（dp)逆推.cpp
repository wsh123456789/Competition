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
	for(int i = 1;i<=n;i++){
		f[n][i]=a[n][i];//�߽� 
	}
	//��̬�滮����
	for(int i=n-1; i>=1;i--){
		for(int j=1;j<=i;j++){
			f[i][j] = max(f[i+1][j],f[i+1][j+1])+a[i][j];
		} 
	} 
	cout<<f[1][1]<<endl;
	return 0;
}
