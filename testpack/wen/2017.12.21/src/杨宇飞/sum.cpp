#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	freopen("sum.in","r",stdin);
	freopen("sum.out","w",stdout);
	int n,i;
	cin>>n;
	int a;
	while(n--)
	{
		long long ans=0,s=2147283647;
		cin>>i;
		for(int j=0;j<i;j++)
		{
			cin>>a;
			if(a<s)
				s=a;
			ans+=a;
		}
		cout<<s+ans<<endl;
	}
	return 0;
}

