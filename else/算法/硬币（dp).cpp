#include <iostream>
#include <algorithm>
using namespace std;
int dp[100];
int min(int a,int b){
	return a<b?a:b;
} 
int main(){
	int n;
	cin>>n;
	int b[3];
	for(int i = 0; i < 3; i++){
		cin>>b[i];
	}
	sort(b+0,b+3);
	int cost;
	for(int i = 1; i <= n; i++){
		cost = 99999;
		if(i-b[0]>=0) cost = min(cost,dp[i-b[0]]+1);
		if(i-b[1]>=0) cost = min(cost,dp[i-b[1]]+1);
		if(i-b[2]>=0) cost = min(cost,dp[i-b[2]]+1);
		dp[i] = cost;
		
	}
	cout<<dp[n];
} 
