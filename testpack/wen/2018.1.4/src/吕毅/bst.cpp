#include<iostream>
#include<cstdio>
typedef long long ll;
using namespace std;
int main()
{
	freopen("bst.in","r",stdin);
	freopen("bst.out","w",stdout);
	ll x,t;
	cin>>t;
	while(t--)
	{	cin>>x;
		cout<<(x&(x-1))+1<<' ';
		cout<<(x|(x-1))<<endl;
	}
}