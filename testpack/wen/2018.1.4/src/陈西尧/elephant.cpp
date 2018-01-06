#include<cstdio>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n,ans=0;
	scanf("%d",&t);
	while(t!=0)
	{
		t--;
		scanf("%d",&n);
		while(n>=10)
		{
			n-=10;ans++;
		}
		while(n>=5)
		{
			n-=5;ans++;
		}
		while(n>=1)
		{
			n-=1;ans++;
		}
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}
