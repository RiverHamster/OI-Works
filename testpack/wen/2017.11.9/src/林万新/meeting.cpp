#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct f{
	int a,b;
};
f a[1005];
bool b[1005];
bool cmp(f a,f b)
{
	if (a.a==b.a)
		return a.b<b.b;
	else
		return a.a<b.a;
}
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t,s=0;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
		scanf("%d%d",&a[i].a,&a[i].b);
	sort(a,a+t,cmp);
	for (int i=0;i<t;i++)
	{
		if (b[i]==0)
			s++;
		for (int j=i+1;j<t;j++)
		{
			if (a[i].b<=a[j].a)
			{
				b[j]=1;
				break;
			}
		}
	}
	printf("%d",s);
	return 0;
}