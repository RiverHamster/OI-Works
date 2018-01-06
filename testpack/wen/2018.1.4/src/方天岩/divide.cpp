#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int a[205],f[100005];
int main()
{
	freopen("divide.in","r",stdin);
    freopen("divide.out","w",stdout);
	int t,n,i,j;
	cin>>t;
	while (t--)
	{
		int sum=0;
		cin>>n;
		for (i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		int p=sum;
		sum/=2;
		memset(f,0,sizeof(f));
		for (i=1;i<=n;i++)
		{
			for (j=sum;j>=a[i];j--)
			{
				f[j]=max(f[j],f[j-a[i]]+a[i]);
				
			}
		}
		int y=p-f[sum];
		cout<<abs(y-f[sum])<<endl;
	}
	return 0;
}