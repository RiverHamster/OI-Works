#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<fstream>
#include<algorithm>
using namespace std;
int n,s=0,i,j=1;
struct meet
{
	int x;
	int y;
}a[1005];
bool cmp(meet x,meet y)
{
	return x.x>y.x;
}
int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i].x>>a[i].y;
	sort(a+1,a+n+1,cmp);
	for(i=2;i<=n;i++)
	{
		if(a[i].x<a[j].y)
			s++;
		else
			j++;
	}
	cout<<s;
	return 0;
}
