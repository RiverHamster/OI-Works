#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int n,l=1,f[1005];
struct sss
{
	int a,b;
}x[1005];
bool cmp(sss i,sss j)
{
	if (i.a==j.a)return i.b<j.b;
	else return i.a<j.a;
}
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf ("%d%d",&x[i].a,&x[i].b);
	sort(x,x+n,cmp);
	f[1]=x[0].b;
	for (int i=1;i<n;i++)
    {
		int j=1;
		for (;j<=l;j++)
			if (f[j]<=x[i].a){f[j]=x[i].b;break;}
		if (j>l)f[++l]=x[i].b;
		sort(f+1,f+l+1);
	}
	printf ("%d\n",l);
	return 0;
}
/*
10
1 2
3 4 
5 6 
1 3 
2 4 
3 5
4 6 
5 7 
1 10
2 8
*/
