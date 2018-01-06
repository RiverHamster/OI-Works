#include<cstdio>
#include<stdio.h>
#include<string>
#include<string.h>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	long long t,n,s=0,x=0;
	cin>>t;
	while(t)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			s+=i;
			x+=i-1;
		}
		cout<<s+x<<" ";
		cout<<s*3<<endl;
		t--;
		s=0;
		x=0;
	}
}