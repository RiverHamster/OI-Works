#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
bool pd(int n)
{
	int i=2;
	for (i=2;i*i<=n;i++)
		if (n%i==0)
			return false;
	return true;
}
int a[10005];
int main()
{
	freopen("prime.in","r",stdin);
	freopen("prime.out","w",stdout);
	int i=2,n,k=0,j;
	for (i=2;i<=10000;i++)
	{
		if (pd(i))
			a[++k]=i;
	}
	int s;
	cin>>n;
	while (n--)
	{
		cin>>s;
		int sum=0;
		for (i=1;;i++)
		{
			int t=0;
			if (a[i]>s)
				break;
				for (j=i;;j++)
				{
					t+=a[j];
					if (t==s)
					{
						sum++;
						break;
					}
					if (t>s)
					{
						break;
					}
				}
		}
		cout<<sum<<endl;
	}
	return 0;
}