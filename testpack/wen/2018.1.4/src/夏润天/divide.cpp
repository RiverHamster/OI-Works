#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
bool p[5000005];
int a[55];
int main()
{
	freopen("divide.in","r",stdin);
	freopen("divide.out","w",stdout);
	int t,n,sum,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]),sum+=a[i];
		memset(p,0,sizeof(p));
		p[0]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=sum;j>=a[i];j--)
				p[j]=p[j]||p[j-a[i]];
		}
		ans=sum>>1;
		while(!p[ans])
			ans--;
		printf("%d\n",abs(abs(sum-ans)-ans));
	}
	return 0;
}
