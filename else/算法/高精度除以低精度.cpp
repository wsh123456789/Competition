#include <iostream>
#include <cstring> 
using namespace std;
string s1;
long long b,c[5005],x,a[5005],la,lc;
int main(){
	cin>>s1>>b;//���뱻�����ͳ��� 
	la = s1.length();
	for(int i = 1; i <= la;i++) 
		a[i] = s1[i-1]-'0';//��������ת��Ϊ���� 
	for(int i = 1;i <= la;++i){
		c[i] = (x*10+a[i])/b;
		x = (x*10+a[i])%b;
	} 
	lc = 1;
	while(c[lc] == 0&& lc <la) lc++;//ɾ��ǰ����
	for(int i = lc;i <= la;++i){
		cout<<c[i];
	} 
	return 0;
}
