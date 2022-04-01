#include <iostream>
using namespace std;
int m,n,p,q,minn=999999;
int a[100][100];//1表示空地 2表示阻碍 
int v[100][100];//0表示未访问，1表示访问，标记经过路线 
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
void dfs(int x,int y,int step){
	if(x == p&&y ==q){
		if(step < minn){
			minn = step;
		return;
		}
	}
	//顺时针试探路径
	for(int k = 0; k <= 3; k++){
		int tx,ty;
		tx = x+dx[k];
		ty = y+dy[k];
		if(a[tx][ty] == 1&& v[tx][ty]==0){
			v[tx][ty]=1;
			dfs(tx,ty,step+1);
			v[tx][ty]=0;
		}
	} 
//	//右
//	if(a[x][y+1]==0 && v[x][y+1]==0){
//		v[x][y+1] = 1;
//		dfs(x,y+1,step+1);
//		v[x][y+1] = 0;
//	}
//	//下
//	if(a[x+1][y]==0 && v[x+1][y]==0){
//		v[x+1][y] = 1;
//		dfs(x+1,y,step+1);
//		v[x+1][y] = 0;
//	}
//	//左
//	if(a[x-1][y]==0 && v[x-1][y]==0){
//		v[x-1][y] = 1;
//		dfs(x-1,y,step+1);
//		v[x-1][y] = 0;
//	}
//	//上 
//	if(a[x][y-1]==0 && v[x][y-1]==0){
//		v[x][y-1] = 1;
//		dfs(x,y-1,step+1);
//		v[x][y-1] = 0;
//	}
	return;
}
int main(){
	cin>>m>>n;
	for(int i = 1; i <= m;i++){
		for(int j = 1;j <= n; j++){
			cin>>a[i][j];
		}
	}
	int sx,sy;
	v[sx][sy]=1;
	cin>>sx>>sy>>p>>q;
	dfs(sx,sy,0); 
	cout<<minn<<endl;
} 
/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1
1 2 1 1
1 1 1 2
1 1 4 3
*/

