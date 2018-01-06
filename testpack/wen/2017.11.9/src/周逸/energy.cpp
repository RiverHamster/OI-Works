#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
long long s;
long long h;
long long ll=1;
int main()
{
	freopen ("energy.in","r",stdin);
	freopen ("energy.out","w",stdout);
	long long n,i,cs;
	scanf ("%lld",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%*c%lld",&cs);
		s=cs*cs;
		h=(1+cs)*cs/2*3;
		cout<<s*ll<<' '<<h*ll<<endl;
	}
	return 0;
}
