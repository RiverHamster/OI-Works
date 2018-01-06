#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#define f(i,j,n) for(i=j;i<=n;i++)
using namespace std;

struct Node
{
	int begin,end;
}a[1000005];

bool b[1000005];

bool cmp(Node x,Node y)
{
	if(x.begin!=y.begin)
		return x.begin<y.begin;
	return x.end<y.end;
} 

int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int n,ans,i,j;
	cin>>n;
	ans=n;
	f(i,1,n)
		cin>>a[i].begin>>a[i].end;
	sort(a+1,a+1+n,cmp);
	f(i,1,n)
		f(j,i+1,n)
			if(a[i].end<=a[j].begin&&b[i]==0&&b[j]==0)
				ans--,b[j]=1,a[i].end=a[j].end;
	cout<<ans<<endl;
	return 0;
}
