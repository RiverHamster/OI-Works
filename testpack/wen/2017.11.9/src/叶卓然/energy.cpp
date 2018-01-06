#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int lj(int n)
{
	if (n<=1){return 1;}
	return n+(lj (n-1));
}
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int n,a;long long s,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		s=a*a;
		b=lj(a);
		b*=3;
		cout<<s<<" "<<b<<endl;
	}
}


