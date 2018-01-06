#include<cstdio>
#include<stdio.h>
#include<string>
#include<string.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include"cstdlib"

int a[1000],b[1000];

using namespace std;

int main()
{
	freopen("meeting.in","r",stdin);
	freopen("meeting.out","w",stdout);
	int t,n,ans=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<t;i++)
	{
		for(int j=i+1;j<t;j++)
		{
			if(b[i]>b[j])
			{int t=b[i];b[i]=b[j];b[j]=t;
				t=a[i];a[i]=a[j];a[j]=t;}
				if(b[i]==b[j])                                     
				{
				if(a[i]>a[j])
				{
					int t=a[i];a[i]=a[j];a[j]=t;
					t=b[i];b[i]=b[j];b[j]=t;
				}
				}
		}
	}
	for(int i=0;i<t;i++)
	{
		if(b[i]>a[i+1])ans++;
	}
	cout<<ans;
}
