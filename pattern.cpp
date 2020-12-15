#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
int v1=1,v2=1;
int i,j;
for(i=0;i<n;i++)
{
for(j=n-1;j>i;j--)
{
cout<<" ";
}
for(int k=1;k<=v1;k++)
{
cout<<abs(k-v2);
}
v1+=2;
v2++;
cout<<"\n";
}
}
int main()
{
int n;
scanf("%d",&n);
pattern(n);
return 0;
}
