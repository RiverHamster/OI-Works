#include<iostream>
#include<cstdio>
using namespace std;
int mn(int x,int y)
{
	return x>y?y:x;
}
int t,n,a,minn;
long long s;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	scanf("%d\n",&t);
	while (t--)
	{
		scanf("%d\n",&n);
		s=0;
		minn=100005;
		while (n--)
		{
			scanf("%d",&a);
			s+=a;
			minn=mn(minn,a);
		}
		s+=minn;
		cout<<s<<endl;
	}
	return 0;
}

