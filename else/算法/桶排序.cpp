#include <iostream>
using namespace std;
int a[11];
int main(){
	int i,j,t;
	for(i = 0; i < 5;i++){
		cin>>t;
		a[t]++;
	}
	for(i = 0;i <= 10;i++){
		for(j = 1; j <= a[i];j++){
			cout<<i;
		}
	}
}
