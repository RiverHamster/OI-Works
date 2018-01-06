#include<cstdio>
#include<iostream>
using namespace std;
int t,n;
int main ()
{
	freopen("energy.in","r",stdin);
    freopen("energy.out","w",stdout);
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		cout<<n*n<<" "<<(unsigned long long)3*(n*n+n)/2<<endl;
	}
    return 0;
}
