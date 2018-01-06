#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[15];
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,n,i,j;
	cin>>t;
	while (t--)
	{
		int sum=0;
		cin>>n;
		for (i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<sum-n+1<<endl;
	}
	return 0;
}