#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	unsigned long long t,n,i,j;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<n*n<<" ";
		unsigned long long sum=0;
		for (i=1;i<=n;i++)
		{
			sum+=i*3;
		}
		cout<<sum<<endl;
	}
	return 0;
}