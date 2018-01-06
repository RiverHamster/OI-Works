#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<stack>
using namespace std;
typedef long long ll;
ll t,k,a,s;

int main()
{
	freopen("outlet.in","r",stdin);
	freopen("outlet.out","w",stdout);
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>k;
		for(int i=1;i<=k;i++)
		{cin>>a;s+=a;}
		cout<<s-k+1<<endl;
	}
}