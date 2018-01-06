#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int all,s,ans=0;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&all);
		s=all/10;ans+=s;
		all%=10;
		s=all/5;ans+=s;
		all%=5;
		ans+=all;
		printf("%d\n",ans);
		ans=0;
	}
}

