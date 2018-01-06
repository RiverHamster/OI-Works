#include<cstdio>
#include<cstring>
#include<iostream>
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=j;i>=n;i--)
using namespace std;

int main()
{
	freopen("escape.in","r",stdin);
	freopen("escape.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.size(),i;
		f(i,0,l-1)
			if(s[i]=='r')
				printf("%d ",i+1);
		p(i,l-1,0)
			if(s[i]=='l')
				printf("%d ",i+1);
		printf("\n");
	}
	return 0;
}
