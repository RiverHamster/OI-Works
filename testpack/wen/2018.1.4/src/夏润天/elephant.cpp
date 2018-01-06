#include <cstdio>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n,ans1,ans2,ans3;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans1=n/10;
		n-=ans1*10;
		ans2=n/5;
		n-=ans2*5;
		ans3=n;
		printf("%d\n",ans1+ans2+ans3);
	}
	return 0;
}
