#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
struct hy{
	int start,end;
	bool ok;
};
hy a[10001];
bool b[10001];
int pd()
{
	for (int i=1;i<=n;i++)
	{
		if (!b[i]) return 0;
	}
	return 1;
}
int solve()
{
	int s=0;
	while (!pd())
	{
		for(int i=1,t=-1;i<=n;++i)
		{
			if(a[i].start>=t&&!b[i]) 
			{
				t=a[i].end,b[i]=1;
			}
		}
		s++;
	}
	return s;
}
bool cmp(hy x,hy y)
{
	if (x.start==y.start) return x.end<y.end;
	return x.start<y.start;
}
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	for (int i=1;i<=n;i++)
	scanf("%d %d",&a[i].start,&a[i].end);
	sort(a+1,a+n+1,cmp);
	printf("%d",solve());
}
