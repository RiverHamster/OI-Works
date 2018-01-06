#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("elephant.in","r",stdin);
	freopen("elephant.out","w",stdout);
	int t,n;
	cin>>t;
	while(t--)
	{
		int ans=0;
		cin>>n;
		while(1)
		{
			if(n-10>=0){n-=10;ans++;}else break;
		}
		while(1)
		{
			if(n-5>=0){n-=5;ans++;}else break;
		}
		while(1)
		{
			if(n-1>=0){n-=1;ans++;}else break;
		}
		cout<<ans<<endl;
	}
}