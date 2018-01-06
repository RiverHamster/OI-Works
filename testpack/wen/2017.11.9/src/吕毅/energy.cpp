#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<stack>
using namespace std;
typedef unsigned long long ll;
ll s;
int t,n,c;
int main()
{
	freopen("energy.in","r",stdin);
	freopen("energy.out","w",stdout);
	scanf("%d",&t);
	while(t--)
	{
		s=0;
		scanf("%d",&n);
		c=2*n-1;
		s=(ll)(1+c)*n/2;
		cout<<s<<' ';
		s=(ll)(1+n)*n/2;
		s*=3;
		//cout<<s<<endl;
		cout<<s<<endl;
	}
}