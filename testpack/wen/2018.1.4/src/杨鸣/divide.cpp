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

const int N=50,M=10000005;
int a[N],f[M];

int main()
{
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(f,0,sizeof(f));
		int n,sum,tp,key,i,j;
		scanf("%d",&n),sum=0;
		f(i,1,n)
			scanf("%d",&a[i]),sum+=a[i];
		tp=sum,sum/=2;
		f(i,1,n)
			p(j,sum,a[i])
				f[j]=max(f[j],f[j-a[i]]+a[i]);
		key=tp-f[sum],printf("%d\n",abs(f[sum]-key));
	}
}
