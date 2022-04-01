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
//Բ����		���� 
//	2		 A->B
//			 A->C
//			 B->C
//			 
//	3		 A(������)->B   1.A->C
//					 		2.A->B
//					 		3.C->B
//
//			 A(�ײ�)->C
//			 
//			 B(����)->C		1.B->A
//			 				2.B->C
//			 				3.A->C
//�ṹ�Ƶ�:
//
//							n-2��A->C 
//			n-1��A->B 		��n-2��A->B
//							n-2��C->B 
//
//
//n��A->C 	��n��A->C 
//
//							n-2��B->A 
//			n-1��B->C 		��n-1��B->C 
//							n-2��A->C 
// 
// f(n) = 2f(n-1)+1 = 2^n-1
