#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
int main ()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n,m,h,minn=1000005;
	long long sum=0,ans;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d",&h); 
			sum+=h;
			if(h<minn) minn=h;
		}
		cout<<sum+minn<<endl;
		sum=0;
	}
	return 0;
}

