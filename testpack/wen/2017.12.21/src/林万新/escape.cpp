#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int t,l,r,b[100005];
string a;
int main()
{
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	scanf("%d\n",&t);
	while (t--)
	{
		cin>>a;
		l=1;
		r=a.size();
		memset(b,0,sizeof(b));
		for (int i=0;i<a.size();i++)
		{
			if (a[i]=='l')
				b[r--]=i+1;
			else
				b[l++]=i+1;
		}
		for (int i=1;i<=a.size();i++)
			printf("%d ",b[i]);
		printf("\n");
	}
	return 0;
}
