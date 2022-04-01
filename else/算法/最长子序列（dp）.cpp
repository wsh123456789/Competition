#include <iostream>
using namespace std;
int a[100];
int dp[100];
int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n;i++){
		cin>>a[i];
	}
	
	
	//状态转移方程 dp[i] = max{dp[j]}+1
	for(int i=1;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<i;j++){
			if(a[j]<a[i])
				dp[i]=max(dp[i],dp[j]+1);
		}
		cout<<dp[i]<<endl;;
	}
	return 0 ;
} 

//1 5 3 4 8
// dp        比较          
//dp[1]=1    1 = 1     	dp[1]=1
//dp[2]=1    5 > 1 		dp[2]=dp[1]+1=2
//dp[3]=1	 3 > 1		dp[3]=dp[1]+1=2
//dp[4]=1    4 > 1      dp[4]=dp[1]+1=2
//			 4 > 3		dp[4]=dp[3]+1=3
//dp[5]=1	 8 > 1		dp[5]=dp[1]+1=2
//			 8 > 5		dp[5]=dp[2]+1=3
//			 8 > 3		dp[5]=dp[3]+1=3
//			 8 > 4		dp[5]=dp[4]+1=4
// 输出 1 2 2 3 4 


