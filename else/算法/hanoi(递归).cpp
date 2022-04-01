#include <iostream>
#include <cstdio>
using namespace std;
int count=0;
int hanoi(int n,char a,char b,char c){
	count++;
    if(n == 1){
        printf("%c->%c\n",a,c);
    }
    else{
        hanoi(n-1,a,c,b);
        printf("%c->%c\n",a,c);
        hanoi(n-1,b,a,c);
    }
}
int main(){
	int n;
	cin>>n;
    hanoi(n,'a','b','c');
    cout<<count;
}
//圆盘数		步骤 
//	2		 A->B
//			 A->C
//			 B->C
//			 
//	3		 A(上两层)->B   1.A->C
//					 		2.A->B
//					 		3.C->B
//
//			 A(底层)->C
//			 
//			 B(两层)->C		1.B->A
//			 				2.B->C
//			 				3.A->C
//结构推导:
//
//							n-2层A->C 
//			n-1层A->B 		第n-2层A->B
//							n-2层C->B 
//
//
//n层A->C 	第n层A->C 
//
//							n-2层B->A 
//			n-1层B->C 		第n-1层B->C 
//							n-2层A->C 
// 
// f(n) = 2f(n-1)+1 = 2^n-1
