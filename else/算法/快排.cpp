#include <iostream>
using namespace std;
int a[101],n;
void quicksort(int left,int right){
	int i,j,t,temp;
	if(left > right){
		return ;
	}
	temp = a[left];//存放基数
	i = left;
	j = right;
	while(i!=j){
		while(a[j]>=temp && i<j){//从右往左找比基数大的数 
			j--;
		}
		while(a[i]<=temp && i<j){//从左往右找比基数小的数 
			i++;
		}
		
		// 交换两个数在数组中的位置
		if(i<j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		} 
	} 
	a[left] = a[i];
	a[i] = temp;
	
	quicksort(left,i-1);//继续处理左边序列
	quicksort(i+1,right);//继续处理右边序列 
	return;
	
} 
int main(){
	cin>>n;
	for(int i = 1 ; i <= n; i++){
		cin>>a[i];
	} 
	quicksort(1,n);
	for(int i = 1; i <= n;i++){
		cout<<a[i]<<endl; 
	}
	return 0 ;
} 
