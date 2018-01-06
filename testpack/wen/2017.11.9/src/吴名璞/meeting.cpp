#include<cstdio>
#include<algorithm>
using namespace std;
int a[1005];
int b[1005];
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t;
	int ans=0;
	int sum=1;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	sort(b+1,b+t+1);
	for(int i=1;i<=t;i++)
	{
		if(b[i]<=a[i+1])
			sum++;
	}
	ans=t-sum+1;
	printf("%d",ans);
}
