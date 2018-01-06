#include<iostream>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	long long t,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=n*n;
		b=3*(n*(n+1)/2);
		cout<<a<<' '<<b<<endl;
	}
	return 0;
}
