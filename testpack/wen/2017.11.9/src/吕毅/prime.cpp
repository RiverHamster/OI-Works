#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<stack>
using namespace std;
int p[1301],g,n,s,ans;
bool f;
int t;
bool prime(int n)
{
	if(n==2)return 1;
		for(int i=2;i*i<=n;i++)
			if(n%i==0)return 0;
	return 1;
}
void db()
{
	p[0]=2;
	g=1;
	for(int i=3;i<=10000;i+=2)
	{
		if(prime(i))p[g++]=i;
	}
}
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	db();
	//1229;
	scanf("%d",&t);
	while(t--)
	{
		f=0;ans=0;
		scanf("%d",&n);
		for(int i=0;p[i]<=n;i++)
		{
			s=0;
			for(int j=i;s<n&&j<1299;j++)
			{
				s+=p[j];
				if(s==n){ans++;f=1;break;}
			}
		}
		if(!f){printf("0\n");}
		else
			printf("%d\n",ans);
	}
}
