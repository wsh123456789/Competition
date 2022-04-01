#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long a,c,sum = 0;
	double b;
	cin>>c;
	if(sqrt(c)==int(sqrt(c))){
		a = sqrt(c)-1;
	}
	else{
		a = int(sqrt(c));
	}
	for(long long i = 1;i <= a;i++){
		if(c%i==0){
			sum += (c/i-i)*2-1;
		}
			
		else{
			sum += (c/i-i+1)*2-1;
		}
			
	}

	cout<<sum;
}
