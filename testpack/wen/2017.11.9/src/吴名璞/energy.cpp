#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t;
	scanf("%d",&t);
	long long n;
	long long a,b;
	while(t--)
	{
		scanf("%lld",&n);
		a=((1+(2*n-1))*n)/2;
		b=(((1+n)*n)/2)*3;
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
