#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	int t,n;
	long long s1,s2;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		s1=(long long)n*n;
		s2=(long long)(1+n)*n/2*3;
		cout<<s1<<" "<<s2<<endl;
	}
	return 0;
}