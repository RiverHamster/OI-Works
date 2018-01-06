#include<algorithm>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<queue>
#include<string>
#include<ctime>
#include<map>
#define f(i,j,n) for(i=j;i<=n;i++)
#define p(i,j,n) for(i=j;i>=n;i--)
#define ll long long
#define ld long double
using namespace std;

int main()
{
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x;
		scanf("%d",&x);
		printf("%d %d\n",(x&(x-1))+1,(x|(x-1)));
	}
}
