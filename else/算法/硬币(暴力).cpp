#include<iostream> 
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int num,count=999;
	int b[3];
	cin>>num;
	for(int i = 0; i < 3; i ++){
		cin>>b[i];
	}
	sort(b+0,b+3);
	for(int i = 0; i <= num/b[0]; i++){
			for(int j = 0; j <= num/b[1]; j++){
					for(int k = 0; k <= num/b[2]; k++){
						int a = b[0]*i+b[1]*j+b[2]*k;
						if(a == num){
							count = min(i+j+k,count);
						}
		
			}
		
		}
	}
	cout<<count; 
}
