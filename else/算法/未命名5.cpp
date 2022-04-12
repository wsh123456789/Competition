#include "iostream"
using namespace std;
int main()
{
int a[10][10],i,j;
for(i=0;i<10;i++)
{
for(j=10;j>=i;j--)
cout<<" ";/*Á½¸ö¿Õ¸ñ*/
for(j=0;j<=i;j++)
{
if(i==j||j==0)
a[i][j]=1;
else
a[i][j]=a[i-1][j]+a[i-1][j-1];
cout<<a[i][j]<<" ";
if(i==j)
cout<<endl;
}
}
}
