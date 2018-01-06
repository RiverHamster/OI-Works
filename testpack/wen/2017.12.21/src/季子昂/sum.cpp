#include <iostream>
#include <algorithm>
using namespace std;
long long a[100005],b[100005];
long long n,s=0;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			s+=a[j];
		}
		sort(a,a+n);
		s+=a[0];
		b[i]=s;
		s=0;
	}
	for(int i=1;i<=t;i++)
	{
		cout<<b[i]<<endl;
	}
}