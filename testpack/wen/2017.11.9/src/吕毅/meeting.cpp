#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<stack>
using namespace std;
typedef long long ll;
struct node{
	int a,b;
}a[1000];
int t,ans;
bool cmp(node a,node b)
{
	if(a.a!=b.a)return a.a<b.a;
		else
			return a.b<b.b;
}
bool pd[10000];
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	scanf("%d",&t);
	for(int i=0;i<t;i++)
		scanf("%d%d",&a[i].a,&a[i].b);
	sort(a,a+t,cmp);
	ans=t;
	for(int i=0;i<t;i++)
	{
		for(int j=i+1;j<t;j++)
			if(a[j].a>=a[i].b&&!pd[j]){ans--;pd[j]=1;break;}
	}
	cout<<ans;
}
