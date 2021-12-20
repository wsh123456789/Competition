#include<iostream>
#include<cstring>
using namespace std;
char a[6][62];string s;
void frame(char c,int y,int x)
{
	a[3][y]=c;
	a[1][y]=a[2][y+1]=a[3][y+2]=a[4][y+1]=a[5][y]=a[4][y-1]=a[3][y-2]=a[2][y-1]=(x?'#':'*');
}
int main()
{
	memset(a,'.',sizeof(a));
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(i%3==2)continue;
		frame(s[i],4*i+3,1);
	}
	for(int i=2;i<s.size();i+=3)
	{
		frame(s[i],4*i+3,0);
	}
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<4*s.size()+2;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}