#include <iostream>

using namespace std;
int f(int x,int y){
	if(y==0 || x==y)
		return 1;
	else{
		return f(x-1,y-1)+f(x-1,y);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<f(i,j)<<" ";
		}
		cout<<endl;
	}
}
