#include<cstdio>
#include<stdio.h>
#include<string>
#include<cstring>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	int t,n,ans=0,x=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int i=0;i<n-1;i++)
		{cin>>x;
			if(x!=1)ans+=x-1;
		}
		cin>>x;
		ans+=x;
		cout<<ans<<endl;
		ans=0;
	}
}